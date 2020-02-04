/* Ricochet - https://ricochet.im/
 * Copyright (C) 2014, John Brooks <john.brooks@dereferenced.net>
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are
 * met:
 *
 *    * Redistributions of source code must retain the above copyright
 *      notice, this list of conditions and the following disclaimer.
 *
 *    * Redistributions in binary form must reproduce the above
 *      copyright notice, this list of conditions and the following disclaimer
 *      in the documentation and/or other materials provided with the
 *      distribution.
 *
 *    * Neither the names of the copyright owners nor the names of its
 *      contributors may be used to endorse or promote products derived from
 *      this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
 * A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
 * OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 * LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 * DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 * THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#include "CryptoKey.h"
#include "SecureRNG.h"
#include "Useful.h"
#include <QtDebug>
#include <QFile>
#include <openssl/bn.h>
#include <openssl/bio.h>
#include <openssl/pem.h>
#include <QMessageBox>
#include <memory>
extern "C" {
    #include "../lib/onion_ed25519_signature/sign.h"
}

#if OPENSSL_VERSION_NUMBER < 0x10100000L || defined(LIBRESSL_VERSION_NUMBER)
void RSA_get0_factors(const RSA *r, const BIGNUM **p, const BIGNUM **q)
{
  *p = r->p;
  *q = r->q;
}
#define RSA_bits(o) (BN_num_bits((o)->n))
#endif

void base32_encode(char *dest, unsigned destlen, const char *src, unsigned srclen);
bool base32_decode(char *dest, unsigned destlen, const char *src, unsigned srclen);

CryptoKey::~CryptoKey()
{
    clear();
}

CryptoKey::Data::~Data()
{
    if (key)
    {
        RSA_free(key);
        key = 0;
    }
}

/**
 * clear all values in the key
 */
void CryptoKey::clear() {
    d = nullptr;
    this->keyType = Empty;
    this->v3EncodedKeyString = "";
}

/**
 * load key from data, used for v2
 * @param data - key data
 * @param type - key type
 * @param format - key format
 * @return success of not
 */
bool CryptoKey::loadFromData(const QByteArray &data, KeyType type, KeyFormat format) {
    if (this->getVersion() == V2) {
        return this->loadFromDataV2(data, type, format);
    } else {
        return false;
    }
}

/**
 * load key from data, used for v3
 * @param data - key data
 * @param type - key type
 * @return success of not
 */
bool CryptoKey::loadFromData(const std::string &data, KeyType type) {
    if (this->getVersion() == V3) {
        return this - loadFromDataV3(data, type);
    } else {
        return false;
    }
}

/**
 * load a v2 key from a by bytearray (in PEM or DER), then save it in a RSA structure, stored in 'd', which
 *  is a Shared Data containing the RSA key
 * @param data - the bytearray key data
 * @param type - V2PrivateKey or V2PublicKey
 * @param format - PER or DER
 * @return success or not
 */
bool CryptoKey::loadFromDataV2(const QByteArray &data, KeyType type, KeyFormat format) {
    RSA *key = NULL;
    clear();

    if (data.isEmpty())
        return false;

    this->keyType = type;

    if (format == PEM) {
        BIO *b = BIO_new_mem_buf((void *) data.constData(), -1);

        if (type == V2PrivateKey)
            key = PEM_read_bio_RSAPrivateKey(b, NULL, NULL, NULL);
        else
            key = PEM_read_bio_RSAPublicKey(b, NULL, NULL, NULL);

        BIO_free(b);
    } else if (format == DER) {
        const uchar *dp = reinterpret_cast<const uchar*>(data.constData());

        if (type == V2PrivateKey)
            key = d2i_RSAPrivateKey(NULL, &dp, data.size());
        else
            key = d2i_RSAPublicKey(NULL, &dp, data.size());
    } else {
        Q_UNREACHABLE();
    }

    if (!key) {
        qWarning() << "Failed to parse" << (type == V2PrivateKey ? "private" : "public") << "key from data";
        this->clear();
        return false;
    }

    d = new Data(key);
    return true;
}

/**
 * load a v3 key or serviceID from a by std::string.
 * will set version to v3.
 * @param type - V3PrivateKey or V3ServiceID
 * @param data - a string containing either the key or serviceID
 * @return success or not
 */
