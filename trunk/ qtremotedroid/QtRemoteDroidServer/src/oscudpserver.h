#ifndef OSCUDPSERVER_H
#define OSCUDPSERVER_H

#include <QObject>

class OSCUdpServer : public QObject
{
    Q_OBJECT
public:
    explicit OSCUdpServer(QObject *parent = 0);

signals:

public slots:

};

#endif // OSCUDPSERVER_H
