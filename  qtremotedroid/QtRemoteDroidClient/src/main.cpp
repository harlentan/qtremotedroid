#include <QtGui/QApplication>
#include "start.h"
#include <QDesktopWidget>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    start swind;
   /* swind.resize(swind.sizeHint());
    int desktopArea = QApplication::desktop()->width() *
                        QApplication::desktop()->height();
    int widgetArea = swind.width() * swind.height();
    if (((float)widgetArea / (float)desktopArea) < 0.75f)
          swind.show();
    else
        swind.showMaximized();*/

    swind.show();
    swind.showFullScreen();
    return a.exec();
}



/*

 int desktopArea = QApplication::desktop()->width() *
                     QApplication::desktop()->height();
    int widgetArea = window.width() * window.height();
    if (((float)widgetArea / (float)desktopArea) < 0.75f)
        window.show();
    else
        window.showMaximized();
*/
