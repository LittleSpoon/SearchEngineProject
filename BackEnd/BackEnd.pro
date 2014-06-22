#-------------------------------------------------
#
# Project created by QtCreator 2014-06-02T20:53:55
#
#-------------------------------------------------

QT       += core
QT       += sql
QT       -= gui
QMAKE_CXXFLAGS += -std=c++11

TARGET = BackEnd
CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app


SOURCES += main.cpp \
    connectdatabase.cpp \
    insertrow.cpp \
    download.cpp \
    htmlparser.cpp

HEADERS += \
    dataStorageInterface.h \
    connectdatabase.h \
    Constantes.h \
    insertrow.h \
    download.h \
    htmlparser.h
