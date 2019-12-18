/****************************************************************************
** Meta object code from reading C++ file 'SetConfCommand.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/tor/SetConfCommand.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SetConfCommand.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Tor__SetConfCommand_t {
    QByteArrayData data[7];
    char stringdata0[81];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Tor__SetConfCommand_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Tor__SetConfCommand_t qt_meta_stringdata_Tor__SetConfCommand = {
    {
QT_MOC_LITERAL(0, 0, 19), // "Tor::SetConfCommand"
QT_MOC_LITERAL(1, 20, 16), // "setConfSucceeded"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 13), // "setConfFailed"
QT_MOC_LITERAL(4, 52, 4), // "code"
QT_MOC_LITERAL(5, 57, 12), // "errorMessage"
QT_MOC_LITERAL(6, 70, 10) // "successful"

    },
    "Tor::SetConfCommand\0setConfSucceeded\0"
    "\0setConfFailed\0code\0errorMessage\0"
    "successful"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Tor__SetConfCommand[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       2,   28, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x06 /* Public */,
       3,    1,   25,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,

 // properties: name, type, flags
       5, QMetaType::QString, 0x00095401,
       6, QMetaType::Bool, 0x00095401,

       0        // eod
};

void Tor::SetConfCommand::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SetConfCommand *_t = static_cast<SetConfCommand *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setConfSucceeded(); break;
        case 1: _t->setConfFailed((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (SetConfCommand::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SetConfCommand::setConfSucceeded)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (SetConfCommand::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SetConfCommand::setConfFailed)) {
                *result = 1;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        SetConfCommand *_t = static_cast<SetConfCommand *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->errorMessage(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->isSuccessful(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject Tor::SetConfCommand::staticMetaObject = {
    { &TorControlCommand::staticMetaObject, qt_meta_stringdata_Tor__SetConfCommand.data,
      qt_meta_data_Tor__SetConfCommand,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Tor::SetConfCommand::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Tor::SetConfCommand::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Tor__SetConfCommand.stringdata0))
        return static_cast<void*>(this);
    return TorControlCommand::qt_metacast(_clname);
}

int Tor::SetConfCommand::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TorControlCommand::qt_metacall(_c, _id, _a);
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
void Tor::SetConfCommand::setConfSucceeded()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Tor::SetConfCommand::setConfFailed(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
