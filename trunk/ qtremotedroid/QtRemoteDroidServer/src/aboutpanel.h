#ifndef ABOUTPANEL_H
#define ABOUTPANEL_H

#include "menuwidget.h"
#include <QLabel>

class AboutPanel : public MenuWidget
{
public:
    AboutPanel();

private:
    QLabel *infoLabel;
};

#endif // ABOUTPANEL_H