bool CryptoKey::loadFromDataV3(const std::string &data, CryptoKey::KeyType type) {
    clear();

    if (data.empty())
        return false;
    if (type == V3PrivateKey && data.length() != V3PrivateKeyLength) {
        return false;
    }
    if (type == V3ServiceID && data.length() != V3ServiceIDLength) {
        return false;
    }

    this->keyType = type;
    this->v3EncodedKeyString = data;
    return true;
}

// todo seems to be deprecated
bool CryptoKey::loadFromFile(const QString &path, KeyType type, KeyFormat format)
{
    if (this->getVersion() == V2) {
        QFile file(path);
        if (!file.open(QIODevice::ReadOnly)) {
            qWarning() << "Failed to open" << (type == V2PrivateKey ? "private" : "public") << "key from"
                       << path << "-" << file.errorString();
            return false;
        }

        QByteArray data = file.readAll();
        file.close();

        return loadFromData(data, type, format);
    } else {
        //todo no V3 implementation for this, since it's not really used
        return true;
    }
    return false;
}

/**
 * check if a key or service id is stored in this CryptoKey
 * @return stored or not
 */
bool CryptoKey::isLoaded() const {
    return this->keyType != Empty;
//    if (version == V2) {
//        return d.data() && d->key != 0;
//    } else if (version == V3) {
//        //TODO: for v3
//        //FIXME: logic for v3 need to be corrected
//        if (v3privateKey.empty()) {
//            //if(v3ServiceID.length() == CryptoKey::V3ServiceIDByteLength){
//            //
//            //}
//            // v3 private key is empty. check service id
//            return (v3serviceID.length() == CryptoKey::V3ServiceIDLength) ||
//                    (v3serviceID.length() == CryptoKey::V3ServiceIDByteLength);
//        }
//        else {
//            // v3 private key is not empty. check v3 private key
//            return (v3privateKey.length() == CryptoKey::V3PrivateKeyLength) ||
//                    (v3privateKey.length() == CryptoKey::V3PrivateKeyByteLength);
//        }
//    }
//    return false;
}

/**
 * check if this CryptoKey is storing a private key
 * @return private key or not
 */
bool CryptoKey::isPrivate() const
{
    if (!isLoaded()) {
      return false;
    } else {
        return this->keyType == V2PrivateKey || this->keyType == V3PrivateKey;
//        if (version == V2) {
//            const BIGNUM *p, *q;
//            RSA_get0_factors(d->key, &p, &q);
//            return (p != 0);
//        } else if (version == V3) {
//            //TODO: for v3
//            //FIXME: logic for v3 need to be corrected
//            return this.type
//            return (v3privateKey.length() == CryptoKey::V3PrivateKeyLength) ||
//                   (v3privateKey.length() == CryptoKey::V3PrivateKeyByteLength);
//        } else {
//            return false;
//        }
    }
}

/**
 * get public key from a v3 service ID
 * the public key is just the first 52 chars of the service ID (remove last 4 chars)
 * @return a v3 public key
 */
std::string CryptoKey::getEncodedV3PublicKey() const {
    if (this->keyType != V3ServiceID) {
        return "";
    } else {
        return this->v3EncodedKeyString.substr(0, CryptoKey::V3PublicKeyLength);
    }
}

/**
 * get the decoded v3 public key, as a byte array
 * the encoding/decoding is done with base32
 * @return public key in bytes
 */
QByteArray CryptoKey::getDecodedV3PublicKey() const{
    if (this->keyType != V3ServiceID) {
        return QByteArray();
    } else {
        std::string v3publicKey = getEncodedV3PublicKey();
        // to upper case
        for (auto &c: v3publicKey) c = toupper(c);
        // padding last 4 positions (size of 56)
        v3publicKey.append("====");
        // dest variable, add 4 bytes for base32 algorithm
        QByteArray re(CryptoKey::V3PublicKeyByteLength + 4, 0);
        // base32 decoding
        base32_decode(re.data(), re.size(), v3publicKey.c_str(), v3publicKey.size());
        // remove 3 bytes(1 checksum + 2 v3-related) and 1 null
        re.chop(4);
        // check length
        if (re.size() == CryptoKey::V3PublicKeyByteLength) {
            return re;
        } else {
            return QByteArray();
        }
    }
}

