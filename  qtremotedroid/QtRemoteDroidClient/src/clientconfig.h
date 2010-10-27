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

#include "clientCommn.h"

//#include "nvclientconn.h"

#include "mainwindow.h"


class ClientConfig : public QWidget
{
    Q_OBJECT

public:
    ClientConfig(QWidget *parent = 0);
    ~ClientConfig();

private slots:
    void ClientConn();
    void OnClickSetButn();

private:
    QLineEdit *pIpEdit;
    //NvClientConn *SA;
public:
    MainWindow *tmpWin;// add by legend
};

#endif // CLIENTCONFIG_H
