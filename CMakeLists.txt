cmake_minimum_required(VERSION 3.1.0)

project(ricochet-refresh)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

if(CMAKE_VERSION VERSION_LESS "3.7.0")
    set(CMAKE_INCLUDE_CURRENT_DIR ON)
endif()
set(QT5_DIR ${CMAKE_CURRENT_SOURCE_DIR}/buildscripts/src/qt5)
set(Protobuf_INCLUDE_DIRS ${CMAKE_CURRENT_SOURCE_DIR}/buildscripts/src/protobuf/)
set(OPENSSL_INCLUDE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/buildscripts/src/openssl/)

find_package(Qt5Widgets REQUIRED)
find_package(Protobuf REQUIRED)
find_package(Qt5Network REQUIRED)
find_package(OpenSSL REQUIRED)
find_package(Qt5 REQUIRED Core REQUIRED Widgets REQUIRED Network REQUIRED Quick REQUIRED)

# source file
set(SOURCES src/main.cpp
        src/ui/MainWindow.cpp
        src/ui/ContactsModel.cpp
        src/tor/TorControl.cpp
        src/tor/TorControlSocket.cpp
        src/tor/TorControlCommand.cpp
        src/tor/ProtocolInfoCommand.cpp
        src/tor/AuthenticateCommand.cpp
        src/tor/SetConfCommand.cpp
        src/tor/AddOnionCommand.cpp
        src/utils/StringUtil.cpp
        src/core/ContactsManager.cpp
        src/core/ContactUser.cpp
        src/tor/GetConfCommand.cpp
        src/tor/HiddenService.cpp
        src/utils/CryptoKey.cpp
        src/utils/SecureRNG.cpp
        src/core/OutgoingContactRequest.cpp
        src/core/IncomingRequestManager.cpp
        src/core/ContactIDValidator.cpp
        src/core/UserIdentity.cpp
        src/core/IdentityManager.cpp
        src/core/ConversationModel.cpp
        src/tor/TorProcess.cpp
        src/tor/TorManager.cpp
        src/tor/TorSocket.cpp
        src/ui/LinkedText.cpp
        src/utils/Settings.cpp
        src/utils/PendingOperation.cpp
        src/ui/LanguagesModel.cpp
        src/protocol/Channel.cpp
        src/protocol/ControlChannel.cpp
        src/protocol/Connection.cpp
        src/protocol/OutboundConnector.cpp
        src/protocol/AuthHiddenServiceChannel.cpp
        src/protocol/ChatChannel.cpp
        src/protocol/ContactRequestChannel.cpp
        )
set(HEADERS src/protocol/Channel.h
        src/protocol/Channel_p.h
        src/protocol/ControlChannel.h
        src/protocol/Connection.h
        src/protocol/Connection_p.h
        src/protocol/OutboundConnector.h
        src/protocol/AuthHiddenServiceChannel.h
        src/protocol/ChatChannel.h
        src/protocol/ContactRequestChannel.h
        src/ui/MainWindow.h
        src/ui/ContactsModel.h
        src/tor/TorControl.h
        src/tor/TorControlSocket.h
        src/tor/TorControlCommand.h
        src/tor/ProtocolInfoCommand.h
        src/tor/AuthenticateCommand.h
        src/tor/SetConfCommand.h
        src/tor/AddOnionCommand.h
        src/utils/StringUtil.h
        src/core/ContactsManager.h
        src/core/ContactUser.h
        src/tor/GetConfCommand.h
        src/tor/HiddenService.h
        src/utils/CryptoKey.h
        src/utils/SecureRNG.h
        src/core/OutgoingContactRequest.h
        src/core/IncomingRequestManager.h
        src/core/ContactIDValidator.h
        src/core/UserIdentity.h
        src/core/IdentityManager.h
        src/core/ConversationModel.h
        src/tor/TorProcess.h
        src/tor/TorProcess_p.h
        src/tor/TorManager.h
        src/tor/TorSocket.h
        src/ui/LinkedText.h
        src/utils/Settings.h
        src/utils/PendingOperation.h
        src/ui/LanguagesModel.h
        )
include_directories("${CMAKE_SOURCE_DIR}/src" "${Protobuf_INCLUDE_DIRS}" "${QT5_DIR}")
add_executable(ricochet-refresh ${SOURCES} ${HEADERS})
target_link_libraries(ricochet-refresh Qt5::Widgets Qt5::Network OpenSSL::Crypto)
target_link_libraries(ricochet-refresh Qt5::Widgets Qt5::Network Qt5::Quick Qt5::Core OpenSSL::Crypto)