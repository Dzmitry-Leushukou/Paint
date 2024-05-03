/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Paint/mainwindow.h"
#include <QtGui/qtextcursor.h>
#include <QtGui/qscreen.h>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSMainWindowENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSMainWindowENDCLASS = QtMocHelpers::stringData(
    "MainWindow",
    "RotateLeft",
    "",
    "RotateRight",
    "SizeUp",
    "SizeDown",
    "on_TriangleButton_toggled",
    "checked",
    "on_CircleButton_toggled",
    "on_RhombusButton_toggled",
    "on_RectangleButton_toggled",
    "on_HexagonButton_toggled",
    "on_PolylineButton_toggled",
    "on_SqauerButton_toggled",
    "on_Star5Button_toggled",
    "on_Star6Button_toggled",
    "on_Star7Button_toggled",
    "on_Star8Button_toggled",
    "on_RightRotateButton_released",
    "on_RightRotateButton_pressed",
    "on_LeftRotateButton_released",
    "on_LeftRotateButton_pressed",
    "on_PlusButton_pressed",
    "on_PlusButton_released",
    "on_MinusButton_pressed",
    "on_MinusButton_released",
    "on_ClearButton_clicked",
    "on_checkBox_stateChanged",
    "arg1"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSMainWindowENDCLASS_t {
    uint offsetsAndSizes[58];
    char stringdata0[11];
    char stringdata1[11];
    char stringdata2[1];
    char stringdata3[12];
    char stringdata4[7];
    char stringdata5[9];
    char stringdata6[26];
    char stringdata7[8];
    char stringdata8[24];
    char stringdata9[25];
    char stringdata10[27];
    char stringdata11[25];
    char stringdata12[26];
    char stringdata13[24];
    char stringdata14[23];
    char stringdata15[23];
    char stringdata16[23];
    char stringdata17[23];
    char stringdata18[30];
    char stringdata19[29];
    char stringdata20[29];
    char stringdata21[28];
    char stringdata22[22];
    char stringdata23[23];
    char stringdata24[23];
    char stringdata25[24];
    char stringdata26[23];
    char stringdata27[25];
    char stringdata28[5];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSMainWindowENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSMainWindowENDCLASS_t qt_meta_stringdata_CLASSMainWindowENDCLASS = {
    {
        QT_MOC_LITERAL(0, 10),  // "MainWindow"
        QT_MOC_LITERAL(11, 10),  // "RotateLeft"
        QT_MOC_LITERAL(22, 0),  // ""
        QT_MOC_LITERAL(23, 11),  // "RotateRight"
        QT_MOC_LITERAL(35, 6),  // "SizeUp"
        QT_MOC_LITERAL(42, 8),  // "SizeDown"
        QT_MOC_LITERAL(51, 25),  // "on_TriangleButton_toggled"
        QT_MOC_LITERAL(77, 7),  // "checked"
        QT_MOC_LITERAL(85, 23),  // "on_CircleButton_toggled"
        QT_MOC_LITERAL(109, 24),  // "on_RhombusButton_toggled"
        QT_MOC_LITERAL(134, 26),  // "on_RectangleButton_toggled"
        QT_MOC_LITERAL(161, 24),  // "on_HexagonButton_toggled"
        QT_MOC_LITERAL(186, 25),  // "on_PolylineButton_toggled"
        QT_MOC_LITERAL(212, 23),  // "on_SqauerButton_toggled"
        QT_MOC_LITERAL(236, 22),  // "on_Star5Button_toggled"
        QT_MOC_LITERAL(259, 22),  // "on_Star6Button_toggled"
        QT_MOC_LITERAL(282, 22),  // "on_Star7Button_toggled"
        QT_MOC_LITERAL(305, 22),  // "on_Star8Button_toggled"
        QT_MOC_LITERAL(328, 29),  // "on_RightRotateButton_released"
        QT_MOC_LITERAL(358, 28),  // "on_RightRotateButton_pressed"
        QT_MOC_LITERAL(387, 28),  // "on_LeftRotateButton_released"
        QT_MOC_LITERAL(416, 27),  // "on_LeftRotateButton_pressed"
        QT_MOC_LITERAL(444, 21),  // "on_PlusButton_pressed"
        QT_MOC_LITERAL(466, 22),  // "on_PlusButton_released"
        QT_MOC_LITERAL(489, 22),  // "on_MinusButton_pressed"
        QT_MOC_LITERAL(512, 23),  // "on_MinusButton_released"
        QT_MOC_LITERAL(536, 22),  // "on_ClearButton_clicked"
        QT_MOC_LITERAL(559, 24),  // "on_checkBox_stateChanged"
        QT_MOC_LITERAL(584, 4)   // "arg1"
    },
    "MainWindow",
    "RotateLeft",
    "",
    "RotateRight",
    "SizeUp",
    "SizeDown",
    "on_TriangleButton_toggled",
    "checked",
    "on_CircleButton_toggled",
    "on_RhombusButton_toggled",
    "on_RectangleButton_toggled",
    "on_HexagonButton_toggled",
    "on_PolylineButton_toggled",
    "on_SqauerButton_toggled",
    "on_Star5Button_toggled",
    "on_Star6Button_toggled",
    "on_Star7Button_toggled",
    "on_Star8Button_toggled",
    "on_RightRotateButton_released",
    "on_RightRotateButton_pressed",
    "on_LeftRotateButton_released",
    "on_LeftRotateButton_pressed",
    "on_PlusButton_pressed",
    "on_PlusButton_released",
    "on_MinusButton_pressed",
    "on_MinusButton_released",
    "on_ClearButton_clicked",
    "on_checkBox_stateChanged",
    "arg1"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSMainWindowENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      25,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  164,    2, 0x08,    1 /* Private */,
       3,    0,  165,    2, 0x08,    2 /* Private */,
       4,    0,  166,    2, 0x08,    3 /* Private */,
       5,    0,  167,    2, 0x08,    4 /* Private */,
       6,    1,  168,    2, 0x08,    5 /* Private */,
       8,    1,  171,    2, 0x08,    7 /* Private */,
       9,    1,  174,    2, 0x08,    9 /* Private */,
      10,    1,  177,    2, 0x08,   11 /* Private */,
      11,    1,  180,    2, 0x08,   13 /* Private */,
      12,    1,  183,    2, 0x08,   15 /* Private */,
      13,    1,  186,    2, 0x08,   17 /* Private */,
      14,    1,  189,    2, 0x08,   19 /* Private */,
      15,    1,  192,    2, 0x08,   21 /* Private */,
      16,    1,  195,    2, 0x08,   23 /* Private */,
      17,    1,  198,    2, 0x08,   25 /* Private */,
      18,    0,  201,    2, 0x08,   27 /* Private */,
      19,    0,  202,    2, 0x08,   28 /* Private */,
      20,    0,  203,    2, 0x08,   29 /* Private */,
      21,    0,  204,    2, 0x08,   30 /* Private */,
      22,    0,  205,    2, 0x08,   31 /* Private */,
      23,    0,  206,    2, 0x08,   32 /* Private */,
      24,    0,  207,    2, 0x08,   33 /* Private */,
      25,    0,  208,    2, 0x08,   34 /* Private */,
      26,    0,  209,    2, 0x08,   35 /* Private */,
      27,    1,  210,    2, 0x08,   36 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   28,

       0        // eod
};

Q_CONSTINIT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CLASSMainWindowENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSMainWindowENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSMainWindowENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MainWindow, std::true_type>,
        // method 'RotateLeft'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'RotateRight'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'SizeUp'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'SizeDown'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_TriangleButton_toggled'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_CircleButton_toggled'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_RhombusButton_toggled'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_RectangleButton_toggled'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_HexagonButton_toggled'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_PolylineButton_toggled'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_SqauerButton_toggled'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_Star5Button_toggled'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_Star6Button_toggled'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_Star7Button_toggled'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_Star8Button_toggled'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_RightRotateButton_released'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_RightRotateButton_pressed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_LeftRotateButton_released'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_LeftRotateButton_pressed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_PlusButton_pressed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_PlusButton_released'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_MinusButton_pressed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_MinusButton_released'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_ClearButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_checkBox_stateChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>
    >,
    nullptr
} };

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->RotateLeft(); break;
        case 1: _t->RotateRight(); break;
        case 2: _t->SizeUp(); break;
        case 3: _t->SizeDown(); break;
        case 4: _t->on_TriangleButton_toggled((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 5: _t->on_CircleButton_toggled((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 6: _t->on_RhombusButton_toggled((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 7: _t->on_RectangleButton_toggled((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 8: _t->on_HexagonButton_toggled((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 9: _t->on_PolylineButton_toggled((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 10: _t->on_SqauerButton_toggled((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 11: _t->on_Star5Button_toggled((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 12: _t->on_Star6Button_toggled((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 13: _t->on_Star7Button_toggled((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 14: _t->on_Star8Button_toggled((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 15: _t->on_RightRotateButton_released(); break;
        case 16: _t->on_RightRotateButton_pressed(); break;
        case 17: _t->on_LeftRotateButton_released(); break;
        case 18: _t->on_LeftRotateButton_pressed(); break;
        case 19: _t->on_PlusButton_pressed(); break;
        case 20: _t->on_PlusButton_released(); break;
        case 21: _t->on_MinusButton_pressed(); break;
        case 22: _t->on_MinusButton_released(); break;
        case 23: _t->on_ClearButton_clicked(); break;
        case 24: _t->on_checkBox_stateChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSMainWindowENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 25)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 25;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 25)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 25;
    }
    return _id;
}
QT_WARNING_POP
