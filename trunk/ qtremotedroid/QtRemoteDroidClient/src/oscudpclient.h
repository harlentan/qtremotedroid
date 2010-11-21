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
    ~OSCUdpClient();

public:
    void packOscMsg(QString *methodName);
    void addMsgParam(int intArg);
    void addMsgParam(float fArg);
    void setSens(int type);
    void initOscNetwork(QString &ipAddr, QString *portNum);

signals:

public slots:
    void sendMouseMoveOscMsg(QMouseEvent *e);
    void sendLeftButnPress();
    void sendLeftButnRelease();
    void sendRightButnRelease();
    void sendRightButnPress();
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
    float sensity;
};



#endif // OSCUDPCLIENT_H
