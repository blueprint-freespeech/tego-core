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

#include <QtTest>
#include <string.h>
#include "utils/CryptoKey.h"
#include "utils/SecureRNG.h"

#include <stdio.h>

void base32_encode(char *dest, unsigned destlen, const char *src, unsigned srclen);
bool base32_decode(char *dest, unsigned destlen, const char *src, unsigned srclen);

class TestCryptoKey : public QObject
{
    Q_OBJECT

private slots:
    void load();
    void load_ed25519();
    void publicKeyDigest();
    void encodedPublicKey();
    void encodedPrivateKey();
    void torServiceID();
    void sign();
    void testBase32();
};

const char *alice =
    "-----BEGIN RSA PRIVATE KEY-----\n"
    "MIICXQIBAAKBgQDAS9nLWyK0jWZ8yduqVEhSyZRplTaeUpGWYRi14n1C4sjO6nqm\n"
    "ES31UCGDH4nIor2R/XMJCJkJwK+t2XrtiH+jUEHwUGhnMkm3hW5NHt5g39s9YK7l\n"
    "xD39O8N2tHUycVq8guhrb1WBQ2/bmZ85nOIuBDZxIuVQZA1U1L6rWGvm+wIDAQAB\n"
    "AoGAewYL6JX9thVgpCVga7BQNObSFFpp/xBEJDkqXfLwwIHmhrpsjSIgjPke94yN\n"
    "0daMAYJsvjLJ9ftYaZjhlGXngbBJiAU95gcZoTAsn2hNJP22ndGuhi6WEKhYwRxK\n"
    "U5d+3Khzy/ysuoay7DSVtpSmpiacWPSiiptEkxNbcbGba8ECQQDeEGoPASmxZoh4\n"
    "I2JNQkqSwMKsOZpp/SJhnmLCPoA1oDwlGtu4HF7t9hBXeyIXgLvbfJudFEa+LqR7\n"
    "wrKQPn0fAkEA3a7cR7eSRNu1ak7gVfQfnP4tFl3+7UC2hUqVHLA5ks4pLl7/ITa+\n"
    "3P04SOs3WpvZJHYJ+hi/anqEPYrD/3B+pQJBAKmjnnHh8IjODDjCxyjAGJntWYoZ\n"
    "4yVOtEIgrc830delley+jNUkDzz3+dnqfcu4k0oD8hjYUYaduRe2T5Szt/8CQQDC\n"
    "EVt8WUNujp0R9P1FohKu4IFeLGmJD/b5V2KUm927HEpG8xkM3Z1XX0KP64MpCnid\n"
    "B80SKeog8CKmsb2F+NiVAkBT1CEAdiFYtf72hnZCLBw5HrqpN+zjw00GjtlrmmNV\n"
    "+ILb/YRp5flCY5Se95ExzQqRKzvK5iJg0yEOVF0OcbO+\n"
    "-----END RSA PRIVATE KEY-----";
const char *aliceDigest = "623a1ffc94d8f8edcd5e47fbd45e08deb911d1bc";
const char *aliceTorID = "mi5b77eu3d4o3tk6";
const char *aliceSignedTestData = "23fdcd5c7d40b44a7e49619d9048c81931166a0adb80c8981cc8f9a9e02c3923d5fba6d92ea03dc672d009a5fe1be2b582fb935076f880d9aa55511c33620d2aa23336b579dd7ccd1dbf4c845e4100a114d8ac20dd47229e876444f79d5152456a8e26fefa67a12436b3c33728a2ff7cb12250c486f786647574e48bb9208f64";

const char *bob =
    "-----BEGIN RSA PUBLIC KEY-----\n"
    "MIGJAoGBAMP8GyAg/kzwXizpUWjWIMw/lvDffXjsxcq1qmZWZxXJQH/oE8bX+WAf\n"
    "VS8iUHVqTykubR0W3QNL6aWSZKBqDQUTN0QBJUF4qdkg3x56C0kwcWa+seDMAvJw\n"
    "pcHK9wN7mtWHIhFwhikP//NylrY1MaUxcPjvOKcdJ90k988nnmpZAgMBAAE=\n"
    "-----END RSA PUBLIC KEY-----\n";
