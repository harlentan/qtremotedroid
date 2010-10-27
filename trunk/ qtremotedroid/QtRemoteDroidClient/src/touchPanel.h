#ifndef TOUCHPANEL_H
#define TOUCHPANEL_H

#include <QWidget>
#include <QTouchEvent>
#include <QEvent>



class touchPanel : public QWidget
{
Q_OBJECT
public:
    explicit touchPanel(QWidget *parent = 0);

signals:
    void gestureMove(QMouseEvent *e);
    void gesturePress(QMouseEvent *e);
    void gestureRelease(QMouseEvent *e);

public slots:


private:

    void mouseMoveEvent(QMouseEvent *e);
    void mousePressEvent(QMouseEvent *);
    void mouseReleaseEvent(QMouseEvent *);
    //bool event(QEvent *);
    float xHistory;
    float yHistory;

private:
    bool isLeftBtnPress;

};

#endif // TOUCHPANEL_H
