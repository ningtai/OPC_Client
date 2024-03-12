QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0
DEFINES += Q_COMPILER_UNIFORM_INIT

SOURCES += \
    OPCInclude/OPCItemData.cpp \
    OPCInclude/Transaction.cpp \
    OPCInclude/opcda_i.c \
    cmycallback.cpp \
    main.cpp \
    widget.cpp

HEADERS += \
    OPCInclude/OPCClient.h \
    OPCInclude/OPCClientToolKitDLL.h \
    OPCInclude/OPCGroup.h \
    OPCInclude/OPCHost.h \
    OPCInclude/OPCItem.h \
    OPCInclude/OPCItemData.h \
    OPCInclude/OPCProperties.h \
    OPCInclude/OPCServer.h \
    OPCInclude/Transaction.h \
    OPCInclude/opcda.h \
    OPCInclude/stdafx.h \
    cmycallback.h \
    widget.h

FORMS += \
    widget.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target


win32: LIBS += -L$$PWD/OPClib/r/ -lOPCClientToolKit
INCLUDEPATH += $$PWD/OPClib/r
DEPENDPATH += $$PWD/OPClib/r

RC_ICONS = Logo.ico
