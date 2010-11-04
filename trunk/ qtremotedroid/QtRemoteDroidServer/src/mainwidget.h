#ifndef MAINWIDGET_H
#define MAINWIDGET_H

#include <QWidget>
#include <QIcon>
#include <QPixmap>
#include <QPalette>
#include <QPainter>
#include <QLabel>
#include <QLabel>
#include <QHostInfo>
#include <QHostAddress>
#include <QGridLayout>
#include <QDebug>

class MainWidget : public QWidget
{
    Q_OBJECT
public:
    explicit MainWidget(QWidget *parent = 0);
    void paintEvent(QPaintEvent *);

public:
    void getLocalIP();


signals:

public slots:

private:
    QLabel *textLabel;
    //QLabel *ipLabel;
    QString textip;
    //QGridLayout *gridLayout;
    QString ipStr;

};

#endif // MAINWIDGET_H
