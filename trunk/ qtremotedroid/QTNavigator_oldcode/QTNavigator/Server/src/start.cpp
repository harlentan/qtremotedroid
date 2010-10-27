#include <QtGui>

#include "start.h"

start::start(QWidget *parent)
    : QWidget(parent)
{
    setupUI();
}

void start::setupUI()
{
    QVBoxLayout *mainLayout = new QVBoxLayout;

    imageLabel = new QLabel();
    QPixmap pixmap(":/res/helpphoto.jpg");
    imageLabel->setPixmap(pixmap.scaled(imageLabel->size()));
    mainLayout->addWidget(imageLabel);

    mainLayout->setMargin(0);

    setLayout(mainLayout);

    setWindowTitle(tr("QTNavigator"));
    setWindowIcon(QIcon(":/res/icon.gif"));

    udpClientObj = new UDPClient() ;
}

start::~start()
{

}
