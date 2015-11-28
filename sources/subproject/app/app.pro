TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
    main.c \
    main_menu.c \
    Search_sum_or_difference.c \
    finding_max_composite_number.c \
    treat_to_king_of_chess.c \
    search_coefficients_of_equation.c \
    replacement_of_elements_in_array.c \
    sentence_to_lower.c

HEADERS += \
    main_menu.h \
    Search_sum_or_difference.h \
    finding_max_composite_number.h \
    search_coefficients_of_equation.h \
    treat_to_king_of_chess.h \
    replacement_of_elements_in_array.h \
    sentence_to_lower.h


unix:!macx: LIBS += -L$$OUT_PWD/../lib/ -llib

INCLUDEPATH += $$PWD/../lib
DEPENDPATH += $$PWD/../lib

unix:!macx: PRE_TARGETDEPS += $$OUT_PWD/../lib/liblib.a
