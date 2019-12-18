/****************************************************************************
** Meta object code from reading C++ file 'Connection.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/protocol/Connection.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Connection.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Protocol__Connection_t {
    QByteArrayData data[22];
    char stringdata0[268];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Protocol__Connection_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Protocol__Connection_t qt_meta_stringdata_Protocol__Connection = {
    {
QT_MOC_LITERAL(0, 0, 20), // "Protocol::Connection"
QT_MOC_LITERAL(1, 21, 6), // "closed"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 5), // "ready"
QT_MOC_LITERAL(4, 35, 24), // "versionNegotiationFailed"
QT_MOC_LITERAL(5, 60, 20), // "oldVersionNegotiated"
QT_MOC_LITERAL(6, 81, 11), // "QTcpSocket*"
QT_MOC_LITERAL(7, 93, 6), // "socket"
QT_MOC_LITERAL(8, 100, 13), // "authenticated"
QT_MOC_LITERAL(9, 114, 18), // "AuthenticationType"
QT_MOC_LITERAL(10, 133, 4), // "type"
QT_MOC_LITERAL(11, 138, 8), // "identity"
QT_MOC_LITERAL(12, 147, 14), // "purposeChanged"
QT_MOC_LITERAL(13, 162, 7), // "Purpose"
QT_MOC_LITERAL(14, 170, 5), // "after"
QT_MOC_LITERAL(15, 176, 6), // "before"
QT_MOC_LITERAL(16, 183, 14), // "channelCreated"
QT_MOC_LITERAL(17, 198, 8), // "Channel*"
QT_MOC_LITERAL(18, 207, 7), // "channel"
QT_MOC_LITERAL(19, 215, 32), // "channelRequestingInboundApproval"
QT_MOC_LITERAL(20, 248, 13), // "channelOpened"
QT_MOC_LITERAL(21, 262, 5) // "close"

    },
    "Protocol::Connection\0closed\0\0ready\0"
    "versionNegotiationFailed\0oldVersionNegotiated\0"
    "QTcpSocket*\0socket\0authenticated\0"
    "AuthenticationType\0type\0identity\0"
    "purposeChanged\0Purpose\0after\0before\0"
    "channelCreated\0Channel*\0channel\0"
    "channelRequestingInboundApproval\0"
    "channelOpened\0close"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Protocol__Connection[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       9,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x06 /* Public */,
       3,    0,   65,    2, 0x06 /* Public */,
       4,    0,   66,    2, 0x06 /* Public */,
       5,    1,   67,    2, 0x06 /* Public */,
       8,    2,   70,    2, 0x06 /* Public */,
      12,    2,   75,    2, 0x06 /* Public */,
      16,    1,   80,    2, 0x06 /* Public */,
      19,    1,   83,    2, 0x06 /* Public */,
      20,    1,   86,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      21,    0,   89,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 9, QMetaType::QString,   10,   11,
    QMetaType::Void, 0x80000000 | 13, 0x80000000 | 13,   14,   15,
    QMetaType::Void, 0x80000000 | 17,   18,
    QMetaType::Void, 0x80000000 | 17,   18,
    QMetaType::Void, 0x80000000 | 17,   18,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void Protocol::Connection::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Connection *_t = static_cast<Connection *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->closed(); break;
        case 1: _t->ready(); break;
        case 2: _t->versionNegotiationFailed(); break;
        case 3: _t->oldVersionNegotiated((*reinterpret_cast< QTcpSocket*(*)>(_a[1]))); break;
        case 4: _t->authenticated((*reinterpret_cast< AuthenticationType(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 5: _t->purposeChanged((*reinterpret_cast< Purpose(*)>(_a[1])),(*reinterpret_cast< Purpose(*)>(_a[2]))); break;
        case 6: _t->channelCreated((*reinterpret_cast< Channel*(*)>(_a[1]))); break;
        case 7: _t->channelRequestingInboundApproval((*reinterpret_cast< Channel*(*)>(_a[1]))); break;
        case 8: _t->channelOpened((*reinterpret_cast< Channel*(*)>(_a[1]))); break;
        case 9: _t->close(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Channel* >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Channel* >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Channel* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (Connection::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Connection::closed)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (Connection::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Connection::ready)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (Connection::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Connection::versionNegotiationFailed)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (Connection::*_t)(QTcpSocket * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Connection::oldVersionNegotiated)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (Connection::*_t)(AuthenticationType , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Connection::authenticated)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (Connection::*_t)(Purpose , Purpose );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Connection::purposeChanged)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (Connection::*_t)(Channel * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Connection::channelCreated)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (Connection::*_t)(Channel * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Connection::channelRequestingInboundApproval)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (Connection::*_t)(Channel * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Connection::channelOpened)) {
                *result = 8;
                return;
            }
        }
    }
}

const QMetaObject Protocol::Connection::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Protocol__Connection.data,
      qt_meta_data_Protocol__Connection,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Protocol::Connection::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Protocol::Connection::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Protocol__Connection.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Protocol::Connection::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void Protocol::Connection::closed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Protocol::Connection::ready()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Protocol::Connection::versionNegotiationFailed()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void Protocol::Connection::oldVersionNegotiated(QTcpSocket * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Protocol::Connection::authenticated(AuthenticationType _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void Protocol::Connection::purposeChanged(Purpose _t1, Purpose _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void Protocol::Connection::channelCreated(Channel * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void Protocol::Connection::channelRequestingInboundApproval(Channel * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void Protocol::Connection::channelOpened(Channel * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