const char *bobDigest = "b4780cabdfc3593004431644977cf73bf8475848";
const char *bobTorID = "wr4azk67ynmtabcd";

const char *carol =
    "-----BEGIN PRIVATE KEY-----\n"
    "MC4CAQAwBQYDK2VwBCIEIFvebLbidItfGDL5xIj78rQowiSfUC3+nu31EsrJP1+9\n"
    "-----END PRIVATE KEY-----\n";

const char *dave =
    "-----BEGIN PUBLIC KEY-----\n"
    "MCowBQYDK2VwAyEAl4OgT6eyg+0TfRaqu3THormgnIpBV2mrcrc8vl52Fcg=\n"
    "-----END PUBLIC KEY-----\n";

#define TEST_LOAD_PRIV_KEY(k, d, b, f)                                      \
    QVERIFY(!k.isLoaded());                                                 \
    QVERIFY(k.loadFromData(d, CryptoKey::PrivateKey, f));                   \
    QVERIFY(k.isLoaded());                                                  \
    QVERIFY(k.isPrivate());                                                 \
    QCOMPARE(k.bits(), b);                                                  \
    k.clear();                                                              \
    QVERIFY(!k.isLoaded());

#define TEST_LOAD_PUB_KEY(k, d, b, f)                                       \
    QVERIFY(!k.isLoaded());                                                 \
    QVERIFY(k.loadFromData(d, CryptoKey::PublicKey, f));                    \
    QVERIFY(k.isLoaded());                                                  \
    QVERIFY(!k.isPrivate());                                                \
    QCOMPARE(k.bits(), b);                                                  \
    k.clear();                                                              \
    QVERIFY(!k.isLoaded());

#define TEST_LOAD_INV_KEY(k, d, t, f)                                    \
    QVERIFY(!k.isLoaded());                                                 \
    QVERIFY(!k.loadFromData(std::string(d).substr(0, 8).c_str(), t, f));    \
    QVERIFY(!k.isLoaded());                                                 \
    QVERIFY(!k.loadFromData("", CryptoKey::PublicKey));                     \
    QVERIFY(!k.isLoaded());

void TestCryptoKey::load()
{
    CryptoKey key;
    QVERIFY(!key.isLoaded());

    TEST_LOAD_PRIV_KEY(key, alice, 1024, CryptoKey::KeyFormat::PEM);
    TEST_LOAD_PUB_KEY(key, bob, 1024, CryptoKey::KeyFormat::PEM);
    TEST_LOAD_INV_KEY(key, alice, CryptoKey::PrivateKey, CryptoKey::KeyFormat::PEM);

    // DER public key
    QByteArray derEncoded = key.encodedPublicKey(CryptoKey::DER);
    key.clear();
    QVERIFY(key.loadFromData(derEncoded, CryptoKey::PublicKey, CryptoKey::DER));
    QCOMPARE(key.encodedPublicKey(CryptoKey::DER), derEncoded);
    key.clear();

    // Invalid DER key
    QVERIFY(!key.loadFromData(derEncoded.mid(0, derEncoded.size()-2), CryptoKey::PublicKey, CryptoKey::DER));
    QVERIFY(!key.isLoaded());
}

void TestCryptoKey::load_ed25519()
{
    CryptoKey key;

    /* XXX: Is 256 the correct bit size for both ED25519 private and public keys? */
    TEST_LOAD_PRIV_KEY(key, carol, 256, CryptoKey::KeyFormat::PEM);
    TEST_LOAD_PUB_KEY(key, dave, 256, CryptoKey::KeyFormat::PEM);
    TEST_LOAD_INV_KEY(key, carol, CryptoKey::PrivateKey, CryptoKey::KeyFormat::PEM);
}

void TestCryptoKey::publicKeyDigest()
{
    CryptoKey key;
    QVERIFY(key.loadFromData(bob, CryptoKey::PublicKey));
    QCOMPARE(key.publicKeyDigest().toHex(), QByteArray(bobDigest));

    key.clear();
    QVERIFY(key.loadFromData(alice, CryptoKey::PrivateKey));
    QCOMPARE(key.publicKeyDigest().toHex(), QByteArray(aliceDigest));
}

