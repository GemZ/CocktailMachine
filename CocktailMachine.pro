#-------------------------------------------------
#
# Project created by QtCreator 2017-05-12T16:48:08
#
#-------------------------------------------------

QT       += core gui
QT       += xml

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = CocktailMachine
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    barkeeper.cpp \
    container.cpp \
    ingredient.cpp \
    cocktail.cpp

HEADERS  += mainwindow.h \
    barkeeper.h \
    container.h \
    ingredient.h \
    cocktail.h

FORMS    += mainwindow.ui

OTHER_FILES += \
    barkeeper.conf