/**
 * get the decoded v3 private key, as a byte array
 * the encoding/decoding is done with base64
 * @return private key in bytes
 */
QByteArray CryptoKey::getDecodedV3PrivateKey() const {
    if (this->keyType != V3PrivateKey) {
        return QByteArray();
    } else {
        QByteArray stringBytes = QByteArray::fromStdString(this->v3EncodedKeyString);
        QByteArray bytes(QByteArray::fromBase64(stringBytes));
        // bytes.toHex().constData() will show the char* of the hex representation of decoded key
        if (bytes.size() == CryptoKey::V3PrivateKeyByteLength) {
            return bytes;
        } else {
            return QByteArray();
        }
    }
}

QByteArray CryptoKey::getDecodedHexV3PrivateKey() const {
    if (this->keyType != V3PrivateKey) {
        return QByteArray();
    } else {
        QByteArray stringBytes = QByteArray::fromStdString(this->v3EncodedKeyString);
        QByteArray bytes(QByteArray::fromHex(stringBytes.toHex()));
        // bytes.toHex().constData() will show the char* of the hex representation of decoded key
        if (bytes.size() == CryptoKey::V3PrivateKeyByteLength) {
            return bytes;
        } else {
            return QByteArray();
        }
    }
}

/**
 * return the number of bits of s v2 key
 * @return number of bits
 */
int CryptoKey::bits() const {
    return isLoaded() ? RSA_bits(d->key) : 0;
}

/**
 * hash a v2 public key into a digest
 * @return the digest
 */
QByteArray CryptoKey::v2PublicKeyDigest() const {
    if (!isLoaded())
        return QByteArray();

    QByteArray buf = encodedPublicKey(DER);

    QByteArray re(20, 0);
    bool ok = SHA1(reinterpret_cast<const unsigned char *>(buf.constData()), buf.size(),
                   reinterpret_cast<unsigned char *>(re.data())) != NULL;

    if (!ok)
    {
        qWarning() << "Failed to hash public key data for digest";
        return QByteArray();
    }

    return re;
}

/**
 * encode a public key
 * for v2: PEM or DER public key (RSA) using openssl RSA lib
 * for v3: simply build a byte array from the public key as it is already encoded (base32)
 * @param format PEM or DER
 * @return encoded key byte array
 */
QByteArray CryptoKey::encodedPublicKey(KeyFormat format) const
{
    if (!isLoaded())
        return QByteArray();

    if (this->getVersion() == V3) {
        // for v3, simply build a byte array from the stored public key as it is already encoded.
        return QByteArray::fromStdString(this->getEncodedV3PublicKey());
    } else if (this->getVersion() == V2) {
        if (format == PEM) {
            BIO *b = BIO_new(BIO_s_mem());

            if (!PEM_write_bio_RSAPublicKey(b, d->key)) {
                BUG() << "Failed to encode public key in PEM format";
                BIO_free(b);
                return QByteArray();
            }

            BUF_MEM *buf;
            BIO_get_mem_ptr(b, &buf);

            /* Close BIO, but don't free buf. */
            (void)BIO_set_close(b, BIO_NOCLOSE);
            BIO_free(b);

            QByteArray re((const char *)buf->data, (int)buf->length);
            BUF_MEM_free(buf);
            return re;
        } else if (format == DER) {
            uchar *buf = NULL;
            int len = i2d_RSAPublicKey(d->key, &buf);
            if (len <= 0 || !buf) {
                BUG() << "Failed to encode public key in DER format";
                return QByteArray();
            }

            QByteArray re((const char*)buf, len);
            OPENSSL_free(buf);
            return re;
        } else {
            Q_UNREACHABLE();
        }
    } else {
        return QByteArray();
    }
}

/**
 * encode a private key
 * for v2: PEM or DER private key (RSA) using openssl RSA lib
 * for v3: simply build a byte array from the stored private key as it is already encoded (base64)
 * @param format PEM or DER
 * @return encoded key byte array
 */