void TestCryptoKey::encodedPublicKey()
{
    CryptoKey key;
    QVERIFY(key.loadFromData(bob, CryptoKey::PublicKey));

    QByteArray pemEncoded = key.encodedPublicKey(CryptoKey::PEM);
    QVERIFY(pemEncoded.contains("BEGIN RSA PUBLIC KEY"));

    QByteArray derEncoded = key.encodedPublicKey(CryptoKey::DER);
    QCOMPARE(derEncoded.size(), 140);

    CryptoKey key2;
    QVERIFY(key2.loadFromData(pemEncoded, CryptoKey::PublicKey));
    QCOMPARE(key.encodedPublicKey(CryptoKey::PEM), key2.encodedPublicKey(CryptoKey::PEM));
    QCOMPARE(key.publicKeyDigest(), key2.publicKeyDigest());

    CryptoKey key3;
    QVERIFY(key3.loadFromData(derEncoded, CryptoKey::PublicKey, CryptoKey::DER));
    QCOMPARE(key.encodedPublicKey(CryptoKey::DER), key3.encodedPublicKey(CryptoKey::DER));
    QCOMPARE(key.publicKeyDigest(), key3.publicKeyDigest());

    // Doesn't contain a private key
    CryptoKey key4;
    QVERIFY(!key4.loadFromData(pemEncoded, CryptoKey::PrivateKey));
}

void TestCryptoKey::encodedPrivateKey()
{
    CryptoKey key;
    QVERIFY(key.loadFromData(alice, CryptoKey::PrivateKey));

    QByteArray pemEncoded = key.encodedPrivateKey(CryptoKey::PEM);
    QVERIFY(pemEncoded.contains("BEGIN RSA PRIVATE KEY"));

    QByteArray derEncoded = key.encodedPrivateKey(CryptoKey::DER);
    QVERIFY(!derEncoded.isEmpty());

    CryptoKey key2;
    QVERIFY(key2.loadFromData(pemEncoded, CryptoKey::PrivateKey));
    QCOMPARE(key.encodedPrivateKey(CryptoKey::PEM), key2.encodedPrivateKey(CryptoKey::PEM));
    QCOMPARE(key.publicKeyDigest(), key2.publicKeyDigest());

    CryptoKey key3;
    QVERIFY(key3.loadFromData(derEncoded, CryptoKey::PrivateKey, CryptoKey::DER));
    QCOMPARE(key.encodedPrivateKey(CryptoKey::DER), key3.encodedPrivateKey(CryptoKey::DER));
    QCOMPARE(key.publicKeyDigest(), key3.publicKeyDigest());
}

void TestCryptoKey::torServiceID()
{
    CryptoKey key;
    QVERIFY(key.loadFromData(bob, CryptoKey::PublicKey));

    QString id = key.torServiceID();
    QCOMPARE(id.size(), 16);
    QCOMPARE(id, QLatin1String(bobTorID));
}

void TestCryptoKey::sign()
{
    CryptoKey key;
    QVERIFY(key.loadFromData(alice, CryptoKey::PrivateKey));

    QByteArray data = "test data";
    QByteArray data2 = "different";

    // Good signature
    QByteArray signature = key.signData(data);
    QVERIFY(!signature.isEmpty());
    QVERIFY(key.verifyData(data, signature));

    // Bad signature
    QVERIFY(!key.verifyData(data2, signature));

    // Corrupt signature
    QVERIFY(!key.verifyData(data, signature.mid(0, signature.size() - 10)));

    // Wrong public key
    CryptoKey key2;
    QVERIFY(key2.loadFromData(bob, CryptoKey::PublicKey));
    QVERIFY(!key2.verifyData(data, signature));

    // Compare to signSHA256
    QByteArray dataDigest = QCryptographicHash::hash(data, QCryptographicHash::Sha256);
    QByteArray signature2 = key.signSHA256(dataDigest);
    QVERIFY(!signature2.isEmpty());
    // signSHA256 and verifySHA256
    QVERIFY(key.verifySHA256(dataDigest, signature2));
    // signSHA256 and verifyData
    QVERIFY(key.verifyData(data, signature2));
    // signData and verifySHA256
    QVERIFY(key.verifySHA256(dataDigest, signature));

    // Compare to precomputed signature
    QByteArray signaturep = QByteArray::fromHex(aliceSignedTestData);
    QVERIFY(key.verifyData(data, signaturep));
    QVERIFY(key.verifySHA256(dataDigest, signaturep));
}

