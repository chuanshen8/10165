/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[19];
    char stringdata0[324];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 8), // "initForm"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 11), // "buttonClick"
QT_MOC_LITERAL(4, 33, 12), // "initLeftMain"
QT_MOC_LITERAL(5, 46, 14), // "initLeftConfig"
QT_MOC_LITERAL(6, 61, 13), // "leftMainClick"
QT_MOC_LITERAL(7, 75, 15), // "leftConfigClick"
QT_MOC_LITERAL(8, 91, 22), // "on_btnMenu_Min_clicked"
QT_MOC_LITERAL(9, 114, 22), // "on_btnMenu_Max_clicked"
QT_MOC_LITERAL(10, 137, 24), // "on_btnMenu_Close_clicked"
QT_MOC_LITERAL(11, 162, 6), // "led_on"
QT_MOC_LITERAL(12, 169, 7), // "led_off"
QT_MOC_LITERAL(13, 177, 8), // "datashow"
QT_MOC_LITERAL(14, 186, 30), // "on_openAlarmButton_env_clicked"
QT_MOC_LITERAL(15, 217, 31), // "on_closeAlarmButton_env_clicked"
QT_MOC_LITERAL(16, 249, 29), // "on_openAlarmButton_HW_clicked"
QT_MOC_LITERAL(17, 279, 30), // "on_closeAlarmButton_HW_clicked"
QT_MOC_LITERAL(18, 310, 13) // "updateNetwork"

    },
    "MainWindow\0initForm\0\0buttonClick\0"
    "initLeftMain\0initLeftConfig\0leftMainClick\0"
    "leftConfigClick\0on_btnMenu_Min_clicked\0"
    "on_btnMenu_Max_clicked\0on_btnMenu_Close_clicked\0"
    "led_on\0led_off\0datashow\0"
    "on_openAlarmButton_env_clicked\0"
    "on_closeAlarmButton_env_clicked\0"
    "on_openAlarmButton_HW_clicked\0"
    "on_closeAlarmButton_HW_clicked\0"
    "updateNetwork"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   99,    2, 0x08 /* Private */,
       3,    0,  100,    2, 0x08 /* Private */,
       4,    0,  101,    2, 0x08 /* Private */,
       5,    0,  102,    2, 0x08 /* Private */,
       6,    0,  103,    2, 0x08 /* Private */,
       7,    0,  104,    2, 0x08 /* Private */,
       8,    0,  105,    2, 0x08 /* Private */,
       9,    0,  106,    2, 0x08 /* Private */,
      10,    0,  107,    2, 0x08 /* Private */,
      11,    0,  108,    2, 0x08 /* Private */,
      12,    0,  109,    2, 0x08 /* Private */,
      13,    0,  110,    2, 0x08 /* Private */,
      14,    0,  111,    2, 0x08 /* Private */,
      15,    0,  112,    2, 0x08 /* Private */,
      16,    0,  113,    2, 0x08 /* Private */,
      17,    0,  114,    2, 0x08 /* Private */,
      18,    0,  115,    2, 0x08 /* Private */,

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

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->initForm(); break;
        case 1: _t->buttonClick(); break;
        case 2: _t->initLeftMain(); break;
        case 3: _t->initLeftConfig(); break;
        case 4: _t->leftMainClick(); break;
        case 5: _t->leftConfigClick(); break;
        case 6: _t->on_btnMenu_Min_clicked(); break;
        case 7: _t->on_btnMenu_Max_clicked(); break;
        case 8: _t->on_btnMenu_Close_clicked(); break;
        case 9: _t->led_on(); break;
        case 10: _t->led_off(); break;
        case 11: _t->datashow(); break;
        case 12: _t->on_openAlarmButton_env_clicked(); break;
        case 13: _t->on_closeAlarmButton_env_clicked(); break;
        case 14: _t->on_openAlarmButton_HW_clicked(); break;
        case 15: _t->on_closeAlarmButton_HW_clicked(); break;
        case 16: _t->updateNetwork(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.data,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 17;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
