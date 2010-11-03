#include "mainwindow.h"
#include <QHostInfo>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
   remoteServer = new RemoteDroidServer;
    setSystemTra();




   /*server = new OscServer;
   WOscContainerInfo rootInfo("root");
   WOscContainer *rootContainer = new WOscContainer(&rootInfo);

   new MouseMethod(rootContainer, server, "mouse", "Mouse");
   server->SetAddressSpace(rootContainer);

   udpSocket = new QUdpSocket;
   udpSocket->bind(QHostAddress::Any, 57110);
   connect(udpSocket, SIGNAL(readyRead()), this, SLOT(oscReceivce()));
*/

}

MainWindow::~MainWindow()
{

}


/*
void MainWindow::oscReceivce(){

    QByteArray datagram;
    QDataStream in(&datagram, QIODevice::ReadOnly);

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

}*/

void MainWindow::setSystemTra(){
    QIcon icon = QIcon(QPixmap("./img/icon.png"));
    setWindowIcon(icon);
    trayIcon = new QSystemTrayIcon;


    //display local ip
    QHostInfo *hostInfo = new QHostInfo;
    QHostInfo localhost = QHostInfo::fromName(hostInfo->localHostName());
    QHostAddress localAddress = localhost.addresses().first();
    QString ipStr = localAddress.toString();

    trayIcon->setIcon(icon);
    trayIcon->setToolTip("QtRemoteDroidServer");
    QString titlec = tr("QtRemoteDroid");
    QString preStr = QString("Please Input The IP:");
    preStr.append(ipStr);
    trayIcon->show();
    trayIcon->showMessage(titlec, preStr, QSystemTrayIcon::Information, 200000);
    setWindowTitle("RemoteDroidServer");

    exitAction = new QAction("Exit", this);
    configAction = new QAction("Setting", this);
    aboutAction = new QAction("About QtRemoteDroid", this);


    trayMenu = new QMenu;
    trayMenu->addAction(configAction);
    trayMenu->addSeparator();
    trayMenu->addAction(aboutAction);
    trayMenu->addSeparator();
    trayMenu->addAction(exitAction);


    connect(exitAction, SIGNAL(triggered()), this, SLOT(close()));
    connect(aboutAction, SIGNAL(triggered()), this, SLOT(aboutPanel()));
    connect(configAction, SIGNAL(triggered()), this, SLOT(settingPanel()));

    trayIcon->setContextMenu(trayMenu);
}

void MainWindow::aboutPanel(){
    about  = new AboutPanel;
    //about->move();
    about->show();
}

void MainWindow::settingPanel(){
    set = new SettingPanel;
    set->show();
}
