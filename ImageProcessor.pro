#-------------------------------------------------
#
# Project created by QtCreator 2016-03-18T21:22:30
#
#-------------------------------------------------

QT       -= gui

TARGET = ImageProcessor
TEMPLATE = lib

DEFINES += IMAGEPROCESSOR_LIBRARY

SOURCES += imageprocessor.cpp \
    channel.cpp \
    image.cpp \
    imagefactory.cpp \
    bmpimage.cpp

HEADERS += imageprocessor.h\
        imageprocessor_global.h \
    channel.h \
    image.h \
    imagefactory.h \
    bmpimage.h \
    defaultchannelids.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}
