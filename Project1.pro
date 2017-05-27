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
<<<<<<< HEAD \
    correo.cpp \
    oficina.cpp \
    persona.cpp \
    tipodesexo.cpp
    persona.cpp \
    correo.cpp \
    oficina.cpp
=======
    enviarcorreo.cpp \
    vercorreosenviados.cpp \
    usuarios.cpp
>>>>>>> origin/master

HEADERS  += mainwindow.h \
    agregardestinatarios.h \
    agregarcorreos.h \
<<<<<<< HEAD \
    correo.h \
    oficina.h \
    persona.h \
    tipodeencomienda.h \
    tipodesexo.h
    persona.h \
    tipodesexo.h \
    tipodeencomienda.h \
    correo.h \
    oficina.h
=======
    enviarcorreo.h \
    vercorreosenviados.h \
    usuarios.h
>>>>>>> origin/master

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
