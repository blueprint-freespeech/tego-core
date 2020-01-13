/****************************************************************************
** Meta object code from reading C++ file 'UserIdentity.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "core/UserIdentity.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UserIdentity.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_UserIdentity_t {
    QByteArrayData data[24];
    char stringdata0[303];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_UserIdentity_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_UserIdentity_t qt_meta_stringdata_UserIdentity = {
    {
QT_MOC_LITERAL(0, 0, 12), // "UserIdentity"
QT_MOC_LITERAL(1, 13, 13), // "statusChanged"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 16), // "contactIDChanged"
QT_MOC_LITERAL(4, 45, 15), // "nicknameChanged"
QT_MOC_LITERAL(5, 61, 15), // "settingsChanged"
QT_MOC_LITERAL(6, 77, 3), // "key"
QT_MOC_LITERAL(7, 81, 18), // "incomingConnection"
QT_MOC_LITERAL(8, 100, 21), // "Protocol::Connection*"
QT_MOC_LITERAL(9, 122, 10), // "connection"
QT_MOC_LITERAL(10, 133, 15), // "onStatusChanged"
QT_MOC_LITERAL(11, 149, 9), // "newStatus"
QT_MOC_LITERAL(12, 159, 9), // "oldStatus"
QT_MOC_LITERAL(13, 169, 18), // "onSettingsModified"
QT_MOC_LITERAL(14, 188, 5), // "value"
QT_MOC_LITERAL(15, 194, 20), // "onIncomingConnection"
QT_MOC_LITERAL(16, 215, 8), // "uniqueID"
QT_MOC_LITERAL(17, 224, 8), // "nickname"
QT_MOC_LITERAL(18, 233, 9), // "contactID"
QT_MOC_LITERAL(19, 243, 8), // "isOnline"
QT_MOC_LITERAL(20, 252, 8), // "contacts"
QT_MOC_LITERAL(21, 261, 16), // "ContactsManager*"
QT_MOC_LITERAL(22, 278, 8), // "settings"
QT_MOC_LITERAL(23, 287, 15) // "SettingsObject*"

    },
    "UserIdentity\0statusChanged\0\0"
    "contactIDChanged\0nicknameChanged\0"
    "settingsChanged\0key\0incomingConnection\0"
    "Protocol::Connection*\0connection\0"
    "onStatusChanged\0newStatus\0oldStatus\0"
    "onSettingsModified\0value\0onIncomingConnection\0"
    "uniqueID\0nickname\0contactID\0isOnline\0"
    "contacts\0ContactsManager*\0settings\0"
    "SettingsObject*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_UserIdentity[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       6,   74, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x06 /* Public */,
       3,    0,   55,    2, 0x06 /* Public */,
       4,    0,   56,    2, 0x06 /* Public */,
       5,    1,   57,    2, 0x06 /* Public */,
       7,    1,   60,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    2,   63,    2, 0x08 /* Private */,
      13,    2,   68,    2, 0x08 /* Private */,
      15,    0,   73,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, 0x80000000 | 8,    9,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   11,   12,
    QMetaType::Void, QMetaType::QString, QMetaType::QJsonValue,    6,   14,
    QMetaType::Void,

 // properties: name, type, flags
      16, QMetaType::Int, 0x00095401,
      17, QMetaType::QString, 0x00495103,
      18, QMetaType::QString, 0x00495001,
      19, QMetaType::Bool, 0x00495001,
      20, 0x80000000 | 21, 0x00095409,
      22, 0x80000000 | 23, 0x00095409,

 // properties: notify_signal_id
       0,
       2,
       1,
       0,
       0,
       0,

       0        // eod
};

void UserIdentity::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<UserIdentity *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->statusChanged(); break;
        case 1: _t->contactIDChanged(); break;
        case 2: _t->nicknameChanged(); break;
        case 3: _t->settingsChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->incomingConnection((*reinterpret_cast< Protocol::Connection*(*)>(_a[1]))); break;
        case 5: _t->onStatusChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 6: _t->onSettingsModified((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QJsonValue(*)>(_a[2]))); break;
        case 7: _t->onIncomingConnection(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Protocol::Connection* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (UserIdentity::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UserIdentity::statusChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (UserIdentity::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UserIdentity::contactIDChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (UserIdentity::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UserIdentity::nicknameChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (UserIdentity::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UserIdentity::settingsChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (UserIdentity::*)(Protocol::Connection * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UserIdentity::incomingConnection)) {
                *result = 4;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 4:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ContactsManager* >(); break;
        case 5:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< SettingsObject* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<UserIdentity *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->getUniqueID(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->nickname(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->contactID(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->isServiceOnline(); break;
        case 4: *reinterpret_cast< ContactsManager**>(_v) = _t->getContacts(); break;
        case 5: *reinterpret_cast< SettingsObject**>(_v) = _t->settings(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<UserIdentity *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 1: _t->setNickname(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject UserIdentity::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_UserIdentity.data,
    qt_meta_data_UserIdentity,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *UserIdentity::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UserIdentity::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_UserIdentity.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int UserIdentity::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 6;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void UserIdentity::statusChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void UserIdentity::contactIDChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void UserIdentity::nicknameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void UserIdentity::settingsChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void UserIdentity::incomingConnection(Protocol::Connection * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
