/****************************************************************************
** Meta object code from reading C++ file 'eliminacion_gaussiana.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Gui_OCanada/eliminacion_gaussiana.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'eliminacion_gaussiana.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Eliminacion_Gaussiana_t {
    QByteArrayData data[6];
    char stringdata0[97];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Eliminacion_Gaussiana_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Eliminacion_Gaussiana_t qt_meta_stringdata_Eliminacion_Gaussiana = {
    {
QT_MOC_LITERAL(0, 0, 21), // "Eliminacion_Gaussiana"
QT_MOC_LITERAL(1, 22, 15), // "on_back_clicked"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 18), // "on_p_total_clicked"
QT_MOC_LITERAL(4, 58, 20), // "on_p_parcial_clicked"
QT_MOC_LITERAL(5, 79, 17) // "on_simple_clicked"

    },
    "Eliminacion_Gaussiana\0on_back_clicked\0"
    "\0on_p_total_clicked\0on_p_parcial_clicked\0"
    "on_simple_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Eliminacion_Gaussiana[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x08 /* Private */,
       3,    0,   35,    2, 0x08 /* Private */,
       4,    0,   36,    2, 0x08 /* Private */,
       5,    0,   37,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Eliminacion_Gaussiana::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Eliminacion_Gaussiana *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_back_clicked(); break;
        case 1: _t->on_p_total_clicked(); break;
        case 2: _t->on_p_parcial_clicked(); break;
        case 3: _t->on_simple_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject Eliminacion_Gaussiana::staticMetaObject = { {
    &QFrame::staticMetaObject,
    qt_meta_stringdata_Eliminacion_Gaussiana.data,
    qt_meta_data_Eliminacion_Gaussiana,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Eliminacion_Gaussiana::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Eliminacion_Gaussiana::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Eliminacion_Gaussiana.stringdata0))
        return static_cast<void*>(this);
    return QFrame::qt_metacast(_clname);
}

int Eliminacion_Gaussiana::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
