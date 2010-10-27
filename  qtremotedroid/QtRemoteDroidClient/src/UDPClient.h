#ifndef UDPCLIENT_H
#define UDPCLIENT_H

#include <QUdpSocket>
#include <QMouseEvent>

class UDPClient : public QObject
{
    Q_OBJECT
public:
    UDPClient();
    UDPClient(QString ipAddr, QString portNum);
    ~UDPClient();

public:
    //bool isServOn();

public slots:
   void send_slot(QMouseEvent *e);
   void recv_slot();
   void resend();
   //void clear();

private:
    QUdpSocket* udpSocket;
    QString ip;
    quint16 port;
    bool isServOn;
    QTimer *sendTimer;
};

#endif // UDPCLIENT_H
