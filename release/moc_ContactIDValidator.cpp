/****************************************************************************
** Meta object code from reading C++ file 'ContactIDValidator.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/core/ContactIDValidator.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ContactIDValidator.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ContactIDValidator_t {
    QByteArrayData data[9];
    char stringdata0[112];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ContactIDValidator_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ContactIDValidator_t qt_meta_stringdata_ContactIDValidator = {
    {
QT_MOC_LITERAL(0, 0, 18), // "ContactIDValidator"
QT_MOC_LITERAL(1, 19, 6), // "failed"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 15), // "matchingContact"
QT_MOC_LITERAL(4, 43, 12), // "ContactUser*"
QT_MOC_LITERAL(5, 56, 4), // "text"
QT_MOC_LITERAL(6, 61, 15), // "matchesIdentity"
QT_MOC_LITERAL(7, 77, 20), // "notContactOfIdentity"
QT_MOC_LITERAL(8, 98, 13) // "UserIdentity*"

    },
    "ContactIDValidator\0failed\0\0matchingContact\0"
    "ContactUser*\0text\0matchesIdentity\0"
    "notContactOfIdentity\0UserIdentity*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ContactIDValidator[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       1,   36, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
       3,    1,   30,    2, 0x02 /* Public */,
       6,    1,   33,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,

 // methods: parameters
    0x80000000 | 4, QMetaType::QString,    5,
    QMetaType::Bool, QMetaType::QString,    5,

 // properties: name, type, flags
       7, 0x80000000 | 8, 0x0009510b,

       0        // eod
};

void ContactIDValidator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ContactIDValidator *_t = static_cast<ContactIDValidator *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->failed(); break;
        case 1: { ContactUser* _r = _t->matchingContact((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< ContactUser**>(_a[0]) = std::move(_r); }  break;
        case 2: { bool _r = _t->matchesIdentity((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (ContactIDValidator::*_t)() const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ContactIDValidator::failed)) {
                *result = 0;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UserIdentity* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        ContactIDValidator *_t = static_cast<ContactIDValidator *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< UserIdentity**>(_v) = _t->notContactOfIdentity(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        ContactIDValidator *_t = static_cast<ContactIDValidator *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setNotContactOfIdentity(*reinterpret_cast< UserIdentity**>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject ContactIDValidator::staticMetaObject = {
    { &QRegularExpressionValidator::staticMetaObject, qt_meta_stringdata_ContactIDValidator.data,
      qt_meta_data_ContactIDValidator,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *ContactIDValidator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ContactIDValidator::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ContactIDValidator.stringdata0))
        return static_cast<void*>(this);
    return QRegularExpressionValidator::qt_metacast(_clname);
}

int ContactIDValidator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QRegularExpressionValidator::qt_metacall(_c, _id, _a);
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
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void ContactIDValidator::failed()const
{
    QMetaObject::activate(const_cast< ContactIDValidator *>(this), &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
