#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QtGui/QMainWindow>
#include <QSystemTrayIcon>
#include <QMenu>


#include "oscserver.h"
#include "remotedroidserver.h"
#include "oscservermethod.h"
#include "mousemethod.h"
#include "remotedroidserver.h"
#include <QUdpSocket>

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();

public:
    void setSystemTra();

public slots:
    //void oscReceivce();

private:
    RemoteDroidServer *remoteServer;
    QSystemTrayIcon *trayIcon;
    QAction *exitAction;
    QAction *aboutAction;
    QAction *configAction;
    QMenu *trayMenu;
   // OscServer *server;
   // QUdpSocket *udpSocket;

};

#endif // MAINWINDOW_H
