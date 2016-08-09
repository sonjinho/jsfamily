#-------------------------------------------------
#
# Project created by QtCreator 2012-01-16T17:27:13
#
#-------------------------------------------------

QT       += core gui webkit network
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets webkitwidgets

INCLUDEPATH += qjson/include

linux* {
LIBS += /home/inhwan/Documents/School/lab/qt-google-calendar/qjson/build/lib/libqjson-qt5.s
}

win32-g++ {
    LIBS += ../qjson/build/lib/qjson0.dll
}

win32-msvc* {
    LIBS += ../qjson/build/lib/qjson0.lib
}

macx* {
LIBS += -F../qjson/build/lib -framework qjson
}


TARGET = google_api_calendar_clent
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    oauth2.cpp \
    logindialog.cpp \
    form.cpp \
    calendar_data_manager.cpp \
    new_event_dialog.cpp \
    edit_calendar_dialog.cpp

HEADERS  += mainwindow.h \
    oauth2.h \
    logindialog.h \
    form.h \
    calendar_data_manager.h \
    new_event_dialog.h \
    edit_calendar_dialog.h

FORMS    += mainwindow.ui \
    logindialog.ui \
    form.ui \
    new_event_dialog.ui \
    edit_calendar_dialog.ui














