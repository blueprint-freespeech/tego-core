/****************************************************************************
** Meta object code from reading C++ file 'HiddenService.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/tor/HiddenService.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'HiddenService.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Tor__HiddenService_t {
    QByteArrayData data[8];
    char stringdata0[103];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Tor__HiddenService_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Tor__HiddenService_t qt_meta_stringdata_Tor__HiddenService = {
    {
QT_MOC_LITERAL(0, 0, 18), // "Tor::HiddenService"
QT_MOC_LITERAL(1, 19, 13), // "statusChanged"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 9), // "newStatus"
QT_MOC_LITERAL(4, 44, 9), // "oldStatus"
QT_MOC_LITERAL(5, 54, 13), // "serviceOnline"
QT_MOC_LITERAL(6, 68, 17), // "privateKeyChanged"
QT_MOC_LITERAL(7, 86, 16) // "servicePublished"

    },
    "Tor::HiddenService\0statusChanged\0\0"
    "newStatus\0oldStatus\0serviceOnline\0"
    "privateKeyChanged\0servicePublished"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Tor__HiddenService[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   34,    2, 0x06 /* Public */,
       5,    0,   39,    2, 0x06 /* Public */,
       6,    0,   40,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   41,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    3,    4,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void Tor::HiddenService::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        HiddenService *_t = static_cast<HiddenService *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->statusChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->serviceOnline(); break;
        case 2: _t->privateKeyChanged(); break;
        case 3: _t->servicePublished(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (HiddenService::*_t)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HiddenService::statusChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (HiddenService::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HiddenService::serviceOnline)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (HiddenService::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HiddenService::privateKeyChanged)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject Tor::HiddenService::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Tor__HiddenService.data,
      qt_meta_data_Tor__HiddenService,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Tor::HiddenService::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Tor::HiddenService::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Tor__HiddenService.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Tor::HiddenService::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void Tor::HiddenService::statusChanged(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Tor::HiddenService::serviceOnline()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Tor::HiddenService::privateKeyChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
