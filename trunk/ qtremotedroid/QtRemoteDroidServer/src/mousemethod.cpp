#include "mousemethod.h"
#include <QDebug>
MouseMethod::MouseMethod(
        WOscContainer *parent,
        WOscReceiver *receiverContext,
        const char *methodName,
        const char *methodDescription):
        OscServerMethod(
                parent,
                receiverContext,
                methodName,
                methodDescription){
}

void MouseMethod::Method(
        const WOscMessage *message,
        const WOscTimeTag &when,
        const WOscNetReturn *networkReturnAddress){
    qDebug() << "mouse received the message^^^^^^^^^^^^";
}
