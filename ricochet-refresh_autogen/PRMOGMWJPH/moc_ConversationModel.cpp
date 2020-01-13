/****************************************************************************
** Meta object code from reading C++ file 'ConversationModel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "core/ConversationModel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ConversationModel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ConversationModel_t {
    QByteArrayData data[26];
    char stringdata0[307];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ConversationModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ConversationModel_t qt_meta_stringdata_ConversationModel = {
    {
QT_MOC_LITERAL(0, 0, 17), // "ConversationModel"
QT_MOC_LITERAL(1, 18, 14), // "contactChanged"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 18), // "unreadCountChanged"
QT_MOC_LITERAL(4, 53, 11), // "sendMessage"
QT_MOC_LITERAL(5, 65, 4), // "text"
QT_MOC_LITERAL(6, 70, 5), // "clear"
QT_MOC_LITERAL(7, 76, 15), // "messageReceived"
QT_MOC_LITERAL(8, 92, 4), // "time"
QT_MOC_LITERAL(9, 97, 9), // "MessageId"
QT_MOC_LITERAL(10, 107, 2), // "id"
QT_MOC_LITERAL(11, 110, 19), // "messageAcknowledged"
QT_MOC_LITERAL(12, 130, 8), // "accepted"
QT_MOC_LITERAL(13, 139, 21), // "outboundChannelClosed"
QT_MOC_LITERAL(14, 161, 18), // "sendQueuedMessages"
QT_MOC_LITERAL(15, 180, 22), // "onContactStatusChanged"
QT_MOC_LITERAL(16, 203, 16), // "resetUnreadCount"
QT_MOC_LITERAL(17, 220, 7), // "contact"
QT_MOC_LITERAL(18, 228, 12), // "ContactUser*"
QT_MOC_LITERAL(19, 241, 11), // "unreadCount"
QT_MOC_LITERAL(20, 253, 13), // "MessageStatus"
QT_MOC_LITERAL(21, 267, 8), // "Received"
QT_MOC_LITERAL(22, 276, 6), // "Queued"
QT_MOC_LITERAL(23, 283, 7), // "Sending"
QT_MOC_LITERAL(24, 291, 9), // "Delivered"
QT_MOC_LITERAL(25, 301, 5) // "Error"

    },
    "ConversationModel\0contactChanged\0\0"
    "unreadCountChanged\0sendMessage\0text\0"
    "clear\0messageReceived\0time\0MessageId\0"
    "id\0messageAcknowledged\0accepted\0"
    "outboundChannelClosed\0sendQueuedMessages\0"
    "onContactStatusChanged\0resetUnreadCount\0"
    "contact\0ContactUser*\0unreadCount\0"
    "MessageStatus\0Received\0Queued\0Sending\0"
    "Delivered\0Error"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ConversationModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       2,   86, // properties
       1,   94, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x06 /* Public */,
       3,    0,   65,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   66,    2, 0x0a /* Public */,
       6,    0,   69,    2, 0x0a /* Public */,
       7,    3,   70,    2, 0x08 /* Private */,
      11,    2,   77,    2, 0x08 /* Private */,
      13,    0,   82,    2, 0x08 /* Private */,
      14,    0,   83,    2, 0x08 /* Private */,
      15,    0,   84,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      16,    0,   85,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QDateTime, 0x80000000 | 9,    5,    8,   10,
    QMetaType::Void, 0x80000000 | 9, QMetaType::Bool,   10,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void,

 // properties: name, type, flags
      17, 0x80000000 | 18, 0x0049510b,
      19, QMetaType::Int, 0x00495005,

 // properties: notify_signal_id
       0,
       1,

 // enums: name, alias, flags, count, data
      20,   20, 0x0,    5,   99,

 // enum data: key, value
      21, uint(ConversationModel::Received),
      22, uint(ConversationModel::Queued),
      23, uint(ConversationModel::Sending),
      24, uint(ConversationModel::Delivered),
      25, uint(ConversationModel::Error),

       0        // eod
};

void ConversationModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ConversationModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->contactChanged(); break;
        case 1: _t->unreadCountChanged(); break;
        case 2: _t->sendMessage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->clear(); break;
        case 4: _t->messageReceived((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QDateTime(*)>(_a[2])),(*reinterpret_cast< MessageId(*)>(_a[3]))); break;
        case 5: _t->messageAcknowledged((*reinterpret_cast< MessageId(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 6: _t->outboundChannelClosed(); break;
        case 7: _t->sendQueuedMessages(); break;
        case 8: _t->onContactStatusChanged(); break;
        case 9: _t->resetUnreadCount(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ConversationModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ConversationModel::contactChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ConversationModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ConversationModel::unreadCountChanged)) {
                *result = 1;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ContactUser* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ConversationModel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< ContactUser**>(_v) = _t->contact(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->unreadCount(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<ConversationModel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setContact(*reinterpret_cast< ContactUser**>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
        ConversationModel *_t = static_cast<ConversationModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 1: _t->resetUnreadCount(); break;
        default: break;
        }
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject ConversationModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractListModel::staticMetaObject>(),
    qt_meta_stringdata_ConversationModel.data,
    qt_meta_data_ConversationModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ConversationModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ConversationModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ConversationModel.stringdata0))
        return static_cast<void*>(this);
    return QAbstractListModel::qt_metacast(_clname);
}

int ConversationModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractListModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
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
void ConversationModel::contactChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ConversationModel::unreadCountChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
