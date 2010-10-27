#ifndef START_H
#define START_H

#include <QtGui/QWidget>

#include "UDPClient.h"

QT_BEGIN_NAMESPACE
class QLabel;
class QProgressBar;
class QPixmap;
class QSplashScreen;
QT_END_NAMESPACE

class start : public QWidget
{
    Q_OBJECT

public:
    start(QWidget *parent = 0);
    ~start();

private:
    void setupUI();

    QLabel *imageLabel;
    UDPClient *udpClientObj;
};

#endif // START_H
