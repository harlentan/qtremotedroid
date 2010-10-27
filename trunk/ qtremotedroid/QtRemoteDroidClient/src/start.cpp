#include <QtGui>
#include <QDesktopWidget>
#include "start.h"
#include "widget.h"

start::start(QWidget *parent)
    : QWidget(parent)
{
   QDesktopWidget* desktopWidget = QApplication::desktop();
    //get client rect.
    QRect rect = desktopWidget->availableGeometry();

    Widget *native = new Widget(&helper, this);
    nativeLabel = new QLabel(tr("Welcome to Teleca Qt!"));
    nativeLabel->setAlignment(Qt::AlignHCenter);
    stateLabel = new QLabel(tr("Starting..."));
    stateLabel->setAlignment(Qt::AlignHCenter);
    /*imageLabel = new QLabel();
    imageLabel->resize(rect.width(),rect.height()*0.8);
    QPixmap pixmap(":/784.gif");
    //pixmap     = new QPixmap(":/784.gif");
    imageLabel->setPixmap(pixmap.scaled(imageLabel->size()));*/

//    QSplashScreen splash(pixmap);
    //Window window;
    createProgressBar();

    QGridLayout *layout = new QGridLayout;
    layout->addWidget(nativeLabel, 0, 0);
    layout->addWidget(native, 1, 0);
    layout->addWidget(progressBar, 2, 0);
    layout->addWidget(stateLabel,3,0);
    setLayout(layout);

    QTimer *timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), native, SLOT(animate()));

    timer->start(250);
    //timer->start(2);
    setWindowTitle(tr("start"));
//    setWindowIcon(QIcon(":/images/qt.png"));
}

start::~start()
{
    delete(progressBar);
    //delete(pixmap);
    //delete(native);
    delete(nativeLabel);
    delete(stateLabel);
}

void start::createProgressBar()
{
    progressBar = new QProgressBar;
    progressBar->setRange(0, 3000);
    progressBar->setValue(0);
    progressBar->setTextVisible(0);

    QTimer *timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(advanceProgressBar()));
    timer->start(0);
}

void start::advanceProgressBar()
{
    int curVal = progressBar->value();
//    int maxVal = progressBar->maximum();
    if (curVal < progressBar->maximum())
    {
        progressBar->setValue(curVal + 1 );
    }
    else
    {
        //timer->stop();
        //delete timer;

        //this->close();
        QTimer *tmpTm = qobject_cast<QTimer *>(sender());
        tmpTm->stop();//stop the Timer
        exitStart();
    }
}

void start::exitStart()
{
    //this->close();
    this->hide();
    pConfig = new ClientConfig;
    pConfig->show();
    pConfig->showFullScreen();
    //a.actions();
}

/*
void start::closeEvent(QCloseEvent *)
{
    this->hide();
    pConfig = new ClientConfig;
    pConfig->show();

}
*/































