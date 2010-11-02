#include "rightbuttonmethod.h"
#include <QApplication>
#include <QMouseEvent>
#include <QEvent>

#include <windows.h>

RightButtonMethod::RightButtonMethod(
        WOscContainer *parent,
        WOscReceiver *receiverContext,
        const char *methodName,
        const char *methodDescription):
        OscServerMethod(
                parent,
                receiverContext,
                methodName,
                methodDescription)
{
}

void RightButtonMethod::Method(
        const WOscMessage *message,
        const WOscTimeTag &when,
        const WOscNetReturn *networkReturnAddress){
    qDebug() << "the right button has received the message";
    int type = message->GetInt(0);
    switch(type)
    {
    case 0 :
        mouse_event(MOUSEEVENTF_RIGHTDOWN, 0, 0, 0, 0);
        break;
    case 1:
        mouse_event(MOUSEEVENTF_RIGHTUP, 0, 0, 0, 0);
        break;
    }
}
