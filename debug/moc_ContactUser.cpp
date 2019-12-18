/****************************************************************************
** Meta object code from reading C++ file 'ContactUser.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/core/ContactUser.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QSharedPointer>
#include <QtCore/QWeakPointer>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ContactUser.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ContactUser_t {
    QByteArrayData data[44];
    char stringdata0[580];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ContactUser_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ContactUser_t qt_meta_stringdata_ContactUser = {
    {
QT_MOC_LITERAL(0, 0, 11), // "ContactUser"
QT_MOC_LITERAL(1, 12, 13), // "statusChanged"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 9), // "connected"
QT_MOC_LITERAL(4, 37, 12), // "disconnected"
QT_MOC_LITERAL(5, 50, 17), // "connectionChanged"
QT_MOC_LITERAL(6, 68, 34), // "QWeakPointer<Protocol::Connec..."
QT_MOC_LITERAL(7, 103, 10), // "connection"
QT_MOC_LITERAL(8, 114, 15), // "nicknameChanged"
QT_MOC_LITERAL(9, 130, 14), // "contactDeleted"
QT_MOC_LITERAL(10, 145, 12), // "ContactUser*"
QT_MOC_LITERAL(11, 158, 4), // "user"
QT_MOC_LITERAL(12, 163, 16), // "assignConnection"
QT_MOC_LITERAL(13, 180, 36), // "QSharedPointer<Protocol::Conn..."
QT_MOC_LITERAL(14, 217, 11), // "setNickname"
QT_MOC_LITERAL(15, 229, 8), // "nickname"
QT_MOC_LITERAL(16, 238, 11), // "setHostname"
QT_MOC_LITERAL(17, 250, 8), // "hostname"
QT_MOC_LITERAL(18, 259, 12), // "updateStatus"
QT_MOC_LITERAL(19, 272, 11), // "onConnected"
QT_MOC_LITERAL(20, 284, 14), // "onDisconnected"
QT_MOC_LITERAL(21, 299, 14), // "requestRemoved"
QT_MOC_LITERAL(22, 314, 15), // "requestAccepted"
QT_MOC_LITERAL(23, 330, 18), // "onSettingsModified"
QT_MOC_LITERAL(24, 349, 3), // "key"
QT_MOC_LITERAL(25, 353, 5), // "value"
QT_MOC_LITERAL(26, 359, 13), // "deleteContact"
QT_MOC_LITERAL(27, 373, 8), // "uniqueID"
QT_MOC_LITERAL(28, 382, 8), // "identity"
QT_MOC_LITERAL(29, 391, 13), // "UserIdentity*"
QT_MOC_LITERAL(30, 405, 9), // "contactID"
QT_MOC_LITERAL(31, 415, 6), // "status"
QT_MOC_LITERAL(32, 422, 6), // "Status"
QT_MOC_LITERAL(33, 429, 14), // "contactRequest"
QT_MOC_LITERAL(34, 444, 23), // "OutgoingContactRequest*"
QT_MOC_LITERAL(35, 468, 8), // "settings"
QT_MOC_LITERAL(36, 477, 15), // "SettingsObject*"
QT_MOC_LITERAL(37, 493, 12), // "conversation"
QT_MOC_LITERAL(38, 506, 18), // "ConversationModel*"
QT_MOC_LITERAL(39, 525, 6), // "Online"
QT_MOC_LITERAL(40, 532, 7), // "Offline"
QT_MOC_LITERAL(41, 540, 14), // "RequestPending"
QT_MOC_LITERAL(42, 555, 15), // "RequestRejected"
QT_MOC_LITERAL(43, 571, 8) // "Outdated"

    },
    "ContactUser\0statusChanged\0\0connected\0"
    "disconnected\0connectionChanged\0"
    "QWeakPointer<Protocol::Connection>\0"
    "connection\0nicknameChanged\0contactDeleted\0"
    "ContactUser*\0user\0assignConnection\0"
    "QSharedPointer<Protocol::Connection>\0"
    "setNickname\0nickname\0setHostname\0"
    "hostname\0updateStatus\0onConnected\0"
    "onDisconnected\0requestRemoved\0"
    "requestAccepted\0onSettingsModified\0"
    "key\0value\0deleteContact\0uniqueID\0"
    "identity\0UserIdentity*\0contactID\0"
    "status\0Status\0contactRequest\0"
    "OutgoingContactRequest*\0settings\0"
    "SettingsObject*\0conversation\0"
    "ConversationModel*\0Online\0Offline\0"
    "RequestPending\0RequestRejected\0Outdated"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ContactUser[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       8,  124, // properties
       1,  156, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   94,    2, 0x06 /* Public */,
       3,    0,   95,    2, 0x06 /* Public */,
       4,    0,   96,    2, 0x06 /* Public */,
       5,    1,   97,    2, 0x06 /* Public */,
       8,    0,  100,    2, 0x06 /* Public */,
       9,    1,  101,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      12,    1,  104,    2, 0x0a /* Public */,
      14,    1,  107,    2, 0x0a /* Public */,
      16,    1,  110,    2, 0x0a /* Public */,
      18,    0,  113,    2, 0x0a /* Public */,
      19,    0,  114,    2, 0x08 /* Private */,
      20,    0,  115,    2, 0x08 /* Private */,
      21,    0,  116,    2, 0x08 /* Private */,
      22,    0,  117,    2, 0x08 /* Private */,
      23,    2,  118,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      26,    0,  123,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 10,   11,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 13,    7,
    QMetaType::Void, QMetaType::QString,   15,
    QMetaType::Void, QMetaType::QString,   17,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QJsonValue,   24,   25,

 // methods: parameters
    QMetaType::Void,

 // properties: name, type, flags
      27, QMetaType::Int, 0x00095401,
      28, 0x80000000 | 29, 0x00095409,
      15, QMetaType::QString, 0x00495103,
      30, QMetaType::QString, 0x00095401,
      31, 0x80000000 | 32, 0x00495009,
      33, 0x80000000 | 34, 0x00495009,
      35, 0x80000000 | 36, 0x00095409,
      37, 0x80000000 | 38, 0x00095409,

 // properties: notify_signal_id
       0,
       0,
       4,
       0,
       0,
       0,
       0,
       0,

 // enums: name, flags, count, data
      32, 0x0,    5,  160,

 // enum data: key, value
      39, uint(ContactUser::Online),
      40, uint(ContactUser::Offline),
      41, uint(ContactUser::RequestPending),
      42, uint(ContactUser::RequestRejected),
      43, uint(ContactUser::Outdated),

       0        // eod
};

