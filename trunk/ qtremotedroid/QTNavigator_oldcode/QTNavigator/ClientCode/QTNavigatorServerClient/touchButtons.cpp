#include "touchbuttons.h"
#include <QDebug>
#include <QMouseEvent>

touchButtons::touchButtons(QWidget *parent) :
    QWidget(parent)
{
}

void touchButtons::mousePressEvent(QMouseEvent *e)
{
    qDebug() << "Test Code" << e->pos();
    emit gestureClick(e);
}
