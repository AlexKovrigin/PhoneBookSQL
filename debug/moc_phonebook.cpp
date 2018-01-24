/****************************************************************************
** Meta object code from reading C++ file 'phonebook.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../phonebook.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'phonebook.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_PhoneBook_t {
    QByteArrayData data[12];
    char stringdata0[224];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PhoneBook_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PhoneBook_t qt_meta_stringdata_PhoneBook = {
    {
QT_MOC_LITERAL(0, 0, 9), // "PhoneBook"
QT_MOC_LITERAL(1, 10, 17), // "on_btnAdd_clicked"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 17), // "on_btnDel_clicked"
QT_MOC_LITERAL(4, 47, 24), // "on_txtSearch_textChanged"
QT_MOC_LITERAL(5, 72, 25), // "on_actionImport_triggered"
QT_MOC_LITERAL(6, 98, 25), // "on_actionExport_triggered"
QT_MOC_LITERAL(7, 124, 27), // "on_actionAbout_us_triggered"
QT_MOC_LITERAL(8, 152, 20), // "on_btnDelAll_clicked"
QT_MOC_LITERAL(9, 173, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(10, 195, 22), // "on_tablePhones_clicked"
QT_MOC_LITERAL(11, 218, 5) // "index"

    },
    "PhoneBook\0on_btnAdd_clicked\0\0"
    "on_btnDel_clicked\0on_txtSearch_textChanged\0"
    "on_actionImport_triggered\0"
    "on_actionExport_triggered\0"
    "on_actionAbout_us_triggered\0"
    "on_btnDelAll_clicked\0on_pushButton_clicked\0"
    "on_tablePhones_clicked\0index"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PhoneBook[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x08 /* Private */,
       3,    0,   60,    2, 0x08 /* Private */,
       4,    0,   61,    2, 0x08 /* Private */,
       5,    0,   62,    2, 0x08 /* Private */,
       6,    0,   63,    2, 0x08 /* Private */,
       7,    0,   64,    2, 0x08 /* Private */,
       8,    0,   65,    2, 0x08 /* Private */,
       9,    0,   66,    2, 0x08 /* Private */,
      10,    1,   67,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex,   11,

       0        // eod
};

void PhoneBook::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PhoneBook *_t = static_cast<PhoneBook *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_btnAdd_clicked(); break;
        case 1: _t->on_btnDel_clicked(); break;
        case 2: _t->on_txtSearch_textChanged(); break;
        case 3: _t->on_actionImport_triggered(); break;
        case 4: _t->on_actionExport_triggered(); break;
        case 5: _t->on_actionAbout_us_triggered(); break;
        case 6: _t->on_btnDelAll_clicked(); break;
        case 7: _t->on_pushButton_clicked(); break;
        case 8: _t->on_tablePhones_clicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject PhoneBook::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_PhoneBook.data,
      qt_meta_data_PhoneBook,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PhoneBook::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PhoneBook::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PhoneBook.stringdata0))
        return static_cast<void*>(const_cast< PhoneBook*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int PhoneBook::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
