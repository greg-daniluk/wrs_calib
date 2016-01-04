/****************************************************************************
** Meta object code from reading C++ file 'small_wins.h'
**
** Created: Sat Nov 23 12:31:29 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "small_wins.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'small_wins.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_st1_win[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       9,    8,    8,    8, 0x08,
      25,    8,    8,    8, 0x08,
      42,    8,    8,    8, 0x08,
      58,    8,    8,    8, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_st1_win[] = {
    "st1_win\0\0get_data_long()\0get_data_short()\0"
    "get_data_both()\0lat_calculate()\0"
};

void st1_win::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        st1_win *_t = static_cast<st1_win *>(_o);
        switch (_id) {
        case 0: _t->get_data_long(); break;
        case 1: _t->get_data_short(); break;
        case 2: _t->get_data_both(); break;
        case 3: _t->lat_calculate(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData st1_win::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject st1_win::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_st1_win,
      qt_meta_data_st1_win, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &st1_win::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *st1_win::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *st1_win::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_st1_win))
        return static_cast<void*>(const_cast< st1_win*>(this));
    return QWidget::qt_metacast(_clname);
}

int st1_win::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
