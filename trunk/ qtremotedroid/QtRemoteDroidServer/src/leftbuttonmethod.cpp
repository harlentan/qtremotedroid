#include "leftbuttonmethod.h"
#include <QMouseEvent>
#include <QCursor>
#include <QtGui/QApplication>
#include <QtGlobal>
#include <windows.h>

LeftButtonMethod::LeftButtonMethod(
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

void LeftButtonMethod::Method(
        const WOscMessage *message,
        const WOscTimeTag &when,
        const WOscNetReturn *networkReturnAddress){
    qDebug() << "the left button has received the message";
    int type = message->GetInt(0);
    switch(type)
    {
    case 0:
        mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
        qDebug() << "The leftbutton pressed";
        break;
    case 1:
        mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
        qDebug() << "The leftbutton released";
        break;
    }

}
