TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
    main.c \
    main_menu.c \
    max_vozmojnoe.c \
    poisk_ugrozi.c \
    poisk_znacheniy.c \
    strange_function.c \
    zamena_elementov_mass.c

HEADERS += \
    main_menu.h \
    max_vozmojnoe.h \
    poisk_ugrozi.h \
    poisk_znacheniy.h \
    strange_function.h \
    zamena_elementov_mass.h


unix:!macx: LIBS += -L$$OUT_PWD/../lib/ -llib

INCLUDEPATH += $$PWD/../lib
DEPENDPATH += $$PWD/../lib

unix:!macx: PRE_TARGETDEPS += $$OUT_PWD/../lib/liblib.a
