/****************************************************************************
** Meta object code from reading C++ file 'metodos_abiertos.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Gui_OCanada/metodos_abiertos.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'metodos_abiertos.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Metodos_Abiertos_t {
    QByteArrayData data[7];
    char stringdata0[116];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Metodos_Abiertos_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Metodos_Abiertos_t qt_meta_stringdata_Metodos_Abiertos = {
    {
QT_MOC_LITERAL(0, 0, 16), // "Metodos_Abiertos"
QT_MOC_LITERAL(1, 17, 22), // "on_mult_Raizes_clicked"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 17), // "on_newton_clicked"
QT_MOC_LITERAL(4, 59, 21), // "on_punto_Fijo_clicked"
QT_MOC_LITERAL(5, 81, 18), // "on_secante_clicked"
QT_MOC_LITERAL(6, 100, 15) // "on_back_clicked"

    },
    "Metodos_Abiertos\0on_mult_Raizes_clicked\0"
    "\0on_newton_clicked\0on_punto_Fijo_clicked\0"
    "on_secante_clicked\0on_back_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Metodos_Abiertos[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x08 /* Private */,
       3,    0,   40,    2, 0x08 /* Private */,
       4,    0,   41,    2, 0x08 /* Private */,
       5,    0,   42,    2, 0x08 /* Private */,
       6,    0,   43,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Metodos_Abiertos::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Metodos_Abiertos *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_mult_Raizes_clicked(); break;
        case 1: _t->on_newton_clicked(); break;
        case 2: _t->on_punto_Fijo_clicked(); break;
        case 3: _t->on_secante_clicked(); break;
        case 4: _t->on_back_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject Metodos_Abiertos::staticMetaObject = { {
    &QFrame::staticMetaObject,
    qt_meta_stringdata_Metodos_Abiertos.data,
    qt_meta_data_Metodos_Abiertos,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Metodos_Abiertos::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Metodos_Abiertos::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Metodos_Abiertos.stringdata0))
        return static_cast<void*>(this);
    return QFrame::qt_metacast(_clname);
}

int Metodos_Abiertos::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
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
