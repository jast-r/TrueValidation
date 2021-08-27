QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    cameraadapter.cpp \
    camerareader.cpp \
    code.cpp \
    icodesource.cpp \
    main.cpp \
    mainwindow.cpp \
    markingoperation.cpp \
    packcode.cpp \
    palletecode.cpp \
    scannerreader.cpp \
    unitcode.cpp \
    validation.cpp

HEADERS += \
    cameraadapter.h \
    camerareader.h \
    code.h \
    icodesource.h \
    mainwindow.h \
    markingoperation.h \
    packcode.h \
    palletecode.h \
    scannerreader.h \
    unitcode.h \
    validation.h

FORMS += \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
