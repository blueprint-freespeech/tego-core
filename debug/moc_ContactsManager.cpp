/****************************************************************************
** Meta object code from reading C++ file 'ContactsManager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/core/ContactsManager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ContactsManager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ContactsManager_t {
    QByteArrayData data[22];
    char stringdata0[314];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ContactsManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ContactsManager_t qt_meta_stringdata_ContactsManager = {
    {
QT_MOC_LITERAL(0, 0, 15), // "ContactsManager"
QT_MOC_LITERAL(1, 16, 12), // "contactAdded"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 12), // "ContactUser*"
QT_MOC_LITERAL(4, 43, 4), // "user"
QT_MOC_LITERAL(5, 48, 20), // "outgoingRequestAdded"
QT_MOC_LITERAL(6, 69, 23), // "OutgoingContactRequest*"
QT_MOC_LITERAL(7, 93, 7), // "request"
QT_MOC_LITERAL(8, 101, 18), // "unreadCountChanged"
QT_MOC_LITERAL(9, 120, 11), // "unreadCount"
QT_MOC_LITERAL(10, 132, 20), // "contactStatusChanged"
QT_MOC_LITERAL(11, 153, 6), // "status"
QT_MOC_LITERAL(12, 160, 14), // "contactDeleted"
QT_MOC_LITERAL(13, 175, 20), // "onUnreadCountChanged"
QT_MOC_LITERAL(14, 196, 20), // "createContactRequest"
QT_MOC_LITERAL(15, 217, 9), // "contactID"
QT_MOC_LITERAL(16, 227, 8), // "nickname"
QT_MOC_LITERAL(17, 236, 10), // "myNickname"
QT_MOC_LITERAL(18, 247, 7), // "message"
QT_MOC_LITERAL(19, 255, 16), // "incomingRequests"
QT_MOC_LITERAL(20, 272, 23), // "IncomingRequestManager*"
QT_MOC_LITERAL(21, 296, 17) // "globalUnreadCount"

    },
    "ContactsManager\0contactAdded\0\0"
    "ContactUser*\0user\0outgoingRequestAdded\0"
    "OutgoingContactRequest*\0request\0"
    "unreadCountChanged\0unreadCount\0"
    "contactStatusChanged\0status\0contactDeleted\0"
    "onUnreadCountChanged\0createContactRequest\0"
    "contactID\0nickname\0myNickname\0message\0"
    "incomingRequests\0IncomingRequestManager*\0"
    "globalUnreadCount"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ContactsManager[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       2,   78, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x06 /* Public */,
       5,    1,   52,    2, 0x06 /* Public */,
       8,    2,   55,    2, 0x06 /* Public */,
      10,    2,   60,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      12,    1,   65,    2, 0x08 /* Private */,
      13,    0,   68,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      14,    4,   69,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int,    4,    9,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int,    4,   11,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,

 // methods: parameters
    0x80000000 | 3, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString,   15,   16,   17,   18,

 // properties: name, type, flags
      19, 0x80000000 | 20, 0x00095409,
      21, QMetaType::Int, 0x00495001,

 // properties: notify_signal_id
       0,
       2,

       0        // eod
};

void ContactsManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ContactsManager *_t = static_cast<ContactsManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->contactAdded((*reinterpret_cast< ContactUser*(*)>(_a[1]))); break;
        case 1: _t->outgoingRequestAdded((*reinterpret_cast< OutgoingContactRequest*(*)>(_a[1]))); break;
        case 2: _t->unreadCountChanged((*reinterpret_cast< ContactUser*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: _t->contactStatusChanged((*reinterpret_cast< ContactUser*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 4: _t->contactDeleted((*reinterpret_cast< ContactUser*(*)>(_a[1]))); break;
        case 5: _t->onUnreadCountChanged(); break;
        case 6: { ContactUser* _r = _t->createContactRequest((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< ContactUser**>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ContactUser* >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ContactUser* >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ContactUser* >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ContactUser* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (ContactsManager::*_t)(ContactUser * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ContactsManager::contactAdded)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (ContactsManager::*_t)(OutgoingContactRequest * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ContactsManager::outgoingRequestAdded)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (ContactsManager::*_t)(ContactUser * , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ContactsManager::unreadCountChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (ContactsManager::*_t)(ContactUser * , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ContactsManager::contactStatusChanged)) {
                *result = 3;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< IncomingRequestManager* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        ContactsManager *_t = static_cast<ContactsManager *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< IncomingRequestManager**>(_v) = _t->incomingRequestManager(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->globalUnreadCount(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject ContactsManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ContactsManager.data,
      qt_meta_data_ContactsManager,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *ContactsManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ContactsManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ContactsManager.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ContactsManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void ContactsManager::contactAdded(ContactUser * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ContactsManager::outgoingRequestAdded(OutgoingContactRequest * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ContactsManager::unreadCountChanged(ContactUser * _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void ContactsManager::contactStatusChanged(ContactUser * _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
