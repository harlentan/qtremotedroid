#include <QtGui/QApplication>
#include "mainwindow.h"
#include <QPixmap>
#include <QIcon>
#include <QSystemTrayIcon>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;

    w.hide();
    return a.exec();
}
