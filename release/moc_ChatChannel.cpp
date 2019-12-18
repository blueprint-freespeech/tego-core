/****************************************************************************
** Meta object code from reading C++ file 'ChatChannel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/protocol/ChatChannel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ChatChannel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Protocol__ChatChannel_t {
    QByteArrayData data[9];
    char stringdata0[91];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Protocol__ChatChannel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Protocol__ChatChannel_t qt_meta_stringdata_Protocol__ChatChannel = {
    {
QT_MOC_LITERAL(0, 0, 21), // "Protocol::ChatChannel"
QT_MOC_LITERAL(1, 22, 19), // "messageAcknowledged"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 9), // "MessageId"
QT_MOC_LITERAL(4, 53, 2), // "id"
QT_MOC_LITERAL(5, 56, 8), // "accepted"
QT_MOC_LITERAL(6, 65, 15), // "messageReceived"
QT_MOC_LITERAL(7, 81, 4), // "text"
QT_MOC_LITERAL(8, 86, 4) // "time"

    },
    "Protocol::ChatChannel\0messageAcknowledged\0"
    "\0MessageId\0id\0accepted\0messageReceived\0"
    "text\0time"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Protocol__ChatChannel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   24,    2, 0x06 /* Public */,
       6,    3,   29,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Bool,    4,    5,
    QMetaType::Void, QMetaType::QString, QMetaType::QDateTime, 0x80000000 | 3,    7,    8,    4,

       0        // eod
};

void Protocol::ChatChannel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ChatChannel *_t = static_cast<ChatChannel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->messageAcknowledged((*reinterpret_cast< MessageId(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 1: _t->messageReceived((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QDateTime(*)>(_a[2])),(*reinterpret_cast< MessageId(*)>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (ChatChannel::*_t)(MessageId , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChatChannel::messageAcknowledged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (ChatChannel::*_t)(const QString & , const QDateTime & , MessageId );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChatChannel::messageReceived)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject Protocol::ChatChannel::staticMetaObject = {
    { &Channel::staticMetaObject, qt_meta_stringdata_Protocol__ChatChannel.data,
      qt_meta_data_Protocol__ChatChannel,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Protocol::ChatChannel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Protocol::ChatChannel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Protocol__ChatChannel.stringdata0))
        return static_cast<void*>(this);
    return Channel::qt_metacast(_clname);
}

int Protocol::ChatChannel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Channel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void Protocol::ChatChannel::messageAcknowledged(MessageId _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Protocol::ChatChannel::messageReceived(const QString & _t1, const QDateTime & _t2, MessageId _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
