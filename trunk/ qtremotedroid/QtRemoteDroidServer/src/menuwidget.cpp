#include "menuwidget.h"

MenuWidget::MenuWidget(QWidget *parent) :
    QWidget(parent)
{
}

void MenuWidget::closeEvent(QCloseEvent *e){

    e->ignore();
    this->hide();
}
