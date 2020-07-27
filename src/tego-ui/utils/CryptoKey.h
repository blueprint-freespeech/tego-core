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
    enum KeyType {
        PrivateKey,
        PublicKey
    };

    enum KeyFormat {
        PEM,
        DER,
        ED25519_V3,
    };

    bool loadFromData(const QByteArray &data, KeyType type, KeyFormat format);
    bool loadFromData(const QByteArray &data, KeyType type) {};
    // load from tor's 'KeyBlob' format
    bool loadFromKeyBlob(const QByteArray& keyBlob);
    void clear();

    bool isLoaded() const { return d.data() && d->key != 0; }
    bool isPrivate() const;

    QByteArray publicKeyDigest() const;
    QByteArray encodedPrivateKey(KeyFormat format) const;
    QByteArray encodedPublicKey(KeyFormat format) const;
    // write to tor's 'KeyBlob' format
    QByteArray encodedKeyBlob() const;
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
};

QByteArray torControlHashedPassword(const QByteArray &password);

#endif // CRYPTOKEY_H
