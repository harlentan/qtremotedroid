#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QtGui/QMainWindow>

#include "oscserver.h"
#include "remotedroidserver.h"

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    RemoteDroidServer *remoteServer;
};

#endif // MAINWINDOW_H
