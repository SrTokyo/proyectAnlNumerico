/****************************************************************************
** Meta object code from reading C++ file 'menu_doolittle.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Gui_OCanada/menu_doolittle.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'menu_doolittle.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Menu_Doolittle_t {
    QByteArrayData data[8];
    char stringdata0[120];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Menu_Doolittle_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Menu_Doolittle_t qt_meta_stringdata_Menu_Doolittle = {
    {
QT_MOC_LITERAL(0, 0, 14), // "Menu_Doolittle"
QT_MOC_LITERAL(1, 15, 17), // "on_simple_clicked"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 21), // "on_pv_Parcial_clicked"
QT_MOC_LITERAL(4, 56, 19), // "on_pv_Total_clicked"
QT_MOC_LITERAL(5, 76, 15), // "on_back_clicked"
QT_MOC_LITERAL(6, 92, 22), // "on_matriz_N_textEdited"
QT_MOC_LITERAL(7, 115, 4) // "arg1"

    },
    "Menu_Doolittle\0on_simple_clicked\0\0"
    "on_pv_Parcial_clicked\0on_pv_Total_clicked\0"
    "on_back_clicked\0on_matriz_N_textEdited\0"
    "arg1"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Menu_Doolittle[] = {

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
       6,    1,   43,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    7,

       0        // eod
};

void Menu_Doolittle::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Menu_Doolittle *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_simple_clicked(); break;
        case 1: _t->on_pv_Parcial_clicked(); break;
        case 2: _t->on_pv_Total_clicked(); break;
        case 3: _t->on_back_clicked(); break;
        case 4: _t->on_matriz_N_textEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Menu_Doolittle::staticMetaObject = { {
    &QFrame::staticMetaObject,
    qt_meta_stringdata_Menu_Doolittle.data,
    qt_meta_data_Menu_Doolittle,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Menu_Doolittle::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Menu_Doolittle::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Menu_Doolittle.stringdata0))
        return static_cast<void*>(this);
    return QFrame::qt_metacast(_clname);
}

int Menu_Doolittle::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
