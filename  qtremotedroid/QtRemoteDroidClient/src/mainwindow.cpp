#include "mainwindow.h"
//#include "qTestWidget.h"
#include "touchPanel.h"
#include "touchButtons.h"


MainWindow::MainWindow(QString &ipAddr, QString &portNum, QWidget *parent) :
    QMainWindow(parent)
{
    ip = ipAddr;
    port = portNum;
    setupUi(this);
    retranslateUi(this);
    setAttribute(Qt::WA_AcceptTouchEvents);
}

void MainWindow::setupUi(QMainWindow *MainWindow)
{
    QPalette palette;



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

    //add the set button on the touchPad;
    setButn = new QPushButton(touchPad);
    //setButn->setGeometry(qApp->desktop()->rect().width()/2 - 30,
             //            2,
               //          60,
                 //        60);
    //setButn->clearMask();
    //setButn->setMask(QBitmap(QPixmap(":/img/set.png")));
    //QImage image;
    //image.load(":/img/set.png");
    //QPixmap pixShow = QPixmap::fromImage(
      //      image.scaled(image.size(),
        //    Qt::KeepAspectRatio));
    QPixmap pix(":/img/set.png");
    //setButn->setIcon(QIcon(pixShow));
    setButn->setMask(pix.createHeuristicMask());



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
