#include "UDPClient.h"
#include "clientCommn.h"

#include <QCursor>
#include <QTimer>

//#include <windows.h>

const int bufferLength = 1024;

//add the to head file
//const int port1 = 8000;
              //const int port2 = 9000;
//const int port2 = 57110;


//this function may be abandoned
UDPClient::UDPClient()
{
    udpSocket = new QUdpSocket;
    udpSocket->bind(QHostAddress(SERVER_IP),port2);

    //udpSocket->bind(QHostAddress::LocalHost, port2);

    connect(udpSocket, SIGNAL(readyRead()),
            this, SLOT(recv_slot()));       
}


UDPClient::UDPClient(QString ipAddr, QString portNum)
{
    isServOn = false;
    ip = ipAddr;
    port = portNum.toUInt();
    udpSocket = new QUdpSocket;
    udpSocket->bind(QHostAddress(ip),port);

    //udpSocket->bind(QHostAddress::LocalHost, port2);
    connect(udpSocket, SIGNAL(readyRead()),
            this, SLOT(recv_slot()));


}

UDPClient::~UDPClient()
{
    delete udpSocket;
}



void UDPClient::send_slot(QMouseEvent *e)
{
    QByteArray datagram;
    QDataStream out(&datagram, QIODevice::WriteOnly);
    out.setVersion(QDataStream::Qt_4_3);


    //isServOn is used to check if the server is on,I just set it true
    //e->type()
    isServOn = true;
    if (isServOn)
    {
    //QTime revtime = revdatetime.time();
        out << e->pos();
        udpSocket->writeDatagram(datagram, QHostAddress(ip), port);
    //QString str = ui->textEdit->toPlainText();
    //udpSocket->writeDatagram(qPrintable(str), bufferLength, QHostAddress::LocalHost,port1);
    }
    else
    {   /*
        sendTimer = QTimer;
        out << CLI_RQCHAR;
        //out.setVersion(QDataStream::Qt_4_7);
        udpSocket->writeDatagram(testGram, QHostAddress(ip), port);
        //sendTimer->singleShot(1000, this, SLOT(send_slot(QMouseEvent*)));
        //connect(sendTimer, SIGNAL(timeout()), this, SLOT(resend()));
        */
    }
}



void UDPClient::resend()
{
    QByteArray datagram;
    QDataStream out(&datagram, QIODevice::WriteOnly);
    out.setVersion(QDataStream::Qt_4_3);


}




void UDPClient::recv_slot()
{
    QByteArray datagram;
    QDataStream in(&datagram, QIODevice::ReadOnly);

    if (!isServOn)
    {


    }
    /*
    QPoint mousePos ;

    do {
        datagram.resize(udpSocket->pendingDatagramSize());
        udpSocket->readDatagram(datagram.data(), datagram.size());
    } while (udpSocket->hasPendingDatagrams());

    in.setVersion(QDataStream::Qt_4_3);
    in >> mousePos ;
    qDebug() << "UDPClient::recv_slot" << mousePos;*/
    //QCursor::setPos(mousePos.x(), mousePos.y());

#ifdef Q_WS_WIN

    POINT pt;
    GetCursorPos(&pt);
    HWND hWnd = GetForegroundWindow();//GetActiveWindow(); //::WindowFromPoint(pt);
    DWORD dw = MAKEWORD(pt.x, pt.y);
    SetCapture(hWnd);

    mouse_event(
          MOUSEEVENTF_MOVE,
          MAKEWORD(pt.x, 0),
          MAKEWORD(pt.y, 0),
          0,
          NULL
        );

    mouse_event(
      MOUSEEVENTF_RIGHTDOWN | MOUSEEVENTF_RIGHTUP,
      MAKEWORD(pt.x, 0),
      MAKEWORD(pt.y, 0),
      0,
      NULL
    );

   // SendMessage(hWnd, WM_MOUSEMOVE, NULL, dw);
    //SendMessage(hWnd, WM_RBUTTONDOWN, MK_RBUTTON, dw);
    //SendMessage(hWnd, WM_RBUTTONUP, MK_RBUTTON, dw);
    //SendInput(sdfsdf,asdfsdf,afdsdf);
    ReleaseCapture();




/*
    int msgboxID = MessageBox(
            NULL,
            (LPCWSTR)L"Resource not available\nDo you want to try again?",
            (LPCWSTR)L"Account Details",
            MB_ICONWARNING | MB_CANCELTRYCONTINUE | MB_DEFBUTTON2
        );

        switch (msgboxID)
        {
        case IDCANCEL:
            // TODO: add code
            break;
        case IDTRYAGAIN:
            // TODO: add code
            break;
        case IDCONTINUE:
            // TODO: add code
            break;
        }
*/
#endif

}

/*
bool UDPClient::isServOn()
{
    QByteArray testGram;
    QDataStream out(&testGram, QIODevice::WriteOnly);
    out << CLI_RQCHAR;
    //out.setVersion(QDataStream::Qt_4_7);
    udpSocket->writeDatagram(testGram, QHostAddress(ip), port);

}
*/
