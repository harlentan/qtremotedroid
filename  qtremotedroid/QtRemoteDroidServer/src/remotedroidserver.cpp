#include "remotedroidserver.h"

RemoteDroidServer::RemoteDroidServer(QWidget *parent) :
    QWidget(parent)
{
    bool isOk;
    server = new OscServer;
    udpSocket = new QUdpSocket;
    WOscContainerInfo rootInfo("root");
    WOscContainer *rootContainer = new WOscContainer(&rootInfo);

    //construct the receive method
    new MouseMethod(rootContainer, server, "mouse", "receive the mouse message");
    new LeftButtonMethod(rootContainer, server, "leftbutton", "receive the leftbutton message");
    new RightButtonMethod(rootContainer, server, "rightbutton", "receive the rightbutton message");

    server->SetAddressSpace(rootContainer);
    qDebug() << "the receive address space:";
    qDebug() << server->GetAddressSpace()->GetAddressSpace().GetBuffer();


    isOk = udpSocket->bind(QHostAddress::Any, 57110);
    if(!isOk)
        exit(0);


    connect(udpSocket, SIGNAL(readyRead()), this, SLOT(oscReceive()));


}

void RemoteDroidServer::oscReceive(){
    QByteArray datagram;
    NetReturnAddress net;
    qDebug() <<"coming";
    do {

        datagram.resize(udpSocket->pendingDatagramSize());
        udpSocket->readDatagram(datagram.data(), datagram.size());
    } while (udpSocket->hasPendingDatagrams());

    qDebug() << "the message is" << datagram;
    qDebug() << "the length is " << datagram.length();
    server->NetworkReceive(datagram.data(), datagram.length(), &net);
}

RemoteDroidServer::~RemoteDroidServer(){
    delete udpSocket;
    delete server;
}
