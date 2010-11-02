#ifndef REMOTEDROIDSERVER_H
#define REMOTEDROIDSERVER_H

#include <QObject>
#include "OSC_lgd/WOscReceiver.h"
#include "OSC_lgd/WOscReceiverMethod.h"
#include "OSC_lgd/WOscContainer.h"
#include "mousemethod.h"
#include <QUdpSocket>
#include "oscserver.h"
#include "netreturnaddress.h"

#define WOS_MAX_RX_UDP_PACKET	2048

class RemoteDroidServer : public QObject
{
    Q_OBJECT
public:
    explicit RemoteDroidServer(QObject *parent = 0);

signals:

public slots:
    void recv();

private:

    QUdpSocket *udpSocket;
    OscServer *server;


};

#endif // REMOTEDROIDSERVER_H
