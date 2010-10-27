#include <QtGui/QApplication>
#include "start.h"
#include <QTimer>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    start swind;
    swind.show();
    QTimer::singleShot(2000, &swind, SLOT(exitStart()));
    return a.exec();
}