QByteArray CryptoKey::encodedPrivateKey(KeyFormat format) const {
    if (!isLoaded() || !isPrivate())
        return QByteArray();

    if (this->getVersion() == V3) {
        return QByteArray::fromStdString(this->v3EncodedKeyString);
    } else if (this->getVersion() == V2) {
        if (format == PEM) {
            BIO *b = BIO_new(BIO_s_mem());

            if (!PEM_write_bio_RSAPrivateKey(b, d->key, NULL, NULL, 0, NULL, NULL)) {
                BUG() << "Failed to encode private key in PEM format";
                BIO_free(b);
                return QByteArray();
            }

            BUF_MEM *buf;
            BIO_get_mem_ptr(b, &buf);

            /* Close BIO, but don't free buf. */
            (void)BIO_set_close(b, BIO_NOCLOSE);
            BIO_free(b);

            QByteArray re((const char *)buf->data, (int)buf->length);
            BUF_MEM_free(buf);
            return re;
        } else if (format == DER) {
            uchar *buf = NULL;
            int len = i2d_RSAPrivateKey(d->key, &buf);
            if (len <= 0 || !buf) {
                BUG() << "Failed to encode private key in DER format";
                return QByteArray();
            }

            QByteArray re((const char*)buf, len);
            OPENSSL_free(buf);
            return re;
        } else {
            Q_UNREACHABLE();
        }
    } else {
        return QByteArray();
    }
}

/**
 * return the serviceID from the key
 * v2: encode the key's hash (digest) with base32
 *      serviceID is the onion address, obtained from the first 16 chars from above
 * v3: the service id is stored so just return it
 * @return serviceID
 */
QString CryptoKey::torServiceID() const {
    // for v3, the service id is stored explicitly
    if (this->getVersion() == V3) {
        if (this->keyType == V3ServiceID) {
            return QLatin1String(this->v3EncodedKeyString.c_str());
        } else {
            return QString();
        }
    } else if (this->getVersion() == V2) {
        if (!isLoaded()) {
            return QString();
        }

        QByteArray digest = v2PublicKeyDigest();
        if (digest.isNull())
            return QString();

        static const int hostnameDigestSize = 10;
        static const int hostnameEncodedSize = 16;

        QByteArray re(hostnameEncodedSize+1, 0);
        base32_encode(re.data(), re.size(), digest.constData(), hostnameDigestSize);

        // Chop extra null byte
        re.chop(1);

        return QString::fromLatin1(re);
    } else {
        return QString();
    }
}

/**
 * sign the message(proofHMAC) for v2
 * @param digest
 * @return the signature
 */
QByteArray CryptoKey::signSHA256(const QByteArray &digest) const {
    if (this->keyType != V2PrivateKey) {
        return QByteArray();
    }

    int result = 0; // result on generating signature, 1: successful, 0: failed
    QByteArray re(RSA_size(d->key), 0);
    unsigned sigsize = 0;
    result = RSA_sign(NID_sha256, reinterpret_cast<const unsigned char *>(digest.constData()), digest.size(),
                      reinterpret_cast<unsigned char *>(re.data()), &sigsize, d->key);
    if (result != 1) {
        qWarning() << "RSA encryption failed when generating signature";
        return QByteArray();
    } else {
        re.truncate(sigsize);
        return re;
    }
}

/**
 * sign the message(proofHMAC) for v3
 * @param digest
 * @return the signature
 */
QByteArray CryptoKey::signSHA256(const QByteArray &digest, const CryptoKey &v3serviceID) const {
    if (this->keyType != V3PrivateKey || v3serviceID.keyType != V3ServiceID) {
        return QByteArray();
    }

    int result = 0; // result on generating signature, 1: successful, 0: failed
    // call signing function for v3 keys
    QByteArray re(V3SignatureByteLength, 0);
    //todo auth test if this works: try getEncodedV3PublicKey or decoded
    result = ed25519_donna_sign(
            reinterpret_cast<unsigned char *>(re.data()),
            reinterpret_cast<const unsigned char *>(digest.constData()),
            digest.size(), reinterpret_cast<const unsigned char *>(this->v3EncodedKeyString.c_str()),
            reinterpret_cast<const unsigned char *>(v3serviceID.getEncodedV3PublicKey().c_str()));
    if (result != 1) {
        qWarning() << "ed25519 encryption failed when generating signature";
        return QByteArray();
    } else {
        return re;
    }
}

/**
 * check data digest against signature with own key
 * @param digest clientCookie + serverCookie (a check sum of the data using SHA256) a.k.a message
 * @param the signature to test
 * @return valid or not
 * v3: need pubkey and message length
 */
