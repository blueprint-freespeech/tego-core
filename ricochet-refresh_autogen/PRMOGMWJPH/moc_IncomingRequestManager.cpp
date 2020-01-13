/****************************************************************************
** Meta object code from reading C++ file 'IncomingRequestManager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "core/IncomingRequestManager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'IncomingRequestManager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_IncomingContactRequest_t {
    QByteArrayData data[15];
    char stringdata0[183];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_IncomingContactRequest_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_IncomingContactRequest_t qt_meta_stringdata_IncomingContactRequest = {
    {
QT_MOC_LITERAL(0, 0, 22), // "IncomingContactRequest"
QT_MOC_LITERAL(1, 23, 15), // "nicknameChanged"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 26), // "hasActiveConnectionChanged"
QT_MOC_LITERAL(4, 67, 6), // "accept"
QT_MOC_LITERAL(5, 74, 12), // "ContactUser*"
QT_MOC_LITERAL(6, 87, 4), // "user"
QT_MOC_LITERAL(7, 92, 6), // "reject"
QT_MOC_LITERAL(8, 99, 8), // "hostname"
QT_MOC_LITERAL(9, 108, 9), // "contactId"
QT_MOC_LITERAL(10, 118, 7), // "message"
QT_MOC_LITERAL(11, 126, 8), // "nickname"
QT_MOC_LITERAL(12, 135, 19), // "hasActiveConnection"
QT_MOC_LITERAL(13, 155, 11), // "requestDate"
QT_MOC_LITERAL(14, 167, 15) // "lastRequestDate"

    },
    "IncomingContactRequest\0nicknameChanged\0"
    "\0hasActiveConnectionChanged\0accept\0"
    "ContactUser*\0user\0reject\0hostname\0"
    "contactId\0message\0nickname\0"
    "hasActiveConnection\0requestDate\0"
    "lastRequestDate"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_IncomingContactRequest[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       7,   46, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,
       3,    0,   40,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   41,    2, 0x0a /* Public */,
       4,    0,   44,    2, 0x2a /* Public | MethodCloned */,
       7,    0,   45,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       8, QMetaType::QByteArray, 0x00095401,
       9, QMetaType::QString, 0x00095401,
      10, QMetaType::QString, 0x00095401,
      11, QMetaType::QString, 0x00495103,
      12, QMetaType::Bool, 0x00495001,
      13, QMetaType::QDateTime, 0x00095401,
      14, QMetaType::QDateTime, 0x00095401,

 // properties: notify_signal_id
       0,
       0,
       0,
       0,
       1,
       0,
       0,

       0        // eod
};

void IncomingContactRequest::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<IncomingContactRequest *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->nicknameChanged(); break;
        case 1: _t->hasActiveConnectionChanged(); break;
        case 2: _t->accept((*reinterpret_cast< ContactUser*(*)>(_a[1]))); break;
        case 3: _t->accept(); break;
        case 4: _t->reject(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (IncomingContactRequest::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&IncomingContactRequest::nicknameChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (IncomingContactRequest::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&IncomingContactRequest::hasActiveConnectionChanged)) {
                *result = 1;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<IncomingContactRequest *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QByteArray*>(_v) = _t->hostname(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->contactId(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->message(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->nickname(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->hasActiveConnection(); break;
        case 5: *reinterpret_cast< QDateTime*>(_v) = _t->requestDate(); break;
        case 6: *reinterpret_cast< QDateTime*>(_v) = _t->lastRequestDate(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<IncomingContactRequest *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 3: _t->setNickname(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject IncomingContactRequest::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_IncomingContactRequest.data,
    qt_meta_data_IncomingContactRequest,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *IncomingContactRequest::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *IncomingContactRequest::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_IncomingContactRequest.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int IncomingContactRequest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 7;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void IncomingContactRequest::nicknameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void IncomingContactRequest::hasActiveConnectionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
struct qt_meta_stringdata_IncomingRequestManager_t {
    QByteArrayData data[10];
    char stringdata0[141];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_IncomingRequestManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_IncomingRequestManager_t qt_meta_stringdata_IncomingRequestManager = {
    {
QT_MOC_LITERAL(0, 0, 22), // "IncomingRequestManager"
QT_MOC_LITERAL(1, 23, 12), // "requestAdded"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 23), // "IncomingContactRequest*"
QT_MOC_LITERAL(4, 61, 7), // "request"
QT_MOC_LITERAL(5, 69, 14), // "requestRemoved"
QT_MOC_LITERAL(6, 84, 15), // "requestsChanged"
QT_MOC_LITERAL(7, 100, 15), // "requestReceived"
QT_MOC_LITERAL(8, 116, 8), // "requests"
QT_MOC_LITERAL(9, 125, 15) // "QList<QObject*>"

    },
    "IncomingRequestManager\0requestAdded\0"
    "\0IncomingContactRequest*\0request\0"
    "requestRemoved\0requestsChanged\0"
    "requestReceived\0requests\0QList<QObject*>"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_IncomingRequestManager[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       1,   42, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       5,    1,   37,    2, 0x06 /* Public */,
       6,    0,   40,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   41,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

 // properties: name, type, flags
       8, 0x80000000 | 9, 0x00495009,

 // properties: notify_signal_id
       2,

       0        // eod
};

void IncomingRequestManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<IncomingRequestManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->requestAdded((*reinterpret_cast< IncomingContactRequest*(*)>(_a[1]))); break;
        case 1: _t->requestRemoved((*reinterpret_cast< IncomingContactRequest*(*)>(_a[1]))); break;
        case 2: _t->requestsChanged(); break;
        case 3: _t->requestReceived(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< IncomingContactRequest* >(); break;
            }
            break;
        case 1:
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
            using _t = void (IncomingRequestManager::*)(IncomingContactRequest * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&IncomingRequestManager::requestAdded)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (IncomingRequestManager::*)(IncomingContactRequest * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&IncomingRequestManager::requestRemoved)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (IncomingRequestManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&IncomingRequestManager::requestsChanged)) {
                *result = 2;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QObject*> >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<IncomingRequestManager *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QList<QObject*>*>(_v) = _t->requestObjects(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject IncomingRequestManager::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_IncomingRequestManager.data,
    qt_meta_data_IncomingRequestManager,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *IncomingRequestManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *IncomingRequestManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_IncomingRequestManager.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int IncomingRequestManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void IncomingRequestManager::requestAdded(IncomingContactRequest * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void IncomingRequestManager::requestRemoved(IncomingContactRequest * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void IncomingRequestManager::requestsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
