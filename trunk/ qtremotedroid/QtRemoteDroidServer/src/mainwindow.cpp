#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    remoteServer = new RemoteDroidServer;
}

MainWindow::~MainWindow()
{

}
