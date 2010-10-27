#ifndef QTESTWIDGET_H
#define QTESTWIDGET_H

#include <QtGui/QWidget>

class qTestWidget : public QWidget {
    Q_OBJECT
public:
    qTestWidget(QWidget *parent);
  ~qTestWidget();

signals:
  void dbl_clicked();

public slots:
    void debugCode();

private:
  void mouseMoveEvent(QMouseEvent *e);
};

#endif // QTESTWIDGET_H
