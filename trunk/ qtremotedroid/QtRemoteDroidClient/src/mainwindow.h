#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QMainWindow>
#include <QtGui/QHBoxLayout>
#include <QtGui/QVBoxLayout>
#include <QtGui/QPushButton>
#include <QApplication>
#include <QDesktopWidget>
#include <QPushButton>
#include <QBitmap>
#include <QImage>
#include <QColor>


#include "oscudpclient.h"
#include "setting.h"

class MainWindow : public QMainWindow {
    Q_OBJECT
public:
    MainWindow(QWidget *parent = 0);
    //MainWindow(QString &ip, QString &portNum, QWidget *parent = 0);
    ~MainWindow();
    void setupUi(QMainWindow *MainWindow);
    void retranslateUi(QMainWindow *MainWindow);
    void initNet(QString &tmpIp, QString &tmpPort);
    void initPanel();
    void initSens();

signals:
    void goPrevious();

public slots:
    void setBritIcon();
    void setDimIcon();
    void onPrevious();
    void onSetting();
    void onSubmit();

protected:
    void changeEvent(QEvent *e);


private:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QWidget *touchPad;
    QHBoxLayout *horizontalLayout;
    //QWidget *leftButton;
    //QWidget *rightButton;
    QString ip;
    QString port;
    //UDPClient *udpClientObj;
    OSCUdpClient *oscUdp;
    QPushButton *leftButn;
    QPushButton *rightButn;
    QPushButton *setButn;
    Setting *setPanel;

};

#endif // MAINWINDOW_H
