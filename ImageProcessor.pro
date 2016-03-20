#-------------------------------------------------
#
# Project created by QtCreator 2016-03-18T21:22:30
#
#-------------------------------------------------

QT       -= core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = ImageProcessor
TEMPLATE = app

DEFINES += IMAGEPROCESSOR_LIBRARY

SOURCES += imageprocessor.cpp \
    channel.cpp \
    image.cpp \
    imagefactory.cpp \
    bmpimage.cpp \
    main.cpp \
    mainwindow.cpp

HEADERS += imageprocessor.h\
        imageprocessor_global.h \
    channel.h \
    image.h \
    imagefactory.h \
    bmpimage.h \
    main.h \
    mainwindow.h \
    defaultchannelids.h


FORMS    += mainwindow.ui

unix {
    target.path = /usr/lib
    INSTALLS += target
}
