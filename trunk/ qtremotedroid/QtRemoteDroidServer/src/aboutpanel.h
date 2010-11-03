#ifndef ABOUTPANEL_H
#define ABOUTPANEL_H

#include "menuwidget.h"
#include <QLabel>
#include <QPixmap>
#include <QLayout>
#include "config.h"
#include<QIcon>

class AboutPanel : public MenuWidget
{
public:
    AboutPanel();

private:
    QLabel *infoLabel;
    QPixmap *iconPix;
    QHBoxLayout *textLabelHLay;
    QVBoxLayout *vLayout;
    QLabel *picLabel;
    QLabel *titleLabel;
    QGridLayout *gridLayout;
    QIcon *ico;
    //QString text;

};

#endif // ABOUTPANEL_H
