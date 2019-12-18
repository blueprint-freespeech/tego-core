/* Ricochet - https://ricochet.im/
 * Copyright (C) 2016, John Brooks <john.brooks@dereferenced.net>
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

#include "AddOnionCommand.h"
#include "tor/HiddenService.h"
#include "utils/CryptoKey.h"
#include "utils/StringUtil.h"

using namespace Tor;

AddOnionCommand::AddOnionCommand(HiddenService *service)
    : m_service(service)
{
    Q_ASSERT(m_service);
}

bool AddOnionCommand::isSuccessful() const
{
    return statusCode() == 250 && m_errorMessage.isEmpty();
}

QByteArray AddOnionCommand::build()
{
    QByteArray out("ADD_ONION");

    if (m_service->privateKey().isLoaded()) {
//        out += " RSA1024:";
        out += " ED25519-V3:";
        out += m_service->privateKey().encodedPrivateKey(CryptoKey::DER).toBase64();
    } else {
//        out += " NEW:RSA1024";
        out += " NEW:ED25519-V3";
    }

    foreach (const HiddenService::Target &target, m_service->targets()) {
        out += " Port=";
        out += QByteArray::number(target.servicePort);
        out += ",";
        out += target.targetAddress.toString().toLatin1();
        out += ":";
        out += QByteArray::number(target.targetPort);
    }

    out.append("\r\n");
    return out;
}

void AddOnionCommand::onReply(int statusCode, const QByteArray &data)
{
    TorControlCommand::onReply(statusCode, data);
    if (statusCode != 250) {
        m_errorMessage = QString::fromLatin1(data);
        return;
    }

    const QByteArray keyPrefix("PrivateKey=RSA1024:");
    const QByteArray keyPrefixV3("PrivateKey=ED25519-V3:");
    const QByteArray serviceIDPrefix("ServiceID=");


    if (data.startsWith(keyPrefix)) {
        QByteArray keyData(QByteArray::fromBase64(data.mid(keyPrefix.size())));
        CryptoKey key;
        if (!key.loadFromData(keyData, CryptoKey::PrivateKey, CryptoKey::DER)) {
            m_errorMessage = QStringLiteral("Key decoding failed");
            return;
        }
        m_service->setPrivateKey(key);
    } else if (data.startsWith(keyPrefixV3)) {
        CryptoKey key(CryptoKey::V3);
        std::string keyData = data.toStdString()
                .substr(keyPrefixV3.size());
        key.loadFromDataV3(keyData, CryptoKey::V3PrivateKey);
    } else if ((data.size() == CryptoKey::V3ServiceIDLength + serviceIDPrefix.size())
            && data.startsWith((serviceIDPrefix))) {
        // store the v3 service ID
        // to get public key from serviceID:
        //  1. remove prefix and last 4 char, the rest is public key in base32.
        //  2. decode to get the 32byte key
        CryptoKey key(CryptoKey::V3);
        std::string keyData = data.toStdString()
                .substr(serviceIDPrefix.size());
        key.loadFromDataV3(keyData, CryptoKey::V3ServiceID);
    }
}

void AddOnionCommand::onFinished(int statusCode)
{
    TorControlCommand::onFinished(statusCode);
    if (isSuccessful())
        emit succeeded();
    else
        emit failed(statusCode);
}


