/****************************************************************************
** Meta object code from reading C++ file 'SelectStartingDate.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "SelectStartingDate.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SelectStartingDate.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SelectStartingDate[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      20,   19,   19,   19, 0x08,
      30,   19,   19,   19, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_SelectStartingDate[] = {
    "SelectStartingDate\0\0setDate()\0"
    "setBalance()\0"
};

void SelectStartingDate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SelectStartingDate *_t = static_cast<SelectStartingDate *>(_o);
        switch (_id) {
        case 0: _t->setDate(); break;
        case 1: _t->setBalance(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData SelectStartingDate::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SelectStartingDate::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_SelectStartingDate,
      qt_meta_data_SelectStartingDate, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SelectStartingDate::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SelectStartingDate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SelectStartingDate::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SelectStartingDate))
        return static_cast<void*>(const_cast< SelectStartingDate*>(this));
    return QDialog::qt_metacast(_clname);
}

int SelectStartingDate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
