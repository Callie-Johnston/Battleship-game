/****************************************************************************
** Meta object code from reading C++ file 'battlelocalwindow.h'
**
** Created: Wed May 2 14:35:19 2012
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "battlelocalwindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'battlelocalwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_battleLocalWindow[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      19,   18,   18,   18, 0x08,
      39,   18,   18,   18, 0x08,
      59,   18,   18,   18, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_battleLocalWindow[] = {
    "battleLocalWindow\0\0createRandomBoard()\0"
    "createCustomBoard()\0fire()\0"
};

const QMetaObject battleLocalWindow::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_battleLocalWindow,
      qt_meta_data_battleLocalWindow, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &battleLocalWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *battleLocalWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *battleLocalWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_battleLocalWindow))
        return static_cast<void*>(const_cast< battleLocalWindow*>(this));
    return QDialog::qt_metacast(_clname);
}

int battleLocalWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: createRandomBoard(); break;
        case 1: createCustomBoard(); break;
        case 2: fire(); break;
        default: ;
        }
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
