/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.12)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../IniInterface/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.12. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[18];
    char stringdata0[502];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 28), // "on_action_openFile_triggered"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 33), // "on_action_openDirectory_trigg..."
QT_MOC_LITERAL(4, 75, 39), // "on_comboBox_addType_currentIn..."
QT_MOC_LITERAL(5, 115, 5), // "index"
QT_MOC_LITERAL(6, 121, 33), // "on_pushButton_addKeyValue_cli..."
QT_MOC_LITERAL(7, 155, 34), // "on_listWidget_fileShowcase_cl..."
QT_MOC_LITERAL(8, 190, 11), // "QModelIndex"
QT_MOC_LITERAL(9, 202, 28), // "on_action_saveFile_triggered"
QT_MOC_LITERAL(10, 231, 35), // "on_pushButton_deleteSection_c..."
QT_MOC_LITERAL(11, 267, 35), // "on_pushButton_createSection_c..."
QT_MOC_LITERAL(12, 303, 31), // "on_pushButton_deleteKey_clicked"
QT_MOC_LITERAL(13, 335, 42), // "on_comboBox_sectionName_curre..."
QT_MOC_LITERAL(14, 378, 4), // "arg1"
QT_MOC_LITERAL(15, 383, 43), // "on_comboBox_sectionName_curre..."
QT_MOC_LITERAL(16, 427, 30), // "on_actionCreate_File_triggered"
QT_MOC_LITERAL(17, 458, 43) // "on_treeWidget_keyValue_itemSe..."

    },
    "MainWindow\0on_action_openFile_triggered\0"
    "\0on_action_openDirectory_triggered\0"
    "on_comboBox_addType_currentIndexChanged\0"
    "index\0on_pushButton_addKeyValue_clicked\0"
    "on_listWidget_fileShowcase_clicked\0"
    "QModelIndex\0on_action_saveFile_triggered\0"
    "on_pushButton_deleteSection_clicked\0"
    "on_pushButton_createSection_clicked\0"
    "on_pushButton_deleteKey_clicked\0"
    "on_comboBox_sectionName_currentTextChanged\0"
    "arg1\0on_comboBox_sectionName_currentIndexChanged\0"
    "on_actionCreate_File_triggered\0"
    "on_treeWidget_keyValue_itemSelectionChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x08 /* Private */,
       3,    0,   80,    2, 0x08 /* Private */,
       4,    1,   81,    2, 0x08 /* Private */,
       6,    0,   84,    2, 0x08 /* Private */,
       7,    1,   85,    2, 0x08 /* Private */,
       9,    0,   88,    2, 0x08 /* Private */,
      10,    0,   89,    2, 0x08 /* Private */,
      11,    0,   90,    2, 0x08 /* Private */,
      12,    0,   91,    2, 0x08 /* Private */,
      13,    1,   92,    2, 0x08 /* Private */,
      15,    1,   95,    2, 0x08 /* Private */,
      16,    0,   98,    2, 0x08 /* Private */,
      17,    0,   99,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   14,
    QMetaType::Void, QMetaType::Int,    5,
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
        case 0: _t->on_action_openFile_triggered(); break;
        case 1: _t->on_action_openDirectory_triggered(); break;
        case 2: _t->on_comboBox_addType_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->on_pushButton_addKeyValue_clicked(); break;
        case 4: _t->on_listWidget_fileShowcase_clicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 5: _t->on_action_saveFile_triggered(); break;
        case 6: _t->on_pushButton_deleteSection_clicked(); break;
        case 7: _t->on_pushButton_createSection_clicked(); break;
        case 8: _t->on_pushButton_deleteKey_clicked(); break;
        case 9: _t->on_comboBox_sectionName_currentTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 10: _t->on_comboBox_sectionName_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->on_actionCreate_File_triggered(); break;
        case 12: _t->on_treeWidget_keyValue_itemSelectionChanged(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
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
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
