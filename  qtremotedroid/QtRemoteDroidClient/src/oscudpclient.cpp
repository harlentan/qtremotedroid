#include "oscudpclient.h"
#include <QtNetwork/QHostAddress>

OSCUdpClient::OSCUdpClient(QString &ipAddr, QString *portNum)
{
    ip = new QString(ipAddr.data(),ipAddr.size());
    port = portNum->toUInt();
    qUdpSocket = new QUdpSocket;
    this->xHistory = 0;
    this->yHistory = 0;
    this->xlast = 0;
    this->ylast = 0;

}

void OSCUdpClient::sendMouseMoveOscMsg(QMouseEvent *e)
{
    type = 2;

    float x = e->x() - this->xHistory;
    float y = e->y() - this->yHistory;

    float xDir = x == 0 ? 1 : x / qFabs(x);
    float yDir = y == 0 ? 1 : y / qFabs(y);



    float xPos = (float)(qFabs(x)*0.4) * xDir;
    float yPos = (float)(qFabs(y)*0.4) * yDir;

    if(xDir < 0 )
    qDebug() <<"-----------------------";
    //qDebug() <<"yDir = " << yDir;
    if(xDir > 0 )
        qDebug() << "++++++++++++";
    qDebug() << "xPos = " << xPos;
    qDebug() << "yPos = " << yPos;



    WOscMessage *message = new WOscMessage("/mouse");
    message->Add(type);
    message->Add((xPos));
    message->Add(yPos);


    if (e->type() == e->TouchBegin)
    {
        qDebug() << "press++++++++++++";
    }

    this->xHistory = e->x();
    this->yHistory = e->y();
    sendOscMsg(message);


}



void OSCUdpClient::sendOscMsg(WOscMessage *oscMsg)
{
    int s = 0;
    QByteArray datagram(oscMsg->GetBuffer(), oscMsg->GetBufferLen());
    qDebug() << oscMsg->GetBuffer();
    s = qUdpSocket->writeDatagram(datagram, QHostAddress(*ip), port);
    //s = qUdpSocket->writeDatagram(datagram, QHostAddress("10.16.32.143"), 57110);
    qDebug() << "s = " << s;
}

void OSCUdpClient::sendRightButnPress(QMouseEvent *e)
{
    qDebug() << "send right press";
    WOscMessage *message = new WOscMessage("/rightbutton");
    message->Add(0);
    sendOscMsg(message);
}

void OSCUdpClient::sendRightButnRelease(QMouseEvent *e)
{
    WOscMessage *message = new WOscMessage("/rightbutton");
    message->Add(1);
    sendOscMsg(message);
}

void OSCUdpClient::sendLeftButnPress(QMouseEvent *e)
{
    qDebug() <<"left button press";
    WOscMessage *message = new WOscMessage("/leftbutton");
    message->Add(0);
    sendOscMsg(message);
}

void OSCUdpClient::sendLeftButnRelease(QMouseEvent *e)
{
    qDebug() << "left button release";
    WOscMessage *message = new WOscMessage("/leftbutton");
    message->Add(1);
    sendOscMsg(message);
}


void OSCUdpClient::gesturePress(QMouseEvent *e)
{
    this->xHistory = e->x();
    this->yHistory = e->y();

    qDebug() << "the history is set to current pos";
}

void OSCUdpClient::gestureRelease(QMouseEvent *e)
{
    this->xHistory = 0;
    this->yHistory = 0;

    qDebug() <<"the history pos is set to 0";
}
