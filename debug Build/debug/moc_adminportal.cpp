/****************************************************************************
** Meta object code from reading C++ file 'adminportal.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.1.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Source/adminportal.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'adminportal.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.1.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_adminportal_t {
    const uint offsetsAndSize[22];
    char stringdata0[233];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_adminportal_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_adminportal_t qt_meta_stringdata_adminportal = {
    {
QT_MOC_LITERAL(0, 11), // "adminportal"
QT_MOC_LITERAL(12, 27), // "on_actionBookings_triggered"
QT_MOC_LITERAL(40, 0), // ""
QT_MOC_LITERAL(41, 28), // "on_actionEmployees_triggered"
QT_MOC_LITERAL(70, 27), // "on_actionAirports_triggered"
QT_MOC_LITERAL(98, 17), // "on_addRow_clicked"
QT_MOC_LITERAL(116, 20), // "on_deleteRow_clicked"
QT_MOC_LITERAL(137, 23), // "on_actionEdit_triggered"
QT_MOC_LITERAL(161, 26), // "on_actionRefresh_triggered"
QT_MOC_LITERAL(188, 25), // "on_actionSearcj_triggered"
QT_MOC_LITERAL(214, 18) // "on_doneBtn_clicked"

    },
    "adminportal\0on_actionBookings_triggered\0"
    "\0on_actionEmployees_triggered\0"
    "on_actionAirports_triggered\0"
    "on_addRow_clicked\0on_deleteRow_clicked\0"
    "on_actionEdit_triggered\0"
    "on_actionRefresh_triggered\0"
    "on_actionSearcj_triggered\0on_doneBtn_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_adminportal[] = {

 // content:
       9,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   68,    2, 0x08,    0 /* Private */,
       3,    0,   69,    2, 0x08,    1 /* Private */,
       4,    0,   70,    2, 0x08,    2 /* Private */,
       5,    0,   71,    2, 0x08,    3 /* Private */,
       6,    0,   72,    2, 0x08,    4 /* Private */,
       7,    0,   73,    2, 0x08,    5 /* Private */,
       8,    0,   74,    2, 0x08,    6 /* Private */,
       9,    0,   75,    2, 0x08,    7 /* Private */,
      10,    0,   76,    2, 0x08,    8 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void adminportal::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<adminportal *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_actionBookings_triggered(); break;
        case 1: _t->on_actionEmployees_triggered(); break;
        case 2: _t->on_actionAirports_triggered(); break;
        case 3: _t->on_addRow_clicked(); break;
        case 4: _t->on_deleteRow_clicked(); break;
        case 5: _t->on_actionEdit_triggered(); break;
        case 6: _t->on_actionRefresh_triggered(); break;
        case 7: _t->on_actionSearcj_triggered(); break;
        case 8: _t->on_doneBtn_clicked(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject adminportal::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_adminportal.offsetsAndSize,
    qt_meta_data_adminportal,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_adminportal_t

, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *adminportal::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *adminportal::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_adminportal.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int adminportal::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
