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
    test.c \
    Search_sum_or_difference_function.c \
    finding_max_composite_number_function.c \
    treat_to_king_of_chess_function.c \
    search_coefficients_of_equation_function.c

HEADERS += \
    test.h \
    Search_sum_or_difference_function.h \
    finding_max_composite_number_function.h \
    treat_to_king_of_chess_function.h \
    search_coefficients_of_equation_function.h
unix {
    target.path = /usr/lib
    INSTALLS += target
}
