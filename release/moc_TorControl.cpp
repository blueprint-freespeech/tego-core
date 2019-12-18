/****************************************************************************
** Meta object code from reading C++ file 'TorControl.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/tor/TorControl.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TorControl.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Tor__TorControl_t {
    QByteArrayData data[36];
    char stringdata0[453];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Tor__TorControl_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Tor__TorControl_t qt_meta_stringdata_Tor__TorControl = {
    {
QT_MOC_LITERAL(0, 0, 15), // "Tor::TorControl"
QT_MOC_LITERAL(1, 16, 13), // "statusChanged"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 9), // "newStatus"
QT_MOC_LITERAL(4, 41, 9), // "oldStatus"
QT_MOC_LITERAL(5, 51, 16), // "torStatusChanged"
QT_MOC_LITERAL(6, 68, 9), // "connected"
QT_MOC_LITERAL(7, 78, 12), // "disconnected"
QT_MOC_LITERAL(8, 91, 19), // "connectivityChanged"
QT_MOC_LITERAL(9, 111, 22), // "bootstrapStatusChanged"
QT_MOC_LITERAL(10, 134, 19), // "hasOwnershipChanged"
QT_MOC_LITERAL(11, 154, 8), // "shutdown"
QT_MOC_LITERAL(12, 163, 12), // "shutdownSync"
QT_MOC_LITERAL(13, 176, 9), // "reconnect"
QT_MOC_LITERAL(14, 186, 16), // "getConfiguration"
QT_MOC_LITERAL(15, 203, 7), // "options"
QT_MOC_LITERAL(16, 211, 16), // "setConfiguration"
QT_MOC_LITERAL(17, 228, 17), // "saveConfiguration"
QT_MOC_LITERAL(18, 246, 17), // "PendingOperation*"
QT_MOC_LITERAL(19, 264, 6), // "status"
QT_MOC_LITERAL(20, 271, 6), // "Status"
QT_MOC_LITERAL(21, 278, 9), // "torStatus"
QT_MOC_LITERAL(22, 288, 9), // "TorStatus"
QT_MOC_LITERAL(23, 298, 15), // "hasConnectivity"
QT_MOC_LITERAL(24, 314, 10), // "torVersion"
QT_MOC_LITERAL(25, 325, 12), // "errorMessage"
QT_MOC_LITERAL(26, 338, 15), // "bootstrapStatus"
QT_MOC_LITERAL(27, 354, 12), // "hasOwnership"
QT_MOC_LITERAL(28, 367, 5), // "Error"
QT_MOC_LITERAL(29, 373, 12), // "NotConnected"
QT_MOC_LITERAL(30, 386, 10), // "Connecting"
QT_MOC_LITERAL(31, 397, 14), // "Authenticating"
QT_MOC_LITERAL(32, 412, 9), // "Connected"
QT_MOC_LITERAL(33, 422, 10), // "TorUnknown"
QT_MOC_LITERAL(34, 433, 10), // "TorOffline"
QT_MOC_LITERAL(35, 444, 8) // "TorReady"

    },
    "Tor::TorControl\0statusChanged\0\0newStatus\0"
    "oldStatus\0torStatusChanged\0connected\0"
    "disconnected\0connectivityChanged\0"
    "bootstrapStatusChanged\0hasOwnershipChanged\0"
    "shutdown\0shutdownSync\0reconnect\0"
    "getConfiguration\0options\0setConfiguration\0"
    "saveConfiguration\0PendingOperation*\0"
    "status\0Status\0torStatus\0TorStatus\0"
    "hasConnectivity\0torVersion\0errorMessage\0"
    "bootstrapStatus\0hasOwnership\0Error\0"
    "NotConnected\0Connecting\0Authenticating\0"
    "Connected\0TorUnknown\0TorOffline\0"
    "TorReady"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Tor__TorControl[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       7,  104, // properties
       2,  132, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   79,    2, 0x06 /* Public */,
       5,    2,   84,    2, 0x06 /* Public */,
       6,    0,   89,    2, 0x06 /* Public */,
       7,    0,   90,    2, 0x06 /* Public */,
       8,    0,   91,    2, 0x06 /* Public */,
       9,    0,   92,    2, 0x06 /* Public */,
      10,    0,   93,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      11,    0,   94,    2, 0x0a /* Public */,
      12,    0,   95,    2, 0x0a /* Public */,
      13,    0,   96,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
      14,    1,   97,    2, 0x02 /* Public */,
      16,    1,  100,    2, 0x02 /* Public */,
      17,    0,  103,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    3,    4,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::QObjectStar, QMetaType::QString,   15,
    QMetaType::QObjectStar, QMetaType::QVariantMap,   15,
    0x80000000 | 18,

 // properties: name, type, flags
      19, 0x80000000 | 20, 0x00495009,
      21, 0x80000000 | 22, 0x00495009,
      23, QMetaType::Bool, 0x00495001,
      24, QMetaType::QString, 0x00495001,
      25, QMetaType::QString, 0x00495001,
      26, QMetaType::QVariantMap, 0x00495001,
      27, QMetaType::Bool, 0x00495001,

 // properties: notify_signal_id
       0,
       1,
       4,
       2,
       0,
       5,
       6,

 // enums: name, flags, count, data
      20, 0x0,    5,  140,
      22, 0x0,    3,  150,

 // enum data: key, value
      28, uint(Tor::TorControl::Error),
      29, uint(Tor::TorControl::NotConnected),
      30, uint(Tor::TorControl::Connecting),
      31, uint(Tor::TorControl::Authenticating),
      32, uint(Tor::TorControl::Connected),
      33, uint(Tor::TorControl::TorUnknown),
      34, uint(Tor::TorControl::TorOffline),
      35, uint(Tor::TorControl::TorReady),

       0        // eod
};

