/****************************************************************************
** Meta object code from reading C++ file 'widget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../widget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'widget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_OpcWidget_t {
    QByteArrayData data[20];
    char stringdata0[313];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OpcWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OpcWidget_t qt_meta_stringdata_OpcWidget = {
    {
QT_MOC_LITERAL(0, 0, 9), // "OpcWidget"
QT_MOC_LITERAL(1, 10, 13), // "transmithost1"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 8), // "hostName"
QT_MOC_LITERAL(4, 34, 15), // "transmitserver1"
QT_MOC_LITERAL(5, 50, 10), // "serverName"
QT_MOC_LITERAL(6, 61, 17), // "transmititemNames"
QT_MOC_LITERAL(7, 79, 25), // "std::vector<std::wstring>"
QT_MOC_LITERAL(8, 105, 9), // "itemNames"
QT_MOC_LITERAL(9, 115, 13), // "transmithost2"
QT_MOC_LITERAL(10, 129, 15), // "transmitserver2"
QT_MOC_LITERAL(11, 145, 18), // "transmititemNames2"
QT_MOC_LITERAL(12, 164, 21), // "on_connectbt1_clicked"
QT_MOC_LITERAL(13, 186, 21), // "on_connectbt2_clicked"
QT_MOC_LITERAL(14, 208, 31), // "on_servertreeView_doubleClicked"
QT_MOC_LITERAL(15, 240, 11), // "QModelIndex"
QT_MOC_LITERAL(16, 252, 5), // "index"
QT_MOC_LITERAL(17, 258, 32), // "on_opcItemlist_itemDoubleClicked"
QT_MOC_LITERAL(18, 291, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(19, 308, 4) // "item"

    },
    "OpcWidget\0transmithost1\0\0hostName\0"
    "transmitserver1\0serverName\0transmititemNames\0"
    "std::vector<std::wstring>\0itemNames\0"
    "transmithost2\0transmitserver2\0"
    "transmititemNames2\0on_connectbt1_clicked\0"
    "on_connectbt2_clicked\0"
    "on_servertreeView_doubleClicked\0"
    "QModelIndex\0index\0on_opcItemlist_itemDoubleClicked\0"
    "QListWidgetItem*\0item"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OpcWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x06 /* Public */,
       4,    1,   67,    2, 0x06 /* Public */,
       6,    1,   70,    2, 0x06 /* Public */,
       9,    1,   73,    2, 0x06 /* Public */,
      10,    1,   76,    2, 0x06 /* Public */,
      11,    1,   79,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      12,    0,   82,    2, 0x08 /* Private */,
      13,    0,   83,    2, 0x08 /* Private */,
      14,    1,   84,    2, 0x08 /* Private */,
      17,    1,   87,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, 0x80000000 | 7,    8,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 15,   16,
    QMetaType::Void, 0x80000000 | 18,   19,

       0        // eod
};

void OpcWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<OpcWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->transmithost1((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->transmitserver1((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->transmititemNames((*reinterpret_cast< std::vector<std::wstring>(*)>(_a[1]))); break;
        case 3: _t->transmithost2((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->transmitserver2((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->transmititemNames2((*reinterpret_cast< std::vector<std::wstring>(*)>(_a[1]))); break;
        case 6: _t->on_connectbt1_clicked(); break;
        case 7: _t->on_connectbt2_clicked(); break;
        case 8: _t->on_servertreeView_doubleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 9: _t->on_opcItemlist_itemDoubleClicked((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (OpcWidget::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OpcWidget::transmithost1)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (OpcWidget::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OpcWidget::transmitserver1)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (OpcWidget::*)(std::vector<std::wstring> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OpcWidget::transmititemNames)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (OpcWidget::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OpcWidget::transmithost2)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (OpcWidget::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OpcWidget::transmitserver2)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (OpcWidget::*)(std::vector<std::wstring> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OpcWidget::transmititemNames2)) {
                *result = 5;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject OpcWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_OpcWidget.data,
    qt_meta_data_OpcWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OpcWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OpcWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OpcWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int OpcWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
    return _id;
}

// SIGNAL 0
void OpcWidget::transmithost1(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void OpcWidget::transmitserver1(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void OpcWidget::transmititemNames(std::vector<std::wstring> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void OpcWidget::transmithost2(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void OpcWidget::transmitserver2(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void OpcWidget::transmititemNames2(std::vector<std::wstring> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
