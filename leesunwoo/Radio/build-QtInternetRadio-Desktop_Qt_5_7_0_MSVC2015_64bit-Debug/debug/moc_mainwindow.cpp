/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../QtInternetRadio-master/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[14];
    char stringdata0[335];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 21), // "on_PlayButton_clicked"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 21), // "on_StopButton_clicked"
QT_MOC_LITERAL(4, 56, 15), // "presetTriggered"
QT_MOC_LITERAL(5, 72, 44), // "on_actionSelect_stations_for_..."
QT_MOC_LITERAL(6, 117, 7), // "checked"
QT_MOC_LITERAL(7, 125, 38), // "on_actionShow_playlist_loggin..."
QT_MOC_LITERAL(8, 164, 28), // "on_volumeSlider_valueChanged"
QT_MOC_LITERAL(9, 193, 23), // "on_MuteCheckBox_toggled"
QT_MOC_LITERAL(10, 217, 17), // "updateInformation"
QT_MOC_LITERAL(11, 235, 27), // "on_actionOpen_URL_triggered"
QT_MOC_LITERAL(12, 263, 18), // "playListDownloaded"
QT_MOC_LITERAL(13, 282, 52) // "on_actionAdd_current_station_..."

    },
    "MainWindow\0on_PlayButton_clicked\0\0"
    "on_StopButton_clicked\0presetTriggered\0"
    "on_actionSelect_stations_for_logging_toggled\0"
    "checked\0on_actionShow_playlist_logging_toggled\0"
    "on_volumeSlider_valueChanged\0"
    "on_MuteCheckBox_toggled\0updateInformation\0"
    "on_actionOpen_URL_triggered\0"
    "playListDownloaded\0"
    "on_actionAdd_current_station_to_favourites_triggered"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x08 /* Private */,
       3,    0,   70,    2, 0x08 /* Private */,
       4,    0,   71,    2, 0x08 /* Private */,
       5,    1,   72,    2, 0x08 /* Private */,
       7,    1,   75,    2, 0x08 /* Private */,
       8,    0,   78,    2, 0x08 /* Private */,
       9,    1,   79,    2, 0x08 /* Private */,
      10,    0,   82,    2, 0x08 /* Private */,
      11,    0,   83,    2, 0x08 /* Private */,
      12,    0,   84,    2, 0x08 /* Private */,
      13,    0,   85,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_PlayButton_clicked(); break;
        case 1: _t->on_StopButton_clicked(); break;
        case 2: _t->presetTriggered(); break;
        case 3: _t->on_actionSelect_stations_for_logging_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->on_actionShow_playlist_logging_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->on_volumeSlider_valueChanged(); break;
        case 6: _t->on_MuteCheckBox_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->updateInformation(); break;
        case 8: _t->on_actionOpen_URL_triggered(); break;
        case 9: _t->playListDownloaded(); break;
        case 10: _t->on_actionAdd_current_station_to_favourites_triggered(); break;
        default: ;
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
