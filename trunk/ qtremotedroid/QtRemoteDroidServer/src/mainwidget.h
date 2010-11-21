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
#include <QCloseEvent>

class MainWidget : public QWidget
{
    Q_OBJECT
public:
    explicit MainWidget(QWidget *parent = 0);
    void paintEvent(QPaintEvent *);
    ~MainWidget();

public:
    void getLocalIP();


signals:

public slots:


protected:
    void closeEvent(QCloseEvent *);

private:
    QLabel *textLabel;
    //QLabel *ipLabel;
    QString textip;
    //QGridLayout *gridLayout;
    QString ipStr;

};

#endif // MAINWIDGET_H
