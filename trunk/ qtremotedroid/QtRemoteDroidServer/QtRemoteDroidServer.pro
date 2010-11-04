#-------------------------------------------------
#
# Project created by QtCreator 2010-10-29T12:26:09
#
#-------------------------------------------------

QT       += core gui\
            network

TARGET = QtRemoteDroidServer
TEMPLATE = app


SOURCES +=\
    src/mainwindow.cpp \
    src/main.cpp \
    src/OSC_lgd/WOscUtil.cpp \
    src/OSC_lgd/WOscTimeTag.cpp \
    src/OSC_lgd/WOscString.cpp \
    src/OSC_lgd/WOscReceiverMethod.cpp \
    src/OSC_lgd/WOscReceiver.cpp \
    src/OSC_lgd/WOscPriorityQueue.cpp \
    src/OSC_lgd/WOscPatternMatch.cpp \
    src/OSC_lgd/WOscPacket.cpp \
    src/OSC_lgd/WOscNetReturn.cpp \
    src/OSC_lgd/WOscMethod.cpp \
    src/OSC_lgd/WOscMessage.cpp \
    src/OSC_lgd/WOscLib.cpp \
    src/OSC_lgd/WOscInfo.cpp \
    src/OSC_lgd/WOscException.cpp \
    src/OSC_lgd/WOscContainer.cpp \
    src/OSC_lgd/WOscBundle.cpp \
    src/OSC_lgd/WOscBlob.cpp \
    src/oscserver.cpp \
    src/oscservermethod.cpp \
    src/netreturnaddress.cpp \
    src/mousemethod.cpp \
    src/remotedroidserver.cpp \
    src/leftbuttonmethod.cpp \
    src/rightbuttonmethod.cpp \
    src/menuwidget.cpp \
    src/settingpanel.cpp \
    src/aboutpanel.cpp

HEADERS  += \
    src/mainwindow.h \
    src/OSC_lgd/WOscUtil.h \
    src/OSC_lgd/WOscTimeTag.h \
    src/OSC_lgd/WOscString.h \
    src/OSC_lgd/WOscReceiverMethod.h \
    src/OSC_lgd/WOscReceiver.h \
    src/OSC_lgd/WOscPriorityQueue.h \
    src/OSC_lgd/WOscPatternMatch.h \
    src/OSC_lgd/WOscPacket.h \
    src/OSC_lgd/WOscNetReturn.h \
    src/OSC_lgd/WOscMethod.h \
    src/OSC_lgd/WOscMessage.h \
    src/OSC_lgd/WOscLib.h \
    src/OSC_lgd/WOscInfo.h \
    src/OSC_lgd/WOscException.h \
    src/OSC_lgd/WOscContainer.h \
    src/OSC_lgd/WOscBundle.h \
    src/OSC_lgd/WOscBlob.h \
    src/OSC_lgd/config.h \
    src/oscserver.h \
    src/oscservermethod.h \
    src/netreturnaddress.h \
    src/mousemethod.h \
    src/remotedroidserver.h \
    src/leftbuttonmethod.h \
    src/rightbuttonmethod.h \
    src/menuwidget.h \
    src/settingpanel.h \
    src/aboutpanel.h \
    src/config.h