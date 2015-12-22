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
    max_composite_numbers.c \
    coefficients_of_equations.c \
    treat_to_king_of_chesss.c

HEADERS += \
    treat_to_king_of_chess_function.h \
    search_coefficients_of_equation_function.h \
    finding_max_composite_number_function.h
unix {
    target.path = /usr/lib
    INSTALLS += target
}
