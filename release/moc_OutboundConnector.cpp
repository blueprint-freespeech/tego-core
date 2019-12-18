/****************************************************************************
** Meta object code from reading C++ file 'OutboundConnector.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/protocol/OutboundConnector.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'OutboundConnector.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Protocol__OutboundConnector_t {
    QByteArrayData data[18];
    char stringdata0[194];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Protocol__OutboundConnector_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Protocol__OutboundConnector_t qt_meta_stringdata_Protocol__OutboundConnector = {
    {
QT_MOC_LITERAL(0, 0, 27), // "Protocol::OutboundConnector"
QT_MOC_LITERAL(1, 28, 5), // "ready"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 13), // "statusChanged"
QT_MOC_LITERAL(4, 49, 15), // "isActiveChanged"
QT_MOC_LITERAL(5, 65, 20), // "oldVersionNegotiated"
QT_MOC_LITERAL(6, 86, 11), // "QTcpSocket*"
QT_MOC_LITERAL(7, 98, 6), // "socket"
QT_MOC_LITERAL(8, 105, 5), // "abort"
QT_MOC_LITERAL(9, 111, 6), // "status"
QT_MOC_LITERAL(10, 118, 6), // "Status"
QT_MOC_LITERAL(11, 125, 8), // "isActive"
QT_MOC_LITERAL(12, 134, 8), // "Inactive"
QT_MOC_LITERAL(13, 143, 10), // "Connecting"
QT_MOC_LITERAL(14, 154, 12), // "Initializing"
QT_MOC_LITERAL(15, 167, 14), // "Authenticating"
QT_MOC_LITERAL(16, 182, 5), // "Ready"
QT_MOC_LITERAL(17, 188, 5) // "Error"

    },
    "Protocol::OutboundConnector\0ready\0\0"
    "statusChanged\0isActiveChanged\0"
    "oldVersionNegotiated\0QTcpSocket*\0"
    "socket\0abort\0status\0Status\0isActive\0"
    "Inactive\0Connecting\0Initializing\0"
    "Authenticating\0Ready\0Error"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Protocol__OutboundConnector[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       2,   46, // properties
       1,   54, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,
       3,    0,   40,    2, 0x06 /* Public */,
       4,    0,   41,    2, 0x06 /* Public */,
       5,    1,   42,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    0,   45,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    7,

 // slots: parameters
    QMetaType::Void,

 // properties: name, type, flags
       9, 0x80000000 | 10, 0x00495009,
      11, QMetaType::Bool, 0x00495001,

 // properties: notify_signal_id
       1,
       2,

 // enums: name, flags, count, data
      10, 0x0,    6,   58,

 // enum data: key, value
      12, uint(Protocol::OutboundConnector::Inactive),
      13, uint(Protocol::OutboundConnector::Connecting),
      14, uint(Protocol::OutboundConnector::Initializing),
      15, uint(Protocol::OutboundConnector::Authenticating),
      16, uint(Protocol::OutboundConnector::Ready),
      17, uint(Protocol::OutboundConnector::Error),

       0        // eod
};

void Protocol::OutboundConnector::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        OutboundConnector *_t = static_cast<OutboundConnector *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->ready(); break;
        case 1: _t->statusChanged(); break;
        case 2: _t->isActiveChanged(); break;
        case 3: _t->oldVersionNegotiated((*reinterpret_cast< QTcpSocket*(*)>(_a[1]))); break;
        case 4: _t->abort(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (OutboundConnector::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OutboundConnector::ready)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (OutboundConnector::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OutboundConnector::statusChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (OutboundConnector::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OutboundConnector::isActiveChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (OutboundConnector::*_t)(QTcpSocket * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OutboundConnector::oldVersionNegotiated)) {
                *result = 3;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        OutboundConnector *_t = static_cast<OutboundConnector *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< Status*>(_v) = _t->status(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->isActive(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject Protocol::OutboundConnector::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Protocol__OutboundConnector.data,
      qt_meta_data_Protocol__OutboundConnector,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Protocol::OutboundConnector::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Protocol::OutboundConnector::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Protocol__OutboundConnector.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Protocol::OutboundConnector::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void Protocol::OutboundConnector::ready()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Protocol::OutboundConnector::statusChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Protocol::OutboundConnector::isActiveChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void Protocol::OutboundConnector::oldVersionNegotiated(QTcpSocket * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
