#include "clientconfig.h"
//#include "UDPClient.h"

ClientConfig::ClientConfig(QWidget *parent)
    : QWidget(parent)
{
    //set system font bold
    //QFont font;
    //font.setBold(true);
    //setFont(font);

    //QString ad(tr("10.24.53.14"));
    //QString po(tr("54"));



    QLabel *pTipText = new QLabel(tr("Please input the server IP address"));
    QPalette textPalet;
    textPalet.setColor(QPalette::WindowText, Qt::white);
    pTipText->setPalette(textPalet);


    QLabel *pIpText = new QLabel(tr("IP:"));
    //pIpText->setFont(font);
    pIpText->setPalette(textPalet);
    pIpEdit = new QLineEdit;

    //set the ip format
   // QString maskStr("000.000.000.000");
    //pIpEdit->setInputMask(maskStr);

    QPushButton *pConnButn = new QPushButton(tr("Connect"));
    QPushButton *pQuitButn = new QPushButton(tr("Quit"));
    QPushButton *pSetButn = new QPushButton(tr("Setting"));

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
    pTopVBlayout->addLayout(pButnGridlayout);

    setLayout(pTopVBlayout);
   // Qt::WindowFlags flags = 0;
    //flags |= Qt::FramelessWindowHint;
    //setWindowFlags(flags);

    QPalette palette;
    palette.setColor(QPalette::Background, QColor(0,0,0));
    setPalette(palette);

    connect(pQuitButn, SIGNAL(clicked()), this, SLOT(close()));
    connect(pConnButn, SIGNAL(clicked()), this, SLOT(ClientConn()));
    connect(pSetButn, SIGNAL(clicked()), this, SLOT(OnClickSetButn()));


   // SA = new NvClientConn(ad, po);
}

ClientConfig::~ClientConfig()
{

}

void ClientConfig::ClientConn()
{
    this->hide();
/*
    tmpWin = new MainWindow;
    tmpWin->show();
*/
   // QString ipText;
    QString ipText = pIpEdit->text();
    QString portNum(SERV_PORT);


    tmpWin = new MainWindow(ipText, portNum);
    tmpWin->show();
    tmpWin->showFullScreen();
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
