TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
    main.c \
    main_menu.c \
    treat_to_king_of_chess.c \
    replacement_of_elements_in_array.c \
    sentence_to_lower.c \
    max_composite_number.c \
    coefficients_of_equation.c

HEADERS += \
    main_menu.h \
    treat_to_king_of_chess.h \
    replacement_of_elements_in_array.h \
    sentence_to_lower.h \
    max_composite_number.h \
    coefficients_of_equation.h


unix:!macx: LIBS += -L$$OUT_PWD/../lib/ -llib

INCLUDEPATH += $$PWD/../lib
DEPENDPATH += $$PWD/../lib

unix:!macx: PRE_TARGETDEPS += $$OUT_PWD/../lib/liblib.a
