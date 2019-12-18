/****************************************************************************
** Meta object code from reading C++ file 'TorProcess_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/tor/TorProcess_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TorProcess_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Tor__TorProcessPrivate_t {
    QByteArrayData data[9];
    char stringdata0[132];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Tor__TorProcessPrivate_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Tor__TorProcessPrivate_t qt_meta_stringdata_Tor__TorProcessPrivate = {
    {
QT_MOC_LITERAL(0, 0, 22), // "Tor::TorProcessPrivate"
QT_MOC_LITERAL(1, 23, 14), // "processStarted"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 15), // "processFinished"
QT_MOC_LITERAL(4, 55, 12), // "processError"
QT_MOC_LITERAL(5, 68, 22), // "QProcess::ProcessError"
QT_MOC_LITERAL(6, 91, 5), // "error"
QT_MOC_LITERAL(7, 97, 15), // "processReadable"
QT_MOC_LITERAL(8, 113, 18) // "tryReadControlPort"

    },
    "Tor::TorProcessPrivate\0processStarted\0"
    "\0processFinished\0processError\0"
    "QProcess::ProcessError\0error\0"
    "processReadable\0tryReadControlPort"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Tor__TorProcessPrivate[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x0a /* Public */,
       3,    0,   40,    2, 0x0a /* Public */,
       4,    1,   41,    2, 0x0a /* Public */,
       7,    0,   44,    2, 0x0a /* Public */,
       8,    0,   45,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Tor::TorProcessPrivate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TorProcessPrivate *_t = static_cast<TorProcessPrivate *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->processStarted(); break;
        case 1: _t->processFinished(); break;
        case 2: _t->processError((*reinterpret_cast< QProcess::ProcessError(*)>(_a[1]))); break;
        case 3: _t->processReadable(); break;
        case 4: _t->tryReadControlPort(); break;
        default: ;
        }
    }
}

const QMetaObject Tor::TorProcessPrivate::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Tor__TorProcessPrivate.data,
      qt_meta_data_Tor__TorProcessPrivate,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Tor::TorProcessPrivate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Tor::TorProcessPrivate::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Tor__TorProcessPrivate.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Tor::TorProcessPrivate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
