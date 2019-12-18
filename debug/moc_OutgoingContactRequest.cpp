/****************************************************************************
** Meta object code from reading C++ file 'OutgoingContactRequest.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/core/OutgoingContactRequest.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QSharedPointer>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'OutgoingContactRequest.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_OutgoingContactRequest_t {
    QByteArrayData data[28];
    char stringdata0[303];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OutgoingContactRequest_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OutgoingContactRequest_t qt_meta_stringdata_OutgoingContactRequest = {
    {
QT_MOC_LITERAL(0, 0, 22), // "OutgoingContactRequest"
QT_MOC_LITERAL(1, 23, 13), // "statusChanged"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 9), // "newStatus"
QT_MOC_LITERAL(4, 48, 9), // "oldStatus"
QT_MOC_LITERAL(5, 58, 8), // "accepted"
QT_MOC_LITERAL(6, 67, 8), // "rejected"
QT_MOC_LITERAL(7, 76, 6), // "reason"
QT_MOC_LITERAL(8, 83, 7), // "removed"
QT_MOC_LITERAL(9, 91, 6), // "accept"
QT_MOC_LITERAL(10, 98, 6), // "reject"
QT_MOC_LITERAL(11, 105, 5), // "error"
QT_MOC_LITERAL(12, 111, 6), // "cancel"
QT_MOC_LITERAL(13, 118, 11), // "sendRequest"
QT_MOC_LITERAL(14, 130, 36), // "QSharedPointer<Protocol::Conn..."
QT_MOC_LITERAL(15, 167, 10), // "connection"
QT_MOC_LITERAL(16, 178, 20), // "requestStatusChanged"
QT_MOC_LITERAL(17, 199, 6), // "status"
QT_MOC_LITERAL(18, 206, 6), // "Status"
QT_MOC_LITERAL(19, 213, 10), // "myNickname"
QT_MOC_LITERAL(20, 224, 7), // "message"
QT_MOC_LITERAL(21, 232, 13), // "rejectMessage"
QT_MOC_LITERAL(22, 246, 7), // "Pending"
QT_MOC_LITERAL(23, 254, 12), // "Acknowledged"
QT_MOC_LITERAL(24, 267, 8), // "Accepted"
QT_MOC_LITERAL(25, 276, 5), // "Error"
QT_MOC_LITERAL(26, 282, 8), // "Rejected"
QT_MOC_LITERAL(27, 291, 11) // "FirstResult"

    },
    "OutgoingContactRequest\0statusChanged\0"
    "\0newStatus\0oldStatus\0accepted\0rejected\0"
    "reason\0removed\0accept\0reject\0error\0"
    "cancel\0sendRequest\0"
    "QSharedPointer<Protocol::Connection>\0"
    "connection\0requestStatusChanged\0status\0"
    "Status\0myNickname\0message\0rejectMessage\0"
    "Pending\0Acknowledged\0Accepted\0Error\0"
    "Rejected\0FirstResult"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OutgoingContactRequest[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       4,   96, // properties
       1,  112, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   69,    2, 0x06 /* Public */,
       5,    0,   74,    2, 0x06 /* Public */,
       6,    1,   75,    2, 0x06 /* Public */,
       8,    0,   78,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    0,   79,    2, 0x0a /* Public */,
      10,    2,   80,    2, 0x0a /* Public */,
      10,    1,   85,    2, 0x2a /* Public | MethodCloned */,
      10,    0,   88,    2, 0x2a /* Public | MethodCloned */,
      12,    0,   89,    2, 0x0a /* Public */,
      13,    1,   90,    2, 0x0a /* Public */,
      16,    1,   93,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    3,    4,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool, QMetaType::QString,   11,    7,
    QMetaType::Void, QMetaType::Bool,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void, QMetaType::Int,   17,

 // properties: name, type, flags
      17, 0x80000000 | 18, 0x00495009,
      19, QMetaType::QString, 0x00095401,
      20, QMetaType::QString, 0x00095401,
      21, QMetaType::QString, 0x00495001,

 // properties: notify_signal_id
       0,
       0,
       0,
       2,

 // enums: name, flags, count, data
      18, 0x0,    6,  116,

 // enum data: key, value
      22, uint(OutgoingContactRequest::Pending),
      23, uint(OutgoingContactRequest::Acknowledged),
      24, uint(OutgoingContactRequest::Accepted),
      25, uint(OutgoingContactRequest::Error),
      26, uint(OutgoingContactRequest::Rejected),
      27, uint(OutgoingContactRequest::FirstResult),

       0        // eod
};

void OutgoingContactRequest::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        OutgoingContactRequest *_t = static_cast<OutgoingContactRequest *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->statusChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->accepted(); break;
        case 2: _t->rejected((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->removed(); break;
        case 4: _t->accept(); break;
        case 5: _t->reject((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 6: _t->reject((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->reject(); break;
        case 8: _t->cancel(); break;
        case 9: _t->sendRequest((*reinterpret_cast< const QSharedPointer<Protocol::Connection>(*)>(_a[1]))); break;
        case 10: _t->requestStatusChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (OutgoingContactRequest::*_t)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OutgoingContactRequest::statusChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (OutgoingContactRequest::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OutgoingContactRequest::accepted)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (OutgoingContactRequest::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OutgoingContactRequest::rejected)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (OutgoingContactRequest::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OutgoingContactRequest::removed)) {
                *result = 3;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        OutgoingContactRequest *_t = static_cast<OutgoingContactRequest *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< Status*>(_v) = _t->status(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->myNickname(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->message(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->rejectMessage(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject OutgoingContactRequest::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_OutgoingContactRequest.data,
      qt_meta_data_OutgoingContactRequest,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *OutgoingContactRequest::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OutgoingContactRequest::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OutgoingContactRequest.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int OutgoingContactRequest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void OutgoingContactRequest::statusChanged(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void OutgoingContactRequest::accepted()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void OutgoingContactRequest::rejected(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void OutgoingContactRequest::removed()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
