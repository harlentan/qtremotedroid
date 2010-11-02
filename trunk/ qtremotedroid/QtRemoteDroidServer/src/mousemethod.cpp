#include "mousemethod.h"
#include <QDebug>
#include <QCursor>
#include <QPoint>

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
    qDebug() << "mouse received the message";

    QPoint pointHistory;
    QPoint pointNew;

    pointHistory.setX(QCursor::pos().x());
    pointHistory.setY(QCursor::pos().y());
    pointNew.setX(pointHistory.x() + (int)message->GetFloat(0));
    pointNew.setY(pointHistory.y() + (int)message->GetFloat(1));

    QCursor::setPos(pointNew);

}
