#include "UDPClient.h"
#include <QCursor>

#include <windows.h>

const int bufferLength = 1024;
const int port1 = 8000;
//const int port2 = 9000;
const int port2 = 57110;

UDPClient::UDPClient()
{
    udpSocket = new QUdpSocket;
    udpSocket->bind(QHostAddress("10.57.52.249"),port2);

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

    //QTime revtime = revdatetime.time();
    out << e->pos() ;
    udpSocket->writeDatagram(datagram, QHostAddress("10.57.52.91"), port2);
    //QString str = ui->textEdit->toPlainText();
    //udpSocket->writeDatagram(qPrintable(str), bufferLength, QHostAddress::LocalHost,port1);
}

void UDPClient::recv_slot()
{
    QByteArray datagram;
    QDataStream in(&datagram, QIODevice::ReadOnly);
    QPoint mousePos ;

    do {
        datagram.resize(udpSocket->pendingDatagramSize());
        udpSocket->readDatagram(datagram.data(), datagram.size());
    } while (udpSocket->hasPendingDatagrams());

    in.setVersion(QDataStream::Qt_4_3);
    in >> mousePos ;
    qDebug() << "UDPClient::recv_slot" << mousePos;
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
