#include "oscudpclient.h"
#include <QtNetwork/QHostAddress>

OSCUdpClient::OSCUdpClient(QString &ipAddr, QString *portNum)
{
    //ip = new QString(ipAddr.data(),ipAddr.size());
    //port = portNum->toUInt();
    qUdpSocket = new QUdpSocket;
    this->xHistory = 0;
    this->yHistory = 0;
    this->xlast = 0;
    this->ylast = 0;
    this->sensity = SENS_MID_LEVEL;


    qDebug() << "from the osc  ip:"<<ipAddr;
    qDebug() << "from the osc port:"<<portNum;

}

void OSCUdpClient::sendMouseMoveOscMsg(QMouseEvent *e)
{
    type = 2;

    float x = e->x() - this->xHistory;
    float y = e->y() - this->yHistory;

    float xDir = x == 0 ? 1 : x / qFabs(x);
    float yDir = y == 0 ? 1 : y / qFabs(y);



    float xPos = (float)(qFabs(x)*sensity) * xDir;
    float yPos = (float)(qFabs(y)*sensity) * yDir;

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

void OSCUdpClient::sendRightButnPress()
{
    qDebug() << "send right press";
    WOscMessage *message = new WOscMessage("/rightbutton");
    message->Add(0);
    sendOscMsg(message);
}

void OSCUdpClient::sendRightButnRelease()
{
    WOscMessage *message = new WOscMessage("/rightbutton");
    message->Add(1);
    sendOscMsg(message);
}

void OSCUdpClient::sendLeftButnPress()
{
    qDebug() <<"left button press";
    WOscMessage *message = new WOscMessage("/leftbutton");
    message->Add(0);
    sendOscMsg(message);
}

void OSCUdpClient::sendLeftButnRelease()
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

void OSCUdpClient::setSens(int type){
    int sensType = type;

    switch(sensType){
    case SENS_HIGH_TYPE:
        sensity = SENS_HIGH_LEVEL;
        break;
    case SENS_MID_TYPE:
        sensity = SENS_MID_LEVEL;
        break;
    case SENS_LOW_TYPE:
        sensity = SENS_LOW_LEVEL;
        break;
    }
}

void OSCUdpClient::initOscNetwork(QString &ipAddr, QString *portNum){
    ip = new QString(ipAddr.data(),ipAddr.size());
    this->port = portNum->toUInt();

}
