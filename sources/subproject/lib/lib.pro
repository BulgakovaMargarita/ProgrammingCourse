#-------------------------------------------------
#
# Project created by QtCreator 2015-11-19T16:08:33
#
#-------------------------------------------------

QT       -= core gui

TARGET = lib
TEMPLATE = lib
CONFIG += staticlib

SOURCES += \
    max_vozmojnoe2.c \
    poisk_ugrozi2.c \
    poisk_znacheniy2.c \
    strange_function2.c

HEADERS += \
    max_vozmojnoe2.h \
    poisk_ugrozi2.h \
    poisk_znacheniy2.h \
    strange_function2.h
unix {
    target.path = /usr/lib
    INSTALLS += target
}
