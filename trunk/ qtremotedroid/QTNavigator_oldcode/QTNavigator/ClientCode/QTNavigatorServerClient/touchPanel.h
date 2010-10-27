#ifndef TOUCHPANEL_H
#define TOUCHPANEL_H

#include <QWidget>

class touchPanel : public QWidget
{
Q_OBJECT
public:
    explicit touchPanel(QWidget *parent = 0);

signals:
    void gestureMove(QMouseEvent *e);

public slots:


private:
    void mouseMoveEvent(QMouseEvent *e);
};

#endif // TOUCHPANEL_H
