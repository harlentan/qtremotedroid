#include "aboutpanel.h"

AboutPanel::AboutPanel(QWidget *parent) :
    QWidget(parent)
{
    iconLabel = new QLabel(this);
    iconLabel->setPixmap(QPixmap(":/img/icon.png"));

    QString descStr("QtRemoteDroid\n");
    descStr.append("Version : 1.0\n");
    descStr.append("Based on Qt 4.7\n");
    descStr.append("Copyright: LGPL, Teleca\n");
    descStr.append("Contribute: QtRemoteDroid Workshop org of Teleca\n");

    display = new QTextEdit;
    display->setText(descStr);
    display->setReadOnly(true);

    //dispLabel = new QLabel(descStr);

    okButton = new QPushButton(this);
    okButton->setText("OK");
    hBox = new QHBoxLayout;

    hBox->addStretch(1);
    hBox->addWidget(okButton);


    vBox = new QVBoxLayout;
    vBox->addWidget(iconLabel);
    vBox->addWidget(display);
    vBox->addStretch(1);
    //vBox->addWidget(okButton);
    vBox->addLayout(hBox);

    this->setLayout(vBox);

    connect(okButton, SIGNAL(clicked()), this, SLOT(onOK()));


}

AboutPanel::~AboutPanel(){
    delete vBox;
    delete hBox;
    delete okButton;
    delete display;
    delete iconLabel;
}

void AboutPanel::onOK(){
    emit goOK();
    this->hide();
}
