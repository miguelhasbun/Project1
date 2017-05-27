#-------------------------------------------------
#
# Project created by QtCreator 2017-05-09T18:59:46
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Project1
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    agregardestinatarios.cpp \
    agregarcorreos.cpp \
    enviarcorreo.cpp \
    vercorreosenviados.cpp \
    usuarios.cpp

HEADERS  += mainwindow.h \
    agregardestinatarios.h \
    agregarcorreos.h \
    enviarcorreo.h \
    vercorreosenviados.h \
    usuarios.h

FORMS    += mainwindow.ui \
    agregardestinatarios.ui \
    agregarcorreos.ui \
    enviarcorreo.ui \
    vercorreosenviados.ui \
    usuarios.ui

RESOURCES += \
    image1.qrc \
    imagen2.qrc \
    image3.qrc \
    imagen4.qrc \
    rsragregar.qrc \
    rsragregarhombre.qrc \
    formprincipal.qrc \
    formpersonas.qrc \
    vercorreosresources.qrc \
    gifemail.qrc \
    emailsinanimacion.qrc \
    userplus.qrc \
    srsusergroup.qrc
