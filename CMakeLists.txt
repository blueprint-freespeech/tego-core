cmake_minimum_required(VERSION 3.1.0)
if (APPLE)
    set(MACOSX TRUE)
endif()
project(ricochet-refresh)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

if(CMAKE_VERSION VERSION_LESS "3.7.0")
    set(CMAKE_INCLUDE_CURRENT_DIR ON)
endif()
if (APPLE)
    set(Qt5_DIR /usr/local/opt/qt5/lib/cmake/Qt5)
    set(Protobuf_ROOT_DIR /usr/local/opt/protobuf)
    #set(OPENSSL_ROOT_DIR /usr/local/opt/openssl)
    set(Protobuf_INCLUDE_DIR ${Protobuf_ROOT_DIR}/include)
    #set(OPENSSL_INCLUDE_DIR ${OPENSSL_ROOT_DIR}/include)
endif()


find_package(Protobuf REQUIRED)
find_package(OpenSSL REQUIRED)


# qt5 modules
set(MODULES Core Widgets Network Quick QuickCompiler)
if(APPLE)
set(MODULES ${MODULES} MacExtras)
endif()
foreach(mod IN ITEMS ${MODULES})
    find_package(Qt5 REQUIRED ${mod} REQUIRED)
endforeach(mod IN ITEMS ${MODULES})



qtquick_compiler_add_resources(UI_RESOURCES src/ui/qml/qml.qrc)


# protocol buffer definitions
set(PROTO_DEFS 
    src/protocol/ControlChannel.proto 
    src/protocol/AuthHiddenService.proto 
    src/protocol/ChatChannel.proto 
    src/protocol/ContactRequestChannel.proto
)

# generate protocol buffer source files
PROTOBUF_GENERATE_CPP(PROTO_SRC PROTO_HDR ${PROTO_DEFS})

# exclude generated protobuf files from automoc
foreach(f IN ITEMS ${PROTO_HDR} ${PROTO_SRC})
    set_property(SOURCE ${f} PROPERTY SKIP_AUTOGEN ON)
endforeach()


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
        lib/onion_ed25519_signature/ed25519.c
        ${PROTO_SRC}
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
        lib/onion_ed25519_signature/curve25519-donna-64bit.h
        lib/onion_ed25519_signature/curve25519-donna-helpers.h
        lib/onion_ed25519_signature/ed25519-donna.h
        lib/onion_ed25519_signature/ed25519-donna-64bit-tables.h
        lib/onion_ed25519_signature/ed25519-donna-64bit-x86.h
        lib/onion_ed25519_signature/ed25519-donna-basepoint-table.h
        lib/onion_ed25519_signature/ed25519-donna-impl-base.h
        lib/onion_ed25519_signature/ed25519-donna-portable.h
        lib/onion_ed25519_signature/ed25519-donna-portable-identify.h
        lib/onion_ed25519_signature/ed25519-hash.h
        lib/onion_ed25519_signature/modm-donna-64bit.h
        ${PROTO_HDR}
        )
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/src ${Protobuf_INCLUDE_DIRS} ${QT5_DIR})
add_executable(ricochet-refresh ${SOURCES} ${HEADERS} ${UI_RESOURCES})
target_link_libraries(ricochet-refresh ${PROTOBUF_LIBRARIES})
target_link_libraries(ricochet-refresh Qt5::Widgets Qt5::Network OpenSSL::Crypto)
target_link_libraries(ricochet-refresh Qt5::Widgets Qt5::Network Qt5::Quick Qt5::Core OpenSSL::Crypto)
if(APPLE)
    target_include_directories(ricochet-refresh PUBLIC Qt5:MacExtras)
    target_link_libraries(ricochet-refresh Qt5::MacExtras)
endif()

qt5_use_modules(ricochet-refresh ${MODULES})
