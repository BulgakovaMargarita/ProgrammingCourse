TEMPLATE = app
CONFIG -= app_bundle
CONFIG += console
CONFIG -= qt
CONFIG += testcase
QT += testlib
TARGET = main
QT -= gui

SOURCES += main.cpp


HEADERS += \
    max_vozmojnoe2.h \
    poisk_ugrozi2.h \
    poisk_znacheniy2.h \
    strange_function2.h

DEFINES += SRCDIR=\\\"$$PWD/\\\"

