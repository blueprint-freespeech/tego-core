/****************************************************************************
** Meta object code from reading C++ file 'TorManager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/tor/TorManager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TorManager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Tor__TorManager_t {
    QByteArrayData data[14];
    char stringdata0[181];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Tor__TorManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Tor__TorManager_t qt_meta_stringdata_Tor__TorManager = {
    {
QT_MOC_LITERAL(0, 0, 15), // "Tor::TorManager"
QT_MOC_LITERAL(1, 16, 26), // "configurationNeededChanged"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 12), // "errorChanged"
QT_MOC_LITERAL(4, 57, 5), // "start"
QT_MOC_LITERAL(5, 63, 19), // "configurationNeeded"
QT_MOC_LITERAL(6, 83, 11), // "logMessages"
QT_MOC_LITERAL(7, 95, 7), // "process"
QT_MOC_LITERAL(8, 103, 16), // "Tor::TorProcess*"
QT_MOC_LITERAL(9, 120, 7), // "control"
QT_MOC_LITERAL(10, 128, 16), // "Tor::TorControl*"
QT_MOC_LITERAL(11, 145, 8), // "hasError"
QT_MOC_LITERAL(12, 154, 12), // "errorMessage"
QT_MOC_LITERAL(13, 167, 13) // "dataDirectory"

    },
    "Tor::TorManager\0configurationNeededChanged\0"
    "\0errorChanged\0start\0configurationNeeded\0"
    "logMessages\0process\0Tor::TorProcess*\0"
    "control\0Tor::TorControl*\0hasError\0"
    "errorMessage\0dataDirectory"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Tor__TorManager[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       7,   32, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x06 /* Public */,
       3,    0,   30,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   31,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

 // properties: name, type, flags
       5, QMetaType::Bool, 0x00495001,
       6, QMetaType::QStringList, 0x00095401,
       7, 0x80000000 | 8, 0x00095409,
       9, 0x80000000 | 10, 0x00095409,
      11, QMetaType::Bool, 0x00495001,
      12, QMetaType::QString, 0x00495001,
      13, QMetaType::QString, 0x00095103,

 // properties: notify_signal_id
       0,
       0,
       0,
       0,
       1,
       1,
       0,

       0        // eod
};

void Tor::TorManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TorManager *_t = static_cast<TorManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->configurationNeededChanged(); break;
        case 1: _t->errorChanged(); break;
        case 2: _t->start(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (TorManager::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TorManager::configurationNeededChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (TorManager::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TorManager::errorChanged)) {
                *result = 1;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        TorManager *_t = static_cast<TorManager *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->configurationNeeded(); break;
        case 1: *reinterpret_cast< QStringList*>(_v) = _t->logMessages(); break;
        case 2: *reinterpret_cast< Tor::TorProcess**>(_v) = _t->process(); break;
        case 3: *reinterpret_cast< Tor::TorControl**>(_v) = _t->control(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->hasError(); break;
        case 5: *reinterpret_cast< QString*>(_v) = _t->errorMessage(); break;
        case 6: *reinterpret_cast< QString*>(_v) = _t->dataDirectory(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        TorManager *_t = static_cast<TorManager *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 6: _t->setDataDirectory(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

const QMetaObject Tor::TorManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Tor__TorManager.data,
      qt_meta_data_Tor__TorManager,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Tor::TorManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Tor::TorManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Tor__TorManager.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Tor::TorManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
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
void Tor::TorManager::configurationNeededChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Tor::TorManager::errorChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
