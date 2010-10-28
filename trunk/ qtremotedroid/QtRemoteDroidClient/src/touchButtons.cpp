#include "touchbuttons.h"
#include <QDebug>
#include <QMouseEvent>

touchButtons::touchButtons(QWidget *parent) :
    QWidget(parent)
{
}

void touchButtons::mousePressEvent(QMouseEvent *e)
{
    QString objNameL("leftButton");
    QString objNameR("rightButton");
    QString objName = objectName();

    if (objName == objNameL)
    {
        qDebug() << "leftButton+++";
        emit gestureClick(e);
    }
    else
        if (objName == objNameR)
        {
            qDebug() << "rightButton";
            emit gestureClick(e);
        }

    /*
    qDebug() << "Test Code" << e->pos();
    emit gestureClick(e);
    */
}

void touchButtons::mouseReleaseEvent(QMouseEvent *e)
{
    emit gestureClick(e);
}
/*
void touchButtons::gestureClick(QMouseEvent *e)
{


}*/
