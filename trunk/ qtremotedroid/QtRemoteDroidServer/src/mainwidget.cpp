#include "mainwidget.h"

MainWidget::MainWidget(QWidget *parent) :
    QWidget(parent)
{
    this->setFixedSize(400, 400);
    QIcon icon = QIcon(QPixmap("./img/icon.png"));
    this->setWindowIcon(icon);
    textip = QString("QtRemoteDroid IP : ");
    //textLabel = new QLabel("QtRemoteDroid IP:", this);

    //
    getLocalIP();
    textip.append(ipStr);
    textLabel = new QLabel(textip, this);
    qDebug() << textip;
    textLabel->setGeometry(120, 80, 200,10);
    //ipLabel = new QLabel(ipStr, this);
    //ipLabel->setGeometry(160, 80, 120, 10);
    //gridLayout = new QGridLayout;
    //gridLayout->addWidget(textLabel, 0, 0);
    //gridLayout->addWidget(ipLabel, 0, 1);

    //this->setLayout(gridLayout);



}

void MainWidget::paintEvent(QPaintEvent *e){
    QPainter painter(this);
    painter.drawPixmap(0, 0, this->width(), this->height(), QPixmap("./img/main.png"));

}

void MainWidget::getLocalIP(){
    QHostInfo *hostInfo = new QHostInfo;
    QHostInfo localhost = QHostInfo::fromName(hostInfo->localHostName());
    QHostAddress localAddress = localhost.addresses().first();
    ipStr = localAddress.toString();
}


void MainWidget::closeEvent(QCloseEvent *e){
    e->ignore();
    this->hide();
}

MainWidget::~MainWidget(){
    delete textLabel;
}
