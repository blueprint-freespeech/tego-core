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

#ifndef CRYPTOKEY_H
#define CRYPTOKEY_H

#include <QString>
#include <QSharedData>
#include <QExplicitlySharedDataPointer>

class CryptoKey
{
public:
    // lengths for v3 keys and serviceID
    // note, these lengths are based on the encoded string returned by Tor service:
    //  serviceID and public key: base32 encoded
    //  private key: base64 encoded secret scalar + PRF secret (not ed25519 seed)
    static const int V3ServiceIDLength = 56;
    static const int V3PrivateKeyLength = 88;
    static const int V3PublicKeyLength = 52;

    static const int V3PrivateKeyByteLength = 64;
    static const int V3PublicKeyByteLength = 32;
    static const int V3SignatureByteLength = 64;


    enum KeyType {
        PrivateKey,
        PublicKey,
        V3PrivateKey,
        V3ServiceID,
    };

    // V3 keys can be encoded in either base32 (public key/service id) or base64 (private key hash)
    // should call isPrivate() or isV3serviceID() to check
    enum KeyFormat {
        PEM,
        DER,
        V3ENCODED,
    };

    // the version of the onion service used, since v2 and v3 have totally different types of keys
    enum Version {
        V2,
        V3,
        INVALID,
    };

    CryptoKey() {version = INVALID;};

    explicit CryptoKey(const CryptoKey::Version version) : version(version) {
        v3privateKey = "";
        v3serviceID = "";
    };
    CryptoKey(const CryptoKey &other) : d(other.d), version(other.version),
                                        v3privateKey(other.v3privateKey), v3serviceID(other.v3serviceID){ };
    ~CryptoKey();

    bool loadFromData(const QByteArray &data, KeyType type, KeyFormat format = PEM);
    bool loadFromDataV3(const std::string &data, KeyType type);
    bool loadFromFile(const QString &path, KeyType type, KeyFormat format = PEM);
    void clear();

    bool isLoaded() const;
    bool isPrivate() const;
    bool isV3serviceID() const;

    std::string getV3PublicKey() const;
    std::string getV3ServiceId() const { return this->v3serviceID; }
    Version getVersion() const { return this->version; }
    QByteArray getDecodedV3PublicKey() const;
    QByteArray getDecodedV3PrivateKey() const;
    QByteArray publicKeyDigest() const;
    QByteArray encodedPublicKey(KeyFormat format) const;
    QByteArray encodedPrivateKey(KeyFormat format) const;
    QString torServiceID() const;
    int bits() const;

    // Calculate and sign SHA-256 digest of data using this key and PKCS #1 v2.0 padding
    QByteArray signData(const QByteArray &data) const;
    // Verify a signature as per signData
    bool verifyData(const QByteArray &data, QByteArray signature) const;

    // Sign the input SHA-256 digest using this key and PKCS #1 v2.0 padding
    QByteArray signSHA256(const QByteArray &digest) const;
    // Verify a signature as per signSHA256
    bool verifySHA256(const QByteArray &digest, QByteArray signature) const;

private:
    struct Data : public QSharedData
    {
        typedef struct rsa_st RSA;
        RSA *key;

        Data(RSA *k = 0) : key(k) { }
        ~Data();
    };

    QExplicitlySharedDataPointer<Data> d;


    Version version;
    std::string v3privateKey;
    std::string v3publicKey;
    std::string v3serviceID;
};

QByteArray torControlHashedPassword(const QByteArray &password);

#endif // CRYPTOKEY_H