void Tor::TorControl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TorControl *_t = static_cast<TorControl *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->statusChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->torStatusChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->connected(); break;
        case 3: _t->disconnected(); break;
        case 4: _t->connectivityChanged(); break;
        case 5: _t->bootstrapStatusChanged(); break;
        case 6: _t->hasOwnershipChanged(); break;
        case 7: _t->shutdown(); break;
        case 8: _t->shutdownSync(); break;
        case 9: _t->reconnect(); break;
        case 10: { QObject* _r = _t->getConfiguration((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QObject**>(_a[0]) = std::move(_r); }  break;
        case 11: { QObject* _r = _t->setConfiguration((*reinterpret_cast< const QVariantMap(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QObject**>(_a[0]) = std::move(_r); }  break;
        case 12: { PendingOperation* _r = _t->saveConfiguration();
            if (_a[0]) *reinterpret_cast< PendingOperation**>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (TorControl::*_t)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TorControl::statusChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (TorControl::*_t)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TorControl::torStatusChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (TorControl::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TorControl::connected)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (TorControl::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TorControl::disconnected)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (TorControl::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TorControl::connectivityChanged)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (TorControl::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TorControl::bootstrapStatusChanged)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (TorControl::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TorControl::hasOwnershipChanged)) {
                *result = 6;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        TorControl *_t = static_cast<TorControl *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< Status*>(_v) = _t->status(); break;
        case 1: *reinterpret_cast< TorStatus*>(_v) = _t->torStatus(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->hasConnectivity(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->torVersion(); break;
        case 4: *reinterpret_cast< QString*>(_v) = _t->errorMessage(); break;
        case 5: *reinterpret_cast< QVariantMap*>(_v) = _t->bootstrapStatus(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->hasOwnership(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject Tor::TorControl::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Tor__TorControl.data,
      qt_meta_data_Tor__TorControl,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Tor::TorControl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Tor::TorControl::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Tor__TorControl.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Tor::TorControl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
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
void Tor::TorControl::statusChanged(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Tor::TorControl::torStatusChanged(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Tor::TorControl::connected()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void Tor::TorControl::disconnected()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void Tor::TorControl::connectivityChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void Tor::TorControl::bootstrapStatusChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void Tor::TorControl::hasOwnershipChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
