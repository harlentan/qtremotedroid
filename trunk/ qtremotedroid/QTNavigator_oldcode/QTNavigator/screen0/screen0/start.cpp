#include <QtGui>

#include "start.h"

start::start(QWidget *parent)
    : QWidget(parent)
{
    stateLabel = new QLabel(tr("Strating..."));
    imageLabel = new QLabel();
    QPixmap pixmap(":/784.gif");
    imageLabel->setPixmap(pixmap.scaled(imageLabel->size()));

//    QSplashScreen splash(pixmap);

    createProgressBar();

    QVBoxLayout *mainLayout = new QVBoxLayout;
    mainLayout->addWidget(imageLabel);
    mainLayout->addWidget(progressBar);
    mainLayout->addWidget(stateLabel,0,Qt::AlignHCenter);
    setLayout(mainLayout);

    setWindowTitle(tr("start"));
//    setWindowIcon(QIcon(":/images/qt.png"));
}

start::~start()
{

}

void start::createProgressBar()
{
    progressBar = new QProgressBar;
    progressBar->setRange(0, 3000);
    progressBar->setValue(0);

    QTimer *timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(advanceProgressBar()));
    timer->start(0);
}

void start::advanceProgressBar()
{
    int curVal = progressBar->value();
//    int maxVal = progressBar->maximum();
    progressBar->setValue(curVal + 1 );
}

void start::exitStart()
{
  this->close();
}
