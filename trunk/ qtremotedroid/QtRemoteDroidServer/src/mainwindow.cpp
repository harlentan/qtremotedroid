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
    /*delete remoteServer;
    delete trayIcon;
    delete exitAction;
    delete aboutAction;
    delete configAction;
    delete mainAction;
    delete trayMenu;
    delete about;
    delete set;
    delete mainWget;
    */

    delete mainAction;
    delete aboutAction;
    delete configAction;
    delete exitAction;
    delete trayIcon;
    delete trayMenu;


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
    mainAction = new QAction("Show main Window", this);



    //add icon to the menu
    icon = QIcon(QPixmap("./img/aboutusicon.png"));
    aboutAction->setIcon(icon);
    icon = QIcon(QPixmap("./img/setting.png"));
    configAction->setIcon(icon);
    icon = QIcon(QPixmap("./img/exit.png"));
    exitAction->setIcon(icon);
    icon = QIcon(QPixmap("./img/app.png"));
    mainAction->setIcon(icon);

    trayMenu = new QMenu;
    trayMenu->addAction(mainAction);
    trayMenu->addSeparator();
    trayMenu->addAction(configAction);
    trayMenu->addSeparator();
    trayMenu->addAction(aboutAction);

    trayMenu->addSeparator();
    trayMenu->addAction(exitAction);


    connect(exitAction, SIGNAL(triggered()), this, SLOT(close()));
    connect(aboutAction, SIGNAL(triggered()), this, SLOT(aboutPanel()));
    //connect(configAction, SIGNAL(triggered()), this, SLOT(settingPanel()));
    connect(mainAction, SIGNAL(triggered()), this, SLOT(showMain()));

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

void MainWindow::showMain(){
    mainWget = new MainWidget;
    mainWget->show();
}




