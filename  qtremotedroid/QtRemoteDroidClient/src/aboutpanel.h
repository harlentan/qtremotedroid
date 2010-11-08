#ifndef ABOUTPANEL_H
#define ABOUTPANEL_H

#include <QWidget>
#include <QLabel>
#include <QPixmap>
#include <QPushButton>
#include <QHBoxLayout>
#include <QHBoxLayout>
#include <QTextEdit>


class AboutPanel : public QWidget
{
    Q_OBJECT
public:
    explicit AboutPanel(QWidget *parent = 0);

signals:
    void goOK();

public slots:
    void onOK();

private:
    QLabel *iconLabel;
    //QLabel *dispLabel;
    QPushButton *okButton;
    QHBoxLayout *hBox;
    QVBoxLayout *vBox;
    QTextEdit *display;


};

#endif // ABOUTPANEL_H