void TestCryptoKey::testBase32()
{
    /* Base32 encode */

    char *data1 = new char[64]();
    char *data2 = new char[64]();
    
#define TEST_BASE_32_ENCODE(input, inlen, expected)     \
    strcpy(data1, input);                               \
    base32_encode(data2, 64, data1, inlen);             \
    QCOMPARE(QString::fromLocal8Bit(data2).toLower(), QString(expected).toLower());

    /* test vectors from RFC4648 */
    /*
        BASE32("") = ""
        BASE32("f") = "MY======"
        BASE32("fo") = "MZXQ====" 
        BASE32("foo") = "MZXW6==="
        BASE32("foob") = "MZXW6YQ="
        BASE32("fooba") = "MZXW6YTB"
        BASE32("foobar") = "MZXW6YTBOI======"  
    */
    TEST_BASE_32_ENCODE("", 0, "");
    TEST_BASE_32_ENCODE("f", 1, "MY======");
    TEST_BASE_32_ENCODE("fo", 2, "MZXQ====");
    TEST_BASE_32_ENCODE("foo", 3, "MZXW6===");
    TEST_BASE_32_ENCODE("foob", 4, "MZXW6YQ=");
    TEST_BASE_32_ENCODE("fooba", 5, "MZXW6YTB");
    TEST_BASE_32_ENCODE("foobar", 6, "MZXW6YTBOI======");
#undef TEST_BASE_32_ENCODE

    delete[] data1;
    delete[] data2;

    /* Base32 decode */
    char *rnd_bytes = new char[60]();
    char *encoded   = new char[97]();
    char *decoded   = new char[60]();

#define TEST_BASE_32_DECODE(input, inlen, expected)             \
    strcpy(encoded, input);                                     \
    QVERIFY(base32_decode(decoded, 60, encoded, inlen));        \
    QCOMPARE(QString::fromLocal8Bit(decoded).toLower(), QString(expected).toLower());
    
    /* test vectors from RFC4648 */
    /*
        BASE32("") = ""
        BASE32("f") = "MY======"
        BASE32("fo") = "MZXQ====" 
        BASE32("foo") = "MZXW6==="
        BASE32("foob") = "MZXW6YQ="
        BASE32("fooba") = "MZXW6YTB"
        BASE32("foobar") = "MZXW6YTBOI======"  
    */
    TEST_BASE_32_DECODE("", 0, "");
    TEST_BASE_32_DECODE("MY======", 8, "f");
    TEST_BASE_32_DECODE("MZXQ====", 8, "fo");
    TEST_BASE_32_DECODE("MZXW6===", 8, "foo");
    TEST_BASE_32_DECODE("MZXW6YQ=", 8, "foob");
    TEST_BASE_32_DECODE("MZXW6YTB", 8, "fooba");
    TEST_BASE_32_DECODE("MZXW6YTBOI======", 16, "foobar");
#undef TEST_BASE_32_DECODE

    /* encode and decode random bytes */
    SecureRNG::random(rnd_bytes, 60);
    base32_encode(encoded, 97, rnd_bytes, 60);
    QVERIFY(base32_decode(decoded, 60, encoded, 96));
    QCOMPARE(QString::fromLocal8Bit(rnd_bytes), QString::fromLocal8Bit(decoded));

    /* test that decoding works on uppercase strings */
    for(char *c = encoded; *c != 0; c++) *c = std::toupper(*c);
    QVERIFY(base32_decode(decoded, 60, encoded, 96));
    QCOMPARE(QString::fromLocal8Bit(rnd_bytes), QString::fromLocal8Bit(decoded));

    /* change the encoded string and test again */
    if(encoded[0] == 'a' || encoded[0] == 'A') encoded[0] = 'B';
    else encoded[0] = 'A';
    QVERIFY(base32_decode(decoded, 60, encoded, 96));
    QVERIFY(QString::fromLocal8Bit(rnd_bytes).compare(QString::fromLocal8Bit(decoded)) != 0);

    /* bad base32 encoded string */
    encoded[0] = '@';
    QVERIFY(base32_decode(decoded, 60, encoded, 96) == false);
}

QTEST_MAIN(TestCryptoKey)
#include "tst_cryptokey.moc"