bool CryptoKey::verifySHA256(const QByteArray &digest, QByteArray signature) const
{
    int result = 0; // result on verifying signature, 1: successful, 0: failed
    if (this->keyType == V2PublicKey) {
        result = RSA_verify(NID_sha256, reinterpret_cast<const uchar *>(digest.constData()), digest.size(),
                            reinterpret_cast<uchar *>(signature.data()), signature.size(), d->key);
    } else if (this->keyType == V3ServiceID) {
        //call verifying function for v3 keys
        result = ed25519_sign_open(reinterpret_cast<const uchar*>(digest.constData()), digest.size(),
                                   reinterpret_cast<const uchar*>(v3publicKey.c_str()),
                                   reinterpret_cast<const uchar*>(signature.constData())) != -1;
    }
    else {
        return false;
    }
    qDebug() << "result=" << result;
    return result == 1;
}

/* Cryptographic hash of a password as expected by Tor's HashedControlPassword */
QByteArray torControlHashedPassword(const QByteArray &password)
{
    QByteArray salt = SecureRNG::random(8);
    if (salt.isNull())
        return QByteArray();

    int count = ((quint32)16 + (96 & 15)) << ((96 >> 4) + 6);

    SHA_CTX hash;
    SHA1_Init(&hash);

    QByteArray tmp = salt + password;
    while (count)
    {
        int c = qMin(count, tmp.size());
        SHA1_Update(&hash, reinterpret_cast<const void*>(tmp.constData()), c);
        count -= c;
    }

    unsigned char md[20];
    SHA1_Final(md, &hash);

    /* 60 is the hex-encoded value of 96, which is a constant used by Tor's algorithm. */
    return QByteArray("16:") + salt.toHex().toUpper() + QByteArray("60") +
           QByteArray::fromRawData(reinterpret_cast<const char*>(md), 20).toHex().toUpper();
}

/**
 * verify the data('s digest) against the signature, with own key
 * used only by test
 * @param data
 * @param signature
 * @return valid or not
 */
bool CryptoKey::verifyData(const QByteArray &data, QByteArray signature) const
{
    if (this->keyType == V3ServiceID) {
        // todo
    } else if (this->keyType == V2PublicKey) {
        QByteArray digest(32, 0);
        bool ok = SHA256(reinterpret_cast<const unsigned char *>(data.constData()), data.size(),
                         reinterpret_cast<unsigned char *>(digest.data())) != NULL;

        if (!ok) {
            qWarning() << "Digest for RSA verify failed";
            return false;
        }

        return verifySHA256(digest, signature);
    }
    return false;
}

/**
 * sign the data's digest (a checksum of data by SHA256) with own private key
 * used only by test
 * @param data
 * @return signature
 */
QByteArray CryptoKey::signData(const QByteArray &data) const
{
    if (this->getVersion() == V3) {
        std::string signature;
        // todo: sign v3 ed25519 key
        // param1: signature, param2: message(proof data), param3: message length, param4: private key, param5: public key


    } else if (this->getVersion() == V2) {
        QByteArray digest(32, 0);
        bool ok = SHA256(reinterpret_cast<const unsigned char *>(data.constData()), data.size(),
                         reinterpret_cast<unsigned char *>(digest.data())) != NULL;
        if (!ok) {
            qWarning() << "Digest for RSA signature failed";
            return QByteArray();
        }

        return signSHA256(digest);
    }
    return QByteArray();
}

/**
 * get the version of the current key
 * @return V2, V3 or INVALID
 */
CryptoKey::Version CryptoKey::getVersion() const {
    if (this->keyType == V2PrivateKey || this->keyType == V2PublicKey) {
        return V2;
    } else if (this->keyType == V3PrivateKey || this->keyType == V3ServiceID) {
        return V3;
    } else {
        return INVALID;
    }
}

