#ifndef START_H
#define START_H

#include <QtGui/QWidget>

#include "helper.h"
#include "clientconfig.h"

QT_BEGIN_NAMESPACE
class QLabel;
class QProgressBar;
class QWidget;
//class QPixmap;
//class QSplashScreen;
QT_END_NAMESPACE
class start : public QWidget
{
    Q_OBJECT

public:
    start(QWidget *parent = 0);
    ~start();
public slots:
    void exitStart();
private slots:
    void advanceProgressBar();
private:
    void createProgressBar();


public:
    //void closeEvent(QCloseEvent *);//added by Legend

     QLabel *stateLabel;
     //QLabel *imageLabel;
     QProgressBar *progressBar;
     QLabel *nativeLabel;
     Helper helper;
     //QPixmap *pixmap;
     //QSplashScreen *splash;
     ClientConfig *pConfig;
};

#endif // START_H