void ContactUser::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ContactUser *_t = static_cast<ContactUser *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->statusChanged(); break;
        case 1: _t->connected(); break;
        case 2: _t->disconnected(); break;
        case 3: _t->connectionChanged((*reinterpret_cast< const QWeakPointer<Protocol::Connection>(*)>(_a[1]))); break;
        case 4: _t->nicknameChanged(); break;
        case 5: _t->contactDeleted((*reinterpret_cast< ContactUser*(*)>(_a[1]))); break;
        case 6: _t->assignConnection((*reinterpret_cast< const QSharedPointer<Protocol::Connection>(*)>(_a[1]))); break;
        case 7: _t->setNickname((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->setHostname((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: _t->updateStatus(); break;
        case 10: _t->onConnected(); break;
        case 11: _t->onDisconnected(); break;
        case 12: _t->requestRemoved(); break;
        case 13: _t->requestAccepted(); break;
        case 14: _t->onSettingsModified((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QJsonValue(*)>(_a[2]))); break;
        case 15: _t->deleteContact(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QWeakPointer<Protocol::Connection> >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ContactUser* >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSharedPointer<Protocol::Connection> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (ContactUser::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ContactUser::statusChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (ContactUser::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ContactUser::connected)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (ContactUser::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ContactUser::disconnected)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (ContactUser::*_t)(const QWeakPointer<Protocol::Connection> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ContactUser::connectionChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (ContactUser::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ContactUser::nicknameChanged)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (ContactUser::*_t)(ContactUser * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ContactUser::contactDeleted)) {
                *result = 5;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 6:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< SettingsObject* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        ContactUser *_t = static_cast<ContactUser *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->getUniqueID(); break;
        case 1: *reinterpret_cast< UserIdentity**>(_v) = _t->getIdentity(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->nickname(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->contactID(); break;
        case 4: *reinterpret_cast< Status*>(_v) = _t->status(); break;
        case 5: *reinterpret_cast< OutgoingContactRequest**>(_v) = _t->contactRequest(); break;
        case 6: *reinterpret_cast< SettingsObject**>(_v) = _t->settings(); break;
        case 7: *reinterpret_cast< ConversationModel**>(_v) = _t->conversation(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        ContactUser *_t = static_cast<ContactUser *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 2: _t->setNickname(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject ContactUser::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ContactUser.data,
      qt_meta_data_ContactUser,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *ContactUser::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ContactUser::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ContactUser.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ContactUser::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 8;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void ContactUser::statusChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ContactUser::connected()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void ContactUser::disconnected()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void ContactUser::connectionChanged(const QWeakPointer<Protocol::Connection> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void ContactUser::nicknameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void ContactUser::contactDeleted(ContactUser * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
