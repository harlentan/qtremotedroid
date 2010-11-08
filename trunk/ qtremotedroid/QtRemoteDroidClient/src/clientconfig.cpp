#include "clientconfig.h"
//#include "UDPClient.h"

ClientConfig::ClientConfig(QWidget *parent)
    : QWidget(parent)
{
    QLabel *pTipText = new QLabel(tr("Please input the server IP address"));
    //QPalette textPalet;
    //textPalet.setColor(QPalette::WindowText, Qt::white);
    //pTipText->setPalette(textPalet);
    abPanel = new AboutPanel;

    QLabel *pIpText = new QLabel;
    pIpText->setPixmap(QPixmap(":/img/ip.png"));
    //pIpText->setFont(font);
    //pIpText->setPalette(textPalet);
    pIpEdit = new QLineEdit;

    //set the ip format
    QString maskStr("000.000.000.000");
    pIpEdit->setInputMask(maskStr);

    QPushButton *pConnButn = new QPushButton(tr("Connect"));
    QPushButton *pQuitButn = new QPushButton(tr("Quit"));
    QPushButton *pSetButn = new QPushButton(tr("About"));

    QHBoxLayout *pIpHBlayout = new QHBoxLayout;
    pIpHBlayout->addWidget(pIpText);
    pIpHBlayout->addWidget(pIpEdit);

    QHBoxLayout *pConnHBlayout = new QHBoxLayout;
    //pConnHBlayout->addSpacing(40);
    pConnHBlayout->addWidget(pConnButn);
    pConnHBlayout->addStretch(100);

    QVBoxLayout *pVBlayout = new QVBoxLayout();
    pVBlayout->addWidget(pTipText);
    pVBlayout->addLayout(pIpHBlayout);
    pVBlayout->addLayout(pConnHBlayout);


    //Setting and Quit button layout
    QGridLayout *pButnGridlayout = new QGridLayout;
    pButnGridlayout->addWidget(pSetButn, 0, 0, 1, 1);
    pButnGridlayout->addWidget(pQuitButn, 0, 1, 1, 1);
    pButnGridlayout->setSpacing(1);

    QVBoxLayout *pTopVBlayout = new QVBoxLayout;
    pTopVBlayout->setSpacing(20);
    pTopVBlayout->addLayout(pVBlayout);
    pTopVBlayout->addStretch(20);

    //add the PC picture
    QLabel *pcLabel = new QLabel;
    pcLabel->setPixmap(QPixmap(":/img/pc.png"));
    pTopVBlayout->addWidget(pcLabel);

    pTopVBlayout->addLayout(pButnGridlayout);

    setLayout(pTopVBlayout);
   // Qt::WindowFlags flags = 0;
    //flags |= Qt::FramelessWindowHint;
    //setWindowFlags(flags);

    QPalette palette;
    //palette.setColor(QPalette::Background, QColor(0,0,0));
    //setPalette(palette);

    tmpWin = new MainWindow();


    connect(pQuitButn, SIGNAL(clicked()), this, SLOT(close()));
    connect(pConnButn, SIGNAL(clicked()), this, SLOT(ClientConn()));
    connect(pSetButn, SIGNAL(clicked()), this, SLOT(OnClickSetButn()));

    connect(tmpWin, SIGNAL(goPrevious()), this, SLOT(onPrevious()));
    connect(pSetButn, SIGNAL(clicked()), this, SLOT(onAbout()));
    connect(abPanel, SIGNAL(goOK()), this, SLOT(thisShow()));

    //Create the QtRemoteDroid dir
    QDir dir;
    if(!dir.exists(QtRdDir))
    dir.mkdir(QtRdDir);
}

ClientConfig::~ClientConfig()
{

}

void ClientConfig::ClientConn()
{
    this->hide();


    QString ipText = pIpEdit->text();
    QString portNum(SERV_PORT);
 /*

    tmpWin = new MainWindow(ipText, portNum);
*/
    tmpWin->initNet(ipText, portNum);
    tmpWin->show();

#ifndef Q_WS_WIN
    tmpWin->showFullScreen();
#endif

    //we need to test if the server is ok
    //UDPClient udpTest(ipText, portNum);

    //udpTest.isServOn();
    //NvClientConn connTest(ipText, portNum);

    //qDebug <<ipText;


}

void ClientConfig::OnClickSetButn()
{
    //this->setDisabled(true);
}

void ClientConfig::onPrevious(){

   /*
    this->resize(qApp->desktop()->width(), qApp->desktop()->height());
    this->show();
    this->showFullScreen();
*/
    thisShow();
    tmpWin->hide();
}


void ClientConfig::onAbout(){
    abPanel->setFixedSize(qApp->desktop()->rect().width(),
                          qApp->desktop()->rect().height());
    abPanel->show();
    abPanel->showFullScreen();
    this->hide();
}

void ClientConfig::thisShow(){
    this->resize(qApp->desktop()->width(), qApp->desktop()->height());
    this->show();
    this->showFullScreen();
}


