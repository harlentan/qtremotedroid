#ifndef ABOUTQTREMOTEDROID_H
#define ABOUTQTREMOTEDROID_H

#include <QWidget>
#include "menuwidget.h"

class AboutQtRemoteDroid : public Menu
{
    Q_OBJECT
public:
    explicit AboutQtRemoteDroid(QWidget *parent = 0);

signals:

public slots:


protected:
    void ::closeEvent(QCloseEvent *);
};

#endif // ABOUTQTREMOTEDROID_H
