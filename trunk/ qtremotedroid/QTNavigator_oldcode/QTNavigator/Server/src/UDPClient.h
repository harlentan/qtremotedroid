#ifndef UDPCLIENT_H
#define UDPCLIENT_H

#include <QtNetwork/QUdpSocket>
#include <QMouseEvent>

class UDPClient : public QObject
{
    Q_OBJECT
public:
    UDPClient();
    ~UDPClient();

public slots:
   void send_slot(QMouseEvent *e);
   void recv_slot();
   //void clear();

private:
    QUdpSocket* udpSocket;
};

#endif // UDPCLIENT_H
