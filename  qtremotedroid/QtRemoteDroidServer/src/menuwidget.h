#ifndef MENUWIDGET_H
#define MENUWIDGET_H

#include <QWidget>
#include <QCloseEvent>

class MenuWidget : public QWidget
{
    Q_OBJECT
public:
    explicit MenuWidget(QWidget *parent = 0);

signals:

public slots:

protected:
    void closeEvent(QCloseEvent *);

};

#endif // MENUWIDGET_H
