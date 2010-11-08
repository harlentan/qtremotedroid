#ifndef CLIENTCONFIG_H
#define CLIENTCONFIG_H

#include <QtGui/QWidget>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QHBoxLayout>
#include <QtGui/QVBoxLayout>
#include <QtGui/QPalette>
#include <QtGui/QFont>
#include <QString>
#include <QApplication>
#include <QDesktopWidget>

#include "clientCommn.h"

//#include "nvclientconn.h"

#include "mainwindow.h"
#include "aboutpanel.h"


class ClientConfig : public QWidget
{
    Q_OBJECT

public:
    ClientConfig(QWidget *parent = 0);
    ~ClientConfig();



private slots:
    void ClientConn();
    void OnClickSetButn();
    void onPrevious();
    void onAbout();
    void thisShow();

private:
    QLineEdit *pIpEdit;
    AboutPanel *abPanel;
    //NvClientConn *SA;
public:
    MainWindow *tmpWin;// add by legend
};

#endif // CLIENTCONFIG_H
