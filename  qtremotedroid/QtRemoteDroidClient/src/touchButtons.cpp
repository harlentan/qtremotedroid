#include "touchbuttons.h"
#include <QDebug>
#include <QMouseEvent>

touchButtons::touchButtons(QWidget *parent) :
    QWidget(parent)
{
}

void touchButtons::mousePressEvent(QMouseEvent *e)
{
    /*
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
        }*/

    emit gesturePress(e);

}

void touchButtons::mouseReleaseEvent(QMouseEvent *e)
{
    emit gestureRelease(e);
}
/*
void touchButtons::gestureClick(QMouseEvent *e)
{


}*/
