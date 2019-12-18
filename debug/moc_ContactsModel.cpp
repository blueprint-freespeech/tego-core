/****************************************************************************
** Meta object code from reading C++ file 'ContactsModel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/ui/ContactsModel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ContactsModel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ContactsModel_t {
    QByteArrayData data[14];
    char stringdata0[151];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ContactsModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ContactsModel_t qt_meta_stringdata_ContactsModel = {
    {
QT_MOC_LITERAL(0, 0, 13), // "ContactsModel"
QT_MOC_LITERAL(1, 14, 15), // "identityChanged"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 10), // "updateUser"
QT_MOC_LITERAL(4, 42, 12), // "ContactUser*"
QT_MOC_LITERAL(5, 55, 4), // "user"
QT_MOC_LITERAL(6, 60, 12), // "contactAdded"
QT_MOC_LITERAL(7, 73, 14), // "contactRemoved"
QT_MOC_LITERAL(8, 88, 14), // "indexOfContact"
QT_MOC_LITERAL(9, 103, 12), // "rowOfContact"
QT_MOC_LITERAL(10, 116, 7), // "contact"
QT_MOC_LITERAL(11, 124, 3), // "row"
QT_MOC_LITERAL(12, 128, 8), // "identity"
QT_MOC_LITERAL(13, 137, 13) // "UserIdentity*"

    },
    "ContactsModel\0identityChanged\0\0"
    "updateUser\0ContactUser*\0user\0contactAdded\0"
    "contactRemoved\0indexOfContact\0"
    "rowOfContact\0contact\0row\0identity\0"
    "UserIdentity*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ContactsModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       1,   74, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   55,    2, 0x08 /* Private */,
       3,    0,   58,    2, 0x28 /* Private | MethodCloned */,
       6,    1,   59,    2, 0x08 /* Private */,
       7,    1,   62,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
       8,    1,   65,    2, 0x02 /* Public */,
       9,    1,   68,    2, 0x02 /* Public */,
      10,    1,   71,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 4,    5,

 // methods: parameters
    QMetaType::QModelIndex, 0x80000000 | 4,    5,
    QMetaType::Int, 0x80000000 | 4,    5,
    0x80000000 | 4, QMetaType::Int,   11,

 // properties: name, type, flags
      12, 0x80000000 | 13, 0x0049510b,

 // properties: notify_signal_id
       0,

       0        // eod
};

void ContactsModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ContactsModel *_t = static_cast<ContactsModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->identityChanged(); break;
        case 1: _t->updateUser((*reinterpret_cast< ContactUser*(*)>(_a[1]))); break;
        case 2: _t->updateUser(); break;
        case 3: _t->contactAdded((*reinterpret_cast< ContactUser*(*)>(_a[1]))); break;
        case 4: _t->contactRemoved((*reinterpret_cast< ContactUser*(*)>(_a[1]))); break;
        case 5: { QModelIndex _r = _t->indexOfContact((*reinterpret_cast< ContactUser*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QModelIndex*>(_a[0]) = std::move(_r); }  break;
        case 6: { int _r = _t->rowOfContact((*reinterpret_cast< ContactUser*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 7: { ContactUser* _r = _t->contact((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< ContactUser**>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (ContactsModel::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ContactsModel::identityChanged)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        ContactsModel *_t = static_cast<ContactsModel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< UserIdentity**>(_v) = _t->identity(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        ContactsModel *_t = static_cast<ContactsModel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setIdentity(*reinterpret_cast< UserIdentity**>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject ContactsModel::staticMetaObject = {
    { &QAbstractListModel::staticMetaObject, qt_meta_stringdata_ContactsModel.data,
      qt_meta_data_ContactsModel,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *ContactsModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ContactsModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ContactsModel.stringdata0))
        return static_cast<void*>(this);
    return QAbstractListModel::qt_metacast(_clname);
}

int ContactsModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractListModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
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
void ContactsModel::identityChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
