/****************************************************************************
** Meta object code from reading C++ file 'Channel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "protocol/Channel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Channel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Protocol__Channel_t {
    QByteArrayData data[8];
    char stringdata0[122];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Protocol__Channel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Protocol__Channel_t qt_meta_stringdata_Protocol__Channel = {
    {
QT_MOC_LITERAL(0, 0, 17), // "Protocol::Channel"
QT_MOC_LITERAL(1, 18, 13), // "channelOpened"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 15), // "channelRejected"
QT_MOC_LITERAL(4, 49, 41), // "Data::Control::ChannelResult:..."
QT_MOC_LITERAL(5, 91, 5), // "error"
QT_MOC_LITERAL(6, 97, 11), // "invalidated"
QT_MOC_LITERAL(7, 109, 12) // "closeChannel"

    },
    "Protocol::Channel\0channelOpened\0\0"
    "channelRejected\0"
    "Data::Control::ChannelResult::CommonError\0"
    "error\0invalidated\0closeChannel"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Protocol__Channel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,
       3,    1,   35,    2, 0x06 /* Public */,
       6,    0,   38,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   39,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void Protocol::Channel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Channel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->channelOpened(); break;
        case 1: _t->channelRejected((*reinterpret_cast< Data::Control::ChannelResult::CommonError(*)>(_a[1]))); break;
        case 2: _t->invalidated(); break;
        case 3: _t->closeChannel(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Channel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Channel::channelOpened)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Channel::*)(Data::Control::ChannelResult::CommonError );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Channel::channelRejected)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Channel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Channel::invalidated)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Protocol::Channel::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_Protocol__Channel.data,
    qt_meta_data_Protocol__Channel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Protocol::Channel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Protocol::Channel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Protocol__Channel.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Protocol::Channel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void Protocol::Channel::channelOpened()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Protocol::Channel::channelRejected(Data::Control::ChannelResult::CommonError _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Protocol::Channel::invalidated()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
