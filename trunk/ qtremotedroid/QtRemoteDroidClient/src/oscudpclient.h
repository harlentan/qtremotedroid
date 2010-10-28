#ifndef OSCUDPCLIENT_H
#define OSCUDPCLIENT_H

#include <QObject>

#include "OSC_lgd/WOscNetReturn.h"
#include "OSC_lgd/WOscMessage.h"

#include <QtNetwork/QUdpSocket>
#include <QMouseEvent>
#include <QTouchEvent>
#include <QString>
#include <QDebug>
#include <QtGlobal>
#include <qmath.h>

#include "clientCommn.h"

typedef struct SocketAddress
{
    QString addr;
    QString port;
}SocketAddr;

class TheNetReturnAddress: public WOscNetReturn
{
public:
    SocketAddr socketAddr;
};

class OSCUdpClient : public QObject
{
    Q_OBJECT
public:
    //explicit OSCUdpClient(QObject *parent = 0);
    OSCUdpClient(QString &ipAddr, QString *portNum);

public:
    void packOscMsg(QString *methodName);
    void addMsgParam(int intArg);
    void addMsgParam(float fArg);

signals:

public slots:
    void sendMouseMoveOscMsg(QMouseEvent *e);
    void sendLeftButnOscMsg(QMouseEvent *e);
    void sendRightButnOscMsg(QMouseEvent *e);
    void sendOscMsg(WOscMessage *oscMsg);
    void gesturePress(QMouseEvent *e);
    void gestureRelease(QMouseEvent *e);

private:
    QUdpSocket *qUdpSocket;
    //WOscMessage *oscMessage;
    QString *ip;
    quint16 port;
    int type;
    float xHistory;
    float yHistory;
    float xlast;
    float ylast;
};

#endif // OSCUDPCLIENT_H
