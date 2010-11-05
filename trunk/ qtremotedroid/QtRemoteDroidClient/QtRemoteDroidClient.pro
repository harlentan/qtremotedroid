#-------------------------------------------------
#
# Project created by QtCreator 2010-10-27T16:36:30
#
#-------------------------------------------------

QT       += core gui\
        network

TARGET = QtRemoteDroidClient
TEMPLATE = app


SOURCES +=\
    src/widget.cpp \
    src/touchPanel.cpp \
    src/touchButtons.cpp \
    src/start.cpp \
    src/oscudpclient.cpp \
    src/mainwindow.cpp \
    src/main.cpp \
    src/helper.cpp \
    src/clientconfig.cpp \
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
    src/OSC_lgd/WOscBlob.cpp

HEADERS  += \
    src/widget.h \
    src/ui_mainwindow.h \
    src/touchPanel.h \
    src/touchButtons.h \
    src/start.h \
    src/oscudpclient.h \
    src/mainwindow.h \
    src/helper.h \
    src/clientconfig.h \
    src/clientCommn.h \
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
    src/OSC_lgd/config.h

CONFIG += mobility
MOBILITY = 

symbian {
    TARGET.UID3 = 0xe27b6dbf
    TARGET.CAPABILITY = LocalServices\
                        NetworkServices\
                        ReadUserData\
                        UserEnvironment\
                        WriteUserData

    TARGET.EPOCSTACKSIZE = 0x14000
    TARGET.EPOCHEAPSIZE = 0x020000 0x800000
}

OTHER_FILES +=

RESOURCES += \
    imgSource.qrc
