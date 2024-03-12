/****************************************************************************
** Meta object code from reading C++ file 'mythread.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../mythread.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mythread.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Generate1_t {
    QByteArrayData data[10];
    char stringdata0[148];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Generate1_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Generate1_t qt_meta_stringdata_Generate1 = {
    {
QT_MOC_LITERAL(0, 0, 9), // "Generate1"
QT_MOC_LITERAL(1, 10, 13), // "host1finished"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 25), // "std::vector<std::wstring>"
QT_MOC_LITERAL(4, 51, 15), // "localServerList"
QT_MOC_LITERAL(5, 67, 20), // "opcItemNamesfinished"
QT_MOC_LITERAL(6, 88, 12), // "opcItemNames"
QT_MOC_LITERAL(7, 101, 20), // "itemDataListfinished"
QT_MOC_LITERAL(8, 122, 12), // "itemDataList"
QT_MOC_LITERAL(9, 135, 12) // "updatevalue1"

    },
    "Generate1\0host1finished\0\0"
    "std::vector<std::wstring>\0localServerList\0"
    "opcItemNamesfinished\0opcItemNames\0"
    "itemDataListfinished\0itemDataList\0"
    "updatevalue1"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Generate1[] = {

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
       1,    1,   34,    2, 0x06 /* Public */,
       5,    1,   37,    2, 0x06 /* Public */,
       7,    1,   40,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    0,   43,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    6,
    QMetaType::Void, QMetaType::QStringList,    8,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void Generate1::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Generate1 *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->host1finished((*reinterpret_cast< std::vector<std::wstring>(*)>(_a[1]))); break;
        case 1: _t->opcItemNamesfinished((*reinterpret_cast< std::vector<std::wstring>(*)>(_a[1]))); break;
        case 2: _t->itemDataListfinished((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        case 3: _t->updatevalue1(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Generate1::*)(std::vector<std::wstring> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Generate1::host1finished)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Generate1::*)(std::vector<std::wstring> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Generate1::opcItemNamesfinished)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Generate1::*)(QStringList );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Generate1::itemDataListfinished)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Generate1::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_Generate1.data,
    qt_meta_data_Generate1,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Generate1::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Generate1::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Generate1.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Generate1::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void Generate1::host1finished(std::vector<std::wstring> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Generate1::opcItemNamesfinished(std::vector<std::wstring> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Generate1::itemDataListfinished(QStringList _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
struct qt_meta_stringdata_Generate2_t {
    QByteArrayData data[10];
    char stringdata0[148];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Generate2_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Generate2_t qt_meta_stringdata_Generate2 = {
    {
QT_MOC_LITERAL(0, 0, 9), // "Generate2"
QT_MOC_LITERAL(1, 10, 13), // "host2finished"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 25), // "std::vector<std::wstring>"
QT_MOC_LITERAL(4, 51, 15), // "localServerList"
QT_MOC_LITERAL(5, 67, 20), // "opcItemNamesfinished"
QT_MOC_LITERAL(6, 88, 12), // "opcItemNames"
QT_MOC_LITERAL(7, 101, 20), // "itemDataListfinished"
QT_MOC_LITERAL(8, 122, 12), // "itemDataList"
QT_MOC_LITERAL(9, 135, 12) // "updatevalue2"

    },
    "Generate2\0host2finished\0\0"
    "std::vector<std::wstring>\0localServerList\0"
    "opcItemNamesfinished\0opcItemNames\0"
    "itemDataListfinished\0itemDataList\0"
    "updatevalue2"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Generate2[] = {

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
       1,    1,   34,    2, 0x06 /* Public */,
       5,    1,   37,    2, 0x06 /* Public */,
       7,    1,   40,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    0,   43,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    6,
    QMetaType::Void, QMetaType::QStringList,    8,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void Generate2::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Generate2 *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->host2finished((*reinterpret_cast< std::vector<std::wstring>(*)>(_a[1]))); break;
        case 1: _t->opcItemNamesfinished((*reinterpret_cast< std::vector<std::wstring>(*)>(_a[1]))); break;
        case 2: _t->itemDataListfinished((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        case 3: _t->updatevalue2(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Generate2::*)(std::vector<std::wstring> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Generate2::host2finished)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Generate2::*)(std::vector<std::wstring> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Generate2::opcItemNamesfinished)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Generate2::*)(QStringList );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Generate2::itemDataListfinished)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Generate2::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_Generate2.data,
    qt_meta_data_Generate2,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Generate2::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Generate2::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Generate2.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Generate2::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void Generate2::host2finished(std::vector<std::wstring> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Generate2::opcItemNamesfinished(std::vector<std::wstring> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Generate2::itemDataListfinished(QStringList _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
