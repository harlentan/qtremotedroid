#include "oscudpclient.h"
#include <QtNetwork/QHostAddress>

OSCUdpClient::OSCUdpClient(QString &ipAddr, QString *portNum)
{
    ip = new QString(ipAddr.data(),ipAddr.size());
    port = portNum->toUInt();
    qUdpSocket = new QUdpSocket;

    //qUdpSocket->connectToHost(QHostAddress("192.168.1.128"), 57110);

    //qUdpSocket->bind(QHostAddress(SERVER_IP),port2);
   // qUdpSocket->connectToHost("CNCHPC0130", 57110);
    //qUdpSocket->setPeerAddress(QHostAddress("192.168.1.128"));
    //qUdpSocket->setPeerPort(57110);
    //qUdpSocket->write()
}

void OSCUdpClient::sendMouseMoveOscMsg(QMouseEvent *e)
{
    type = 2;

    //int posX = (float)(e->pos().x());
    //int posY = (float)(e->pos().y());

    int posX = e->x() - this->xHistory;
    int posY = e->y() - this->yHistory;



    WOscMessage *message = new WOscMessage("/mouse");
    message->Add(type);
    message->Add(posX);
    message->Add(posY);


    if (e->type() == e->TouchBegin)
    {
        qDebug() << "press++++++++++++";
    }

    sendOscMsg(message);
}



void OSCUdpClient::sendOscMsg(WOscMessage *oscMsg)
{
    int s = 0;
    QByteArray datagram(oscMsg->GetBuffer(), oscMsg->GetBufferLen());
    qDebug() << oscMsg->GetBuffer();
    //s = qUdpSocket->writeDatagram(datagram, QHostAddress("192.168.1.128"), 57110);
    qDebug() << "s = " << s;
}

void OSCUdpClient::sendLeftButnOscMsg(QMouseEvent *e)
{
    WOscMessage *message = new WOscMessage("/leftbutton");
    message->Add(0);
    sendOscMsg(message);
}

void OSCUdpClient::sendRightButnOscMsg(QMouseEvent *e)
{
    qDebug() <<"send osc message";
    WOscMessage *message = new WOscMessage("/rightbutton");
    message->Add(0);
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
