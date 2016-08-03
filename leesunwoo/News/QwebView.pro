#-------------------------------------------------
#
# Project created by QtCreator 2016-08-02T03:03:38
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4){
QT += widgets
QT += webview

}

TARGET = QwebView
TEMPLATE = app


SOURCES += main.cpp\
        widget.cpp

HEADERS  += widget.h

FORMS    += widget.ui
