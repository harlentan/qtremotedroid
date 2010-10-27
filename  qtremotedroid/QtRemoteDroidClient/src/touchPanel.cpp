#include "touchpanel.h"
#include <QtGui/QToolTip>
#include <QDebug>
#include <QMouseEvent>

touchPanel::touchPanel(QWidget *parent) :
    QWidget(parent)
{
    this->setMouseTracking(TRUE);
    isLeftBtnPress = false;
    setAttribute(Qt::WA_AcceptTouchEvents);
}

void touchPanel::mouseMoveEvent(QMouseEvent *e)
{
#ifdef Q_WS_WIN
    qDebug()<<"windows";
    if (isLeftBtnPress)
    {
#endif
        qDebug() << "touchPanel::mouseMoveEvent" << e->pos();
        emit gestureMove(e);
#ifdef Q_WS_WIN
    }
#endif


}


void touchPanel::mousePressEvent(QMouseEvent *evnt)
{
    if (evnt->button() == Qt::LeftButton)
    isLeftBtnPress = true;

    emit gesturePress(evnt);
}

void touchPanel::mouseReleaseEvent(QMouseEvent *evnt)
{
    if (evnt->button() == Qt::LeftButton)
    isLeftBtnPress = false;

    emit gestureRelease(evnt);
}


