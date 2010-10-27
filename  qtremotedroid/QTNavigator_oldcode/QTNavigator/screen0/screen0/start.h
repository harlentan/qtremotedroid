#ifndef START_H
#define START_H

#include <QtGui/QWidget>

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
public slots:
    void exitStart();
private slots:
    void advanceProgressBar();
private:
    void createProgressBar();

     QLabel *stateLabel;
     QLabel *imageLabel;
     QProgressBar *progressBar;
     QPixmap *pix;
     QSplashScreen *splash;
};

#endif // START_H
