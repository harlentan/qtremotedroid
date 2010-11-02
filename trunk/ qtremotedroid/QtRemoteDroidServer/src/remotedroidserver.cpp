#include "remotedroidserver.h"

RemoteDroidServer::RemoteDroidServer(QObject *parent) :
    QObject(parent)
{
    bool isBind;
    server = new OscServer;
    WOscContainerInfo rootInfo("root");
    WOscContainer *rootContainer = new WOscContainer(&rootInfo);

    MouseMethod(rootContainer, server, "mouse", "mouse message");
    server->SetAddressSpace(rootContainer);
    qDebug() << server->GetAddressSpace()->GetAddressSpace().GetBuffer();

    udpSocket = new QUdpSocket;
    isBind = udpSocket->bind(QHostAddress::Any, 57110);
    qDebug() << "bind = " << isBind;

    connect(udpSocket, SIGNAL(readyRead()), this, SLOT(recv()));
}

void RemoteDroidServer::recv()
{
    QByteArray datagram;
    QDataStream in(&datagram, QIODevice::ReadOnly);
    //QPoint mousePos ;
    NetReturnAddress net;
    qDebug() <<"coming";
    do {

        datagram.resize(udpSocket->pendingDatagramSize());
        udpSocket->readDatagram(datagram.data(), datagram.size());
    } while (udpSocket->hasPendingDatagrams());

    qDebug() << "the message is" << datagram;
    qDebug() << "the length is " << datagram.length();
    qDebug() << "send.....";
    server->NetworkReceive(datagram.data(), datagram.length(), &net);
    //in.setVersion(QDataStream::Qt_4_3);
    //in >> mousePos ;
    //qDebug() << "UDPClient::recv_slot" << mousePos;
    //QCursor::setPos(mousePos.x(), mousePos.y());
    //emit gmouseMove(&mousePos);
}
