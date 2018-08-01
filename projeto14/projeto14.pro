QT += core
QT -= gui

CONFIG += c++11

TARGET = projeto14
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    myobject.cpp \
    myobject2.cpp

HEADERS += \
    myobject.h \
    myobject2.h
