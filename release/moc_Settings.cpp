/****************************************************************************
** Meta object code from reading C++ file 'Settings.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/utils/Settings.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Settings.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SettingsFile_t {
    QByteArrayData data[9];
    char stringdata0[88];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SettingsFile_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SettingsFile_t qt_meta_stringdata_SettingsFile = {
    {
QT_MOC_LITERAL(0, 0, 12), // "SettingsFile"
QT_MOC_LITERAL(1, 13, 15), // "filePathChanged"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 5), // "error"
QT_MOC_LITERAL(4, 36, 4), // "root"
QT_MOC_LITERAL(5, 41, 15), // "SettingsObject*"
QT_MOC_LITERAL(6, 57, 8), // "filePath"
QT_MOC_LITERAL(7, 66, 12), // "errorMessage"
QT_MOC_LITERAL(8, 79, 8) // "hasError"

    },
    "SettingsFile\0filePathChanged\0\0error\0"
    "root\0SettingsObject*\0filePath\0"
    "errorMessage\0hasError"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SettingsFile[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       4,   26, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x06 /* Public */,
       3,    0,   25,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       4, 0x80000000 | 5, 0x00095409,
       6, QMetaType::QString, 0x00495103,
       7, QMetaType::QString, 0x00495001,
       8, QMetaType::Bool, 0x00495001,

 // properties: notify_signal_id
       0,
       0,
       1,
       1,

       0        // eod
};

void SettingsFile::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SettingsFile *_t = static_cast<SettingsFile *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->filePathChanged(); break;
        case 1: _t->error(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (SettingsFile::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SettingsFile::filePathChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (SettingsFile::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SettingsFile::error)) {
                *result = 1;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< SettingsObject* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        SettingsFile *_t = static_cast<SettingsFile *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< SettingsObject**>(_v) = _t->root(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->filePath(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->errorMessage(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->hasError(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        SettingsFile *_t = static_cast<SettingsFile *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 1: _t->setFilePath(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject SettingsFile::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_SettingsFile.data,
      qt_meta_data_SettingsFile,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *SettingsFile::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SettingsFile::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SettingsFile.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int SettingsFile::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void SettingsFile::filePathChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void SettingsFile::error()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
struct qt_meta_stringdata_SettingsObject_t {
    QByteArrayData data[14];
    char stringdata0[108];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SettingsObject_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SettingsObject_t qt_meta_stringdata_SettingsObject = {
    {
QT_MOC_LITERAL(0, 0, 14), // "SettingsObject"
QT_MOC_LITERAL(1, 15, 11), // "pathChanged"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 11), // "dataChanged"
QT_MOC_LITERAL(4, 40, 8), // "modified"
QT_MOC_LITERAL(5, 49, 4), // "path"
QT_MOC_LITERAL(6, 54, 5), // "value"
QT_MOC_LITERAL(7, 60, 4), // "read"
QT_MOC_LITERAL(8, 65, 3), // "key"
QT_MOC_LITERAL(9, 69, 12), // "defaultValue"
QT_MOC_LITERAL(10, 82, 5), // "write"
QT_MOC_LITERAL(11, 88, 5), // "unset"
QT_MOC_LITERAL(12, 94, 8), // "undefine"
QT_MOC_LITERAL(13, 103, 4) // "data"

    },
    "SettingsObject\0pathChanged\0\0dataChanged\0"
    "modified\0path\0value\0read\0key\0defaultValue\0"
    "write\0unset\0undefine\0data"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SettingsObject[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       2,   78, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x06 /* Public */,
       3,    0,   55,    2, 0x06 /* Public */,
       4,    2,   56,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
       7,    2,   61,    2, 0x02 /* Public */,
       7,    1,   66,    2, 0x22 /* Public | MethodCloned */,
      10,    2,   69,    2, 0x02 /* Public */,
      11,    1,   74,    2, 0x02 /* Public */,
      12,    0,   77,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QJsonValue,    5,    6,

 // methods: parameters
    QMetaType::QJsonValue, QMetaType::QString, QMetaType::QJsonValue,    8,    9,
    QMetaType::QJsonValue, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::QString, QMetaType::QJsonValue,    8,    6,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void,

 // properties: name, type, flags
       5, QMetaType::QString, 0x00495103,
      13, QMetaType::QJsonObject, 0x00495103,

 // properties: notify_signal_id
       0,
       1,

       0        // eod
};

void SettingsObject::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SettingsObject *_t = static_cast<SettingsObject *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->pathChanged(); break;
        case 1: _t->dataChanged(); break;
        case 2: _t->modified((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QJsonValue(*)>(_a[2]))); break;
        case 3: { QJsonValue _r = _t->read((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QJsonValue(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QJsonValue*>(_a[0]) = std::move(_r); }  break;
        case 4: { QJsonValue _r = _t->read((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QJsonValue*>(_a[0]) = std::move(_r); }  break;
        case 5: _t->write((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QJsonValue(*)>(_a[2]))); break;
        case 6: _t->unset((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->undefine(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (SettingsObject::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SettingsObject::pathChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (SettingsObject::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SettingsObject::dataChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (SettingsObject::*_t)(const QString & , const QJsonValue & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SettingsObject::modified)) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        SettingsObject *_t = static_cast<SettingsObject *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->path(); break;
        case 1: *reinterpret_cast< QJsonObject*>(_v) = _t->data(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        SettingsObject *_t = static_cast<SettingsObject *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setPath(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setData(*reinterpret_cast< QJsonObject*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject SettingsObject::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_SettingsObject.data,
      qt_meta_data_SettingsObject,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *SettingsObject::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SettingsObject::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SettingsObject.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int SettingsObject::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void SettingsObject::pathChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void SettingsObject::dataChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void SettingsObject::modified(const QString & _t1, const QJsonValue & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
