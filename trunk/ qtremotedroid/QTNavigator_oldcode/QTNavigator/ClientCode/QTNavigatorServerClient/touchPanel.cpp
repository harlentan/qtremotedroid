#include "touchpanel.h"
#include <QtGui/QToolTip>
#include <QDebug>
#include <QMouseEvent>

touchPanel::touchPanel(QWidget *parent) :
    QWidget(parent)
{
    this->setMouseTracking(TRUE);
}

void touchPanel::mouseMoveEvent(QMouseEvent *e)
{
    qDebug() << "touchPanel::mouseMoveEvent" << e->pos();
    emit gestureMove(e);
}
