/****************************************************************************
** Meta object code from reading C++ file 'example.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Zadanie2/example.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'example.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Example[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       9,    8,    8,    8, 0x08,
      33,    8,    8,    8, 0x08,
      57,    8,    8,    8, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_Example[] = {
    "Example\0\0on_action_2_triggered()\0"
    "on_action_3_triggered()\0OnTimer()\0"
};

void Example::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Example *_t = static_cast<Example *>(_o);
        switch (_id) {
        case 0: _t->on_action_2_triggered(); break;
        case 1: _t->on_action_3_triggered(); break;
        case 2: _t->OnTimer(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData Example::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Example::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_Example,
      qt_meta_data_Example, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Example::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Example::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Example::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Example))
        return static_cast<void*>(const_cast< Example*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int Example::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