/* Copyright (c) 2001-2004, Roger Dingledine
 * Copyright (c) 2004-2006, Roger Dingledine, Nick Mathewson
 * Copyright (c) 2007-2010, The Tor Project, Inc.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are
 * met:
 *
 *   Redistributions of source code must retain the above copyright
 *   notice, this list of conditions and the following disclaimer.
 *
 *   Redistributions in binary form must reproduce the above
 *   copyright notice, this list of conditions and the following disclaimer
 *   in the documentation and/or other materials provided with the
 *   distribution.
 *
 *   Neither the names of the copyright owners nor the names of its
 *   contributors may be used to endorse or promote products derived from
 *   this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
 * A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
 * OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 * LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 * DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 * THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#define BASE32_CHARS "abcdefghijklmnopqrstuvwxyz234567"

/* Implements base32 encoding as in rfc3548. Requires that srclen*8 is a multiple of 5. */
void base32_encode(char *dest, unsigned destlen, const char *src, unsigned srclen)
{
    unsigned i, bit, v, u;
    unsigned nbits = srclen * 8;

     /* We need an even multiple of 5 bits, and enough space */
    if ((nbits%5) != 0 || destlen > (nbits/5)+1) {
        Q_ASSERT(false);
        memset(dest, 0, destlen);
        return;
    }

    for (i = 0, bit = 0; bit < nbits; ++i, bit += 5)
    {
        /* set v to the 16-bit value starting at src[bits/8], 0-padded. */
        v = ((quint8) src[bit / 8]) << 8;
        if (bit + 5 < nbits)
            v += (quint8) src[(bit/8)+1];

        /* set u to the 5-bit value at the bit'th bit of src. */
        u = (v >> (11 - (bit % 8))) & 0x1F;
        dest[i] = BASE32_CHARS[u];
    }

    dest[i] = '\0';
}

/* Implements base32 decoding as in rfc3548. Requires that srclen*5 is a multiple of 8. */
bool base32_decode(char *dest, unsigned int destlen, const char *src, unsigned int srclen)
{
    unsigned int i, j, bit;
    unsigned nbits = srclen * 5;

     /* We need an even multiple of 8 bits, and enough space */
    if ((nbits%8) != 0 || (nbits/8)+1 > destlen) {
        Q_ASSERT(false);
        return false;
    }

    char *tmp = new char[srclen];

    /* Convert base32 encoded chars to the 5-bit values that they represent. */
    for (j = 0; j < srclen; ++j)
    {
        if (src[j] > 0x60 && src[j] < 0x7B)
            tmp[j] = src[j] - 0x61;
        else if (src[j] > 0x31 && src[j] < 0x38)
            tmp[j] = src[j] - 0x18;
        else if (src[j] > 0x40 && src[j] < 0x5B)
            tmp[j] = src[j] - 0x41;
//        else
//        {
//            delete[] tmp;
//            return false;
//        }
    }

    /* Assemble result byte-wise by applying five possible cases. */
    for (i = 0, bit = 0; bit < nbits; ++i, bit += 8)
    {
        switch (bit % 40)
        {
        case 0:
            dest[i] = (((quint8)tmp[(bit/5)]) << 3) + (((quint8)tmp[(bit/5)+1]) >> 2);
            break;
        case 8:
            dest[i] = (((quint8)tmp[(bit/5)]) << 6) + (((quint8)tmp[(bit/5)+1]) << 1)
                      + (((quint8)tmp[(bit/5)+2]) >> 4);
            break;
        case 16:
            dest[i] = (((quint8)tmp[(bit/5)]) << 4) + (((quint8)tmp[(bit/5)+1]) >> 1);
            break;
        case 24:
            dest[i] = (((quint8)tmp[(bit/5)]) << 7) + (((quint8)tmp[(bit/5)+1]) << 2)
                      + (((quint8)tmp[(bit/5)+2]) >> 3);
            break;
        case 32:
            dest[i] = (((quint8)tmp[(bit/5)]) << 5) + ((quint8)tmp[(bit/5)+1]);
            break;
        }
    }

    delete[] tmp;
    return true;
}

template < int a, int b >
static size_t
DecodeSize(size_t sz)
{
    auto d = div(sz, a);
    if(d.rem)
        d.quot++;
    return b * d.quot;
}

/// get base32 binary size of encoded input of size sz bytes
static size_t
Base32DecodeSize(size_t sz)
{
    return DecodeSize< 5, 8 >(sz);
}

// std::string version of base32_decode
std::string decode_base32(std::string encoded)
{
    const size_t decode_len = Base32DecodeSize(encoded.size());
    char * ptr = new char[decode_len];
    if(base32_decode(ptr, decode_len, encoded.c_str(), encoded.size()))
    {
        return ptr;
    }
    delete [] ptr;
    return "";
}
