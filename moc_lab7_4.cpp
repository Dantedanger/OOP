/****************************************************************************
** Meta object code from reading C++ file 'lab7_4.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.3.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../OOP2/lab7_4.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'lab7_4.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.3.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_LAB7_4_t {
    const uint offsetsAndSize[20];
    char stringdata0[161];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_LAB7_4_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_LAB7_4_t qt_meta_stringdata_LAB7_4 = {
    {
QT_MOC_LITERAL(0, 6), // "LAB7_4"
QT_MOC_LITERAL(7, 23), // "on_lineEdit_textChanged"
QT_MOC_LITERAL(31, 0), // ""
QT_MOC_LITERAL(32, 4), // "arg1"
QT_MOC_LITERAL(37, 25), // "on_lineEdit_2_textChanged"
QT_MOC_LITERAL(63, 11), // "textBrowser"
QT_MOC_LITERAL(75, 19), // "on_checkBox_clicked"
QT_MOC_LITERAL(95, 21), // "on_checkBox_2_clicked"
QT_MOC_LITERAL(117, 21), // "on_checkBox_3_clicked"
QT_MOC_LITERAL(139, 21) // "on_pushButton_clicked"

    },
    "LAB7_4\0on_lineEdit_textChanged\0\0arg1\0"
    "on_lineEdit_2_textChanged\0textBrowser\0"
    "on_checkBox_clicked\0on_checkBox_2_clicked\0"
    "on_checkBox_3_clicked\0on_pushButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LAB7_4[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   56,    2, 0x08,    1 /* Private */,
       4,    1,   59,    2, 0x08,    3 /* Private */,
       5,    0,   62,    2, 0x08,    5 /* Private */,
       6,    0,   63,    2, 0x08,    6 /* Private */,
       7,    0,   64,    2, 0x08,    7 /* Private */,
       8,    0,   65,    2, 0x08,    8 /* Private */,
       9,    0,   66,    2, 0x08,    9 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void LAB7_4::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LAB7_4 *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_lineEdit_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->on_lineEdit_2_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->textBrowser(); break;
        case 3: _t->on_checkBox_clicked(); break;
        case 4: _t->on_checkBox_2_clicked(); break;
        case 5: _t->on_checkBox_3_clicked(); break;
        case 6: _t->on_pushButton_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject LAB7_4::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_LAB7_4.offsetsAndSize,
    qt_meta_data_LAB7_4,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_LAB7_4_t
, QtPrivate::TypeAndForceComplete<LAB7_4, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *LAB7_4::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LAB7_4::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LAB7_4.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int LAB7_4::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
