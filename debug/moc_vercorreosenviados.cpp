/****************************************************************************
** Meta object code from reading C++ file 'vercorreosenviados.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../vercorreosenviados.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'vercorreosenviados.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_VerCorreosEnviados_t {
    QByteArrayData data[4];
    char stringdata0[68];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_VerCorreosEnviados_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_VerCorreosEnviados_t qt_meta_stringdata_VerCorreosEnviados = {
    {
QT_MOC_LITERAL(0, 0, 18), // "VerCorreosEnviados"
QT_MOC_LITERAL(1, 19, 22), // "on_radioButton_clicked"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 24) // "on_radioButton_2_clicked"

    },
    "VerCorreosEnviados\0on_radioButton_clicked\0"
    "\0on_radioButton_2_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_VerCorreosEnviados[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x08 /* Private */,
       3,    0,   25,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void VerCorreosEnviados::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        VerCorreosEnviados *_t = static_cast<VerCorreosEnviados *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
   //     case 0: _t->on_radioButton_clicked(); break;
    //    case 1: _t->on_radioButton_2_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject VerCorreosEnviados::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_VerCorreosEnviados.data,
      qt_meta_data_VerCorreosEnviados,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *VerCorreosEnviados::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VerCorreosEnviados::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_VerCorreosEnviados.stringdata0))
        return static_cast<void*>(const_cast< VerCorreosEnviados*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int VerCorreosEnviados::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
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
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
