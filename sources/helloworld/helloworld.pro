TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.c \
    strange_function.c \
    test.c \
    poisk_znacheniy.c \
    poisk_ugrozi.c \
    max_vozmojnoe.c \
    zamena_elementov_mass.c \
    main_menu.c \
    zamena_elementov_str.c

HEADERS += \
    strange_function.h \
    test.h \
    poisk_znacheniy.h \
    poisk_ugrozi.h \
    max_vozmojnoe.h \
    zamena_elemetov_mass.h \
    main_menu.h \
    sentence_to_lower.h


