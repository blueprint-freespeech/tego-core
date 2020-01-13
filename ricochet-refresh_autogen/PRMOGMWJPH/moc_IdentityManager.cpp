/****************************************************************************
** Meta object code from reading C++ file 'IdentityManager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "core/IdentityManager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'IdentityManager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_IdentityManager_t {
    QByteArrayData data[19];
    char stringdata0[297];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_IdentityManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_IdentityManager_t qt_meta_stringdata_IdentityManager = {
    {
QT_MOC_LITERAL(0, 0, 15), // "IdentityManager"
QT_MOC_LITERAL(1, 16, 13), // "identityAdded"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 13), // "UserIdentity*"
QT_MOC_LITERAL(4, 45, 8), // "identity"
QT_MOC_LITERAL(5, 54, 12), // "contactAdded"
QT_MOC_LITERAL(6, 67, 12), // "ContactUser*"
QT_MOC_LITERAL(7, 80, 4), // "user"
QT_MOC_LITERAL(8, 85, 14), // "contactDeleted"
QT_MOC_LITERAL(9, 100, 20), // "outgoingRequestAdded"
QT_MOC_LITERAL(10, 121, 23), // "OutgoingContactRequest*"
QT_MOC_LITERAL(11, 145, 7), // "request"
QT_MOC_LITERAL(12, 153, 20), // "incomingRequestAdded"
QT_MOC_LITERAL(13, 174, 23), // "IncomingContactRequest*"
QT_MOC_LITERAL(14, 198, 22), // "incomingRequestRemoved"
QT_MOC_LITERAL(15, 221, 14), // "onContactAdded"
QT_MOC_LITERAL(16, 236, 17), // "onOutgoingRequest"
QT_MOC_LITERAL(17, 254, 17), // "onIncomingRequest"
QT_MOC_LITERAL(18, 272, 24) // "onIncomingRequestRemoved"

    },
    "IdentityManager\0identityAdded\0\0"
    "UserIdentity*\0identity\0contactAdded\0"
    "ContactUser*\0user\0contactDeleted\0"
    "outgoingRequestAdded\0OutgoingContactRequest*\0"
    "request\0incomingRequestAdded\0"
    "IncomingContactRequest*\0incomingRequestRemoved\0"
    "onContactAdded\0onOutgoingRequest\0"
    "onIncomingRequest\0onIncomingRequestRemoved"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_IdentityManager[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x06 /* Public */,
       5,    2,   67,    2, 0x06 /* Public */,
       8,    2,   72,    2, 0x06 /* Public */,
       9,    2,   77,    2, 0x06 /* Public */,
      12,    2,   82,    2, 0x06 /* Public */,
      14,    2,   87,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      15,    1,   92,    2, 0x08 /* Private */,
      16,    1,   95,    2, 0x08 /* Private */,
      17,    1,   98,    2, 0x08 /* Private */,
      18,    1,  101,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6, 0x80000000 | 3,    7,    4,
    QMetaType::Void, 0x80000000 | 6, 0x80000000 | 3,    7,    4,
    QMetaType::Void, 0x80000000 | 10, 0x80000000 | 3,   11,    4,
    QMetaType::Void, 0x80000000 | 13, 0x80000000 | 3,   11,    4,
    QMetaType::Void, 0x80000000 | 13, 0x80000000 | 3,   11,    4,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void, 0x80000000 | 13,   11,
    QMetaType::Void, 0x80000000 | 13,   11,

       0        // eod
};

void IdentityManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<IdentityManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->identityAdded((*reinterpret_cast< UserIdentity*(*)>(_a[1]))); break;
        case 1: _t->contactAdded((*reinterpret_cast< ContactUser*(*)>(_a[1])),(*reinterpret_cast< UserIdentity*(*)>(_a[2]))); break;
        case 2: _t->contactDeleted((*reinterpret_cast< ContactUser*(*)>(_a[1])),(*reinterpret_cast< UserIdentity*(*)>(_a[2]))); break;
        case 3: _t->outgoingRequestAdded((*reinterpret_cast< OutgoingContactRequest*(*)>(_a[1])),(*reinterpret_cast< UserIdentity*(*)>(_a[2]))); break;
        case 4: _t->incomingRequestAdded((*reinterpret_cast< IncomingContactRequest*(*)>(_a[1])),(*reinterpret_cast< UserIdentity*(*)>(_a[2]))); break;
        case 5: _t->incomingRequestRemoved((*reinterpret_cast< IncomingContactRequest*(*)>(_a[1])),(*reinterpret_cast< UserIdentity*(*)>(_a[2]))); break;
        case 6: _t->onContactAdded((*reinterpret_cast< ContactUser*(*)>(_a[1]))); break;
        case 7: _t->onOutgoingRequest((*reinterpret_cast< OutgoingContactRequest*(*)>(_a[1]))); break;
        case 8: _t->onIncomingRequest((*reinterpret_cast< IncomingContactRequest*(*)>(_a[1]))); break;
        case 9: _t->onIncomingRequestRemoved((*reinterpret_cast< IncomingContactRequest*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UserIdentity* >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ContactUser* >(); break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UserIdentity* >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ContactUser* >(); break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UserIdentity* >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UserIdentity* >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< IncomingContactRequest* >(); break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UserIdentity* >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< IncomingContactRequest* >(); break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UserIdentity* >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ContactUser* >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< IncomingContactRequest* >(); break;
            }
            break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< IncomingContactRequest* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (IdentityManager::*)(UserIdentity * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&IdentityManager::identityAdded)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (IdentityManager::*)(ContactUser * , UserIdentity * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&IdentityManager::contactAdded)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (IdentityManager::*)(ContactUser * , UserIdentity * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&IdentityManager::contactDeleted)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (IdentityManager::*)(OutgoingContactRequest * , UserIdentity * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&IdentityManager::outgoingRequestAdded)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (IdentityManager::*)(IncomingContactRequest * , UserIdentity * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&IdentityManager::incomingRequestAdded)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (IdentityManager::*)(IncomingContactRequest * , UserIdentity * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&IdentityManager::incomingRequestRemoved)) {
                *result = 5;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject IdentityManager::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_IdentityManager.data,
    qt_meta_data_IdentityManager,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *IdentityManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *IdentityManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_IdentityManager.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int IdentityManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void IdentityManager::identityAdded(UserIdentity * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void IdentityManager::contactAdded(ContactUser * _t1, UserIdentity * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void IdentityManager::contactDeleted(ContactUser * _t1, UserIdentity * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void IdentityManager::outgoingRequestAdded(OutgoingContactRequest * _t1, UserIdentity * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void IdentityManager::incomingRequestAdded(IncomingContactRequest * _t1, UserIdentity * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void IdentityManager::incomingRequestRemoved(IncomingContactRequest * _t1, UserIdentity * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
