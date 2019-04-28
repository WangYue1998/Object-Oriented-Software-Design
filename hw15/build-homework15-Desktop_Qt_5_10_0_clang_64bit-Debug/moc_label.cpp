/****************************************************************************
** Meta object code from reading C++ file 'label.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../homework15/label.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'label.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_label_t {
    QByteArrayData data[8];
    char stringdata0[117];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_label_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_label_t qt_meta_stringdata_label = {
    {
QT_MOC_LITERAL(0, 0, 5), // "label"
QT_MOC_LITERAL(1, 6, 16), // "modifyFontBySize"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 7), // "setFont"
QT_MOC_LITERAL(4, 32, 21), // "modifyFontByCheckboxA"
QT_MOC_LITERAL(5, 54, 21), // "modifyFontByCheckboxT"
QT_MOC_LITERAL(6, 76, 21), // "modifyFontByCheckboxC"
QT_MOC_LITERAL(7, 98, 18) // "modifyFontByslider"

    },
    "label\0modifyFontBySize\0\0setFont\0"
    "modifyFontByCheckboxA\0modifyFontByCheckboxT\0"
    "modifyFontByCheckboxC\0modifyFontByslider"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_label[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x0a /* Public */,
       3,    1,   47,    2, 0x0a /* Public */,
       4,    1,   50,    2, 0x0a /* Public */,
       5,    1,   53,    2, 0x0a /* Public */,
       6,    1,   56,    2, 0x0a /* Public */,
       7,    1,   59,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QFont,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Int,    2,

       0        // eod
};

void label::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        label *_t = static_cast<label *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->modifyFontBySize((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->setFont((*reinterpret_cast< QFont(*)>(_a[1]))); break;
        case 2: _t->modifyFontByCheckboxA((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->modifyFontByCheckboxT((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->modifyFontByCheckboxC((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->modifyFontByslider((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject label::staticMetaObject = {
    { &QLabel::staticMetaObject, qt_meta_stringdata_label.data,
      qt_meta_data_label,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *label::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *label::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_label.stringdata0))
        return static_cast<void*>(this);
    return QLabel::qt_metacast(_clname);
}

int label::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLabel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
