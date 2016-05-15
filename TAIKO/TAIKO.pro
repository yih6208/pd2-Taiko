#-------------------------------------------------
#
# Project created by QtCreator 2016-05-12T15:59:37
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = TAIKO
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    game.cpp \
    report.cpp

HEADERS  += mainwindow.h \
    game.h \
    report.h

FORMS    += mainwindow.ui \
    game.ui \
    report.ui

RESOURCES += \
    Picture/picture.qrc
