#ifndef TOUCHBUTTONS_H
#define TOUCHBUTTONS_H

#include <QWidget>

class touchButtons : public QWidget
{
Q_OBJECT
public:
    explicit touchButtons(QWidget *parent = 0);

signals:
    void gestureClick(QMouseEvent *e);
    void clicked();
public slots:


private:
    void mousePressEvent(QMouseEvent *e);
    void mouseReleaseEvent(QMouseEvent *e);
};

#endif // TOUCHBUTTONS_H
