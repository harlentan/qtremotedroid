#include "mainwindow.h"
#include "qTestWidget.h"
#include "touchPanel.h"
#include "touchButtons.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent)
{
    setupUi(this);
    retranslateUi(this);
}

void MainWindow::setupUi(QMainWindow *MainWindow)
{
    QPalette palette;

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
    palette.setColor(QPalette::Background, Qt::red);
    touchPad->setPalette(palette);
    touchPad->setAutoFillBackground(TRUE);


    verticalLayout->addWidget(touchPad);

    horizontalLayout = new QHBoxLayout();
    horizontalLayout->setSpacing(6);
    horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
    leftButton = new touchButtons(centralWidget);
    leftButton->setObjectName(QString::fromUtf8("leftButton"));
    //leftButton->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 255);"));
    palette.setColor(QPalette::Background, Qt::red);
    leftButton->setPalette(palette);
    leftButton->setAutoFillBackground(TRUE);

    horizontalLayout->addWidget(leftButton);

    rightButton = new touchButtons(centralWidget);
    rightButton->setObjectName(QString::fromUtf8("rightButton"));
    //rightButton->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 255);"));
    palette.setColor(QPalette::Background, Qt::red);
    rightButton->setPalette(palette);
    rightButton->setAutoFillBackground(TRUE);

    horizontalLayout->addWidget(rightButton);


    verticalLayout->addLayout(horizontalLayout);

    MainWindow->setCentralWidget(centralWidget);

    udpClientObj = new UDPClient() ;

    QObject::connect(touchPad, SIGNAL(gestureMove(QMouseEvent*)),
                          udpClientObj, SLOT(send_slot(QMouseEvent*)));



}

void MainWindow::retranslateUi(QMainWindow *MainWindow)
{
    MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
    //pushButton_2->setText(QApplication::translate("MainWindow", "PushButton", 0, QApplication::UnicodeUTF8));
    //pushButton->setText(QApplication::translate("MainWindow", "PushButton", 0, QApplication::UnicodeUTF8));
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
