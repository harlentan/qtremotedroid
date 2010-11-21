#ifndef REMOTEDROIDSERVER_H
#define REMOTEDROIDSERVER_H

#include <QWidget>
#include <QUdpSocket>
#include "oscserver.h"
#include "oscservermethod.h"
#include "mousemethod.h"
#include "leftbuttonmethod.h"
#include "rightbuttonmethod.h"


class RemoteDroidServer : public QWidget
{
    Q_OBJECT
public:
    explicit RemoteDroidServer(QWidget *parent = 0);
    ~RemoteDroidServer();

signals:

public slots:
    void oscReceive();


private:
    QUdpSocket *udpSocket;
    OscServer *server;

};

#endif // REMOTEDROIDSERVER_H
