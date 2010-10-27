#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QMainWindow>
#include <QtGui/QHBoxLayout>
#include <QtGui/QVBoxLayout>
#include <QtGui/QPushButton>

#include "UDPClient.h"


class MainWindow : public QMainWindow {
    Q_OBJECT
public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void setupUi(QMainWindow *MainWindow);
    void retranslateUi(QMainWindow *MainWindow);

protected:
    void changeEvent(QEvent *e);

private:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QWidget *touchPad;
    QHBoxLayout *horizontalLayout;
    QWidget *leftButton;
    QWidget *rightButton;
    UDPClient *udpClientObj;
};

#endif // MAINWINDOW_H
