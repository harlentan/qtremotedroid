#include "mainwindow.h"
//#include "qTestWidget.h"
#include "touchPanel.h"
#include "touchButtons.h"
#include "setting.h"
#include "clientCommn.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent)
{
    //ip = ipAddr;
    //port = portNum;
    setupUi(this);
    retranslateUi(this);
    setAttribute(Qt::WA_AcceptTouchEvents);
}

void MainWindow::setupUi(QMainWindow *MainWindow)
{
    QPalette palette;


    setPanel = new Setting;


    leftButn = new QPushButton;
    leftButn->setFixedHeight(qApp->desktop()->rect().height()/4);
    rightButn = new QPushButton;
    rightButn->setFixedHeight(qApp->desktop()->rect().height()/4);


    if (MainWindow->objectName().isEmpty())
        MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
    MainWindow->resize(600, 400);
    centralWidget = new QWidget(MainWindow);
    centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
    //centralWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 0);"));
    verticalLayout = new QVBoxLayout(centralWidget);
    verticalLayout->setSpacing(6);
    verticalLayout->setContentsMargins(11, 11, 11, 11);
    verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
    //widget = new qTestWidget(centralWidget);
    touchPad = new touchPanel(centralWidget);
    touchPad->setObjectName(QString::fromUtf8("widget"));
    //touchPad->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 255);"));
    palette.setColor(QPalette::Background, QColor(Qt::gray));
    touchPad->setPalette(palette);
    touchPad->setAutoFillBackground(TRUE);

    QPixmap pix(":/img/set.png");
    //add the set button on the touchPad;
    setButn = new QPushButton(touchPad);
    setButn->setFixedSize(pix.width(), pix.height());
    //QColor color(Qt::yellow);
    //QPalette pal = setButn->palette();
    //pal.setColor(QPalette::Button, color);
    setButn->setIcon(QIcon(pix));
    setButn->setIconSize(QSize(pix.width(), pix.height()));


    setButn->setMask(pix.mask());

    connect(setButn, SIGNAL(pressed()), this, SLOT(setDimIcon()));
    connect(setButn, SIGNAL(released()), this, SLOT(setBritIcon()));



    verticalLayout->addWidget(touchPad);

    horizontalLayout = new QHBoxLayout();
    horizontalLayout->setSpacing(6);
    horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));

    //leftButton = new touchButtons(centralWidget);
    //leftButton->setObjectName(QString::fromUtf8("leftButton"));


    //leftButton->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 255);"));


    //palette.setColor(QPalette::Background, QColor(209, 238, 238));
    //leftButton->setPalette(palette);
    //leftButton->setAutoFillBackground(TRUE);

    horizontalLayout->addWidget(leftButn);

    //rightButton = new touchButtons(centralWidget);
    //rightButton->setObjectName(QString::fromUtf8("rightButton"));


    //rightButton->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 255);"));



    //palette.setColor(QPalette::Background, QColor(209, 238, 238));
    //rightButton->setPalette(palette);
    //rightButton->setAutoFillBackground(TRUE);

    horizontalLayout->addWidget(rightButn);


    verticalLayout->addLayout(horizontalLayout);

    MainWindow->setCentralWidget(centralWidget);

    //udpClientObj = new UDPClient(ip, port);

    oscUdp = new OSCUdpClient(ip, &port);

    QObject::connect(touchPad, SIGNAL(gestureMove(QMouseEvent*)),
                          oscUdp, SLOT(sendMouseMoveOscMsg(QMouseEvent*)));

    QObject::connect(touchPad, SIGNAL(gesturePress(QMouseEvent *)),
                            oscUdp, SLOT(gesturePress(QMouseEvent*)));

    QObject::connect(touchPad, SIGNAL(gestureRelease(QMouseEvent *)),
                            oscUdp, SLOT(gestureRelease(QMouseEvent*)));

    QObject::connect(leftButn, SIGNAL(pressed()),
                          oscUdp, SLOT(sendLeftButnPress()));
    QObject::connect(leftButn, SIGNAL(released()),
                    oscUdp, SLOT(sendLeftButnRelease()));
    QObject::connect(rightButn, SIGNAL(pressed()),
                     oscUdp, SLOT(sendRightButnPress()));
    QObject::connect(rightButn, SIGNAL(released()),
                     oscUdp, SLOT(sendRightButnRelease()));


    QObject::connect(setPanel, SIGNAL(goPrevious()), this, SLOT(onPrevious()));
    QObject::connect(setButn, SIGNAL(clicked()), this, SLOT(onSetting()));
    QObject::connect(setPanel, SIGNAL(goSubmit()), this, SLOT(onSubmit()));

   // QObject::connect(rightButton, SIGNAL(clicked()), oscUdp, SLOT(sendRightButnOscMsg()));
}

void MainWindow::retranslateUi(QMainWindow *MainWindow)
{
    MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
} // retranslateUi


MainWindow::~MainWindow()
{

}

void MainWindow::changeEvent(QEvent *e)
{
    QMainWindow::changeEvent(e);
    switch (e->type()) {
    case QEvent::LanguageChange:
        this->retranslateUi(this);
        break;
    default:
        break;
    }
}

void MainWindow::setDimIcon(){
    QPixmap pix(":/img/setdim.png");
    setButn->setIcon(QIcon(pix));
}

void MainWindow::setBritIcon(){
    QPixmap pix(":/img/set.png");
    setButn->setIcon(QIcon(pix));
}

void MainWindow::onPrevious(){
    emit goPrevious();
    setPanel->hide();
}

void MainWindow::onSetting(){

    this->hide();
    setPanel->resize(qApp->desktop()->width(), qApp->desktop()->height());
    setPanel->show();
    setPanel->showFullScreen();

}

void MainWindow::initNet(QString &tmpIp, QString &tmpPort){
    ip = tmpIp;
    port = tmpPort;
}

void MainWindow::onSubmit(){
    initPanel();
    setPanel->hide();
    this->show();
    this->showFullScreen();


}

void MainWindow::initPanel(){
    QPalette palette;
    int padColor = setPanel->getColor();

    qDebug() <<"color is"<<padColor;
    switch(padColor){

    case GrayColor:
        palette.setColor(QPalette::Background, GRAY);
        break;
    case BlueColor:
        palette.setColor(QPalette::Background, BLUE);
        break;
    case GreenColor:
        palette.setColor(QPalette::Background, GREEN);
        break;
    case RedColor:
        palette.setColor(QPalette::Background, RED);
        break;
    }

    touchPad->setPalette(palette);
    touchPad->setAutoFillBackground(TRUE);

}

void MainWindow::initSens(){
    int sensType = setPanel->getSens();
    oscUdp->setSens(sensType);
}
