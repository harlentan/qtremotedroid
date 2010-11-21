#include "aboutpanel.h"
#include <QFont>

AboutPanel::AboutPanel()
{
    setWindowTitle("About QtRemoteDroid");

    this->setFixedSize(400, 200);
    setWindowFlags(Qt::Dialog);
    QPixmap conPix("./img/icon.png");
    ico = new QIcon(conPix);
    picLabel = new QLabel;

    picLabel->setPixmap(conPix);
    //picLabel->setAlignment(Qt::AlignRight);
    //picLabel->setScaledContents(true);


    QFont titleFont;
    titleFont.setBold(true);
    QString titleStr = QString(RD_NAME);
    titleLabel = new QLabel(titleStr);
    titleLabel->setAlignment(Qt::AlignLeft);
    titleLabel->setFont(titleFont);

    QString verStr = QString("Version: ");
    verStr.append(RD_VERSION);
    QString baseStr = QString("Based on ");
    baseStr.append(RD_BASE);
    QString buildStr = QString("Build on ");
    buildStr.append(RD_BUILD_TIME);
    QString hisStr = QString("From history: ");
    hisStr.append(RD_HISTORY);
    QString copyStr = QString("Copyright: ");
    copyStr.append(RD_COPYRIGHT);
    QString desStr = QString(RD_DESCRIPTION);


    QString text;
    text.append(verStr);
    text.append("\n\n");
    text.append(baseStr);
    text.append("\n\n");
    text.append(buildStr);
    text.append("\n\n");
    text.append(hisStr);
    text.append("\n\n");
    text.append(copyStr);
    text.append("\n\n");
    text.append(desStr);
    text.append("\n\n");

    infoLabel = new QLabel;
    infoLabel->setText(text);

    //vLayout = new QVBoxLayout(this);
    //textLabelHLay = new QHBoxLayout;

    gridLayout = new QGridLayout(this);
    gridLayout->addWidget(picLabel, 0, 0);
    gridLayout->addWidget(titleLabel, 0, 1);
    gridLayout->addWidget(infoLabel, 1, 1);
    //textLabelHLay->addWidget(picLabel);
    //textLabelHLay->addWidget(titleLabel);

    //vLayout->addLayout(textLabelHLay);
    //vLayout->addWidget(infoLabel);

/*
    QLabel titleL(titleStr);
    QLabel verL(verStr);
    QLabel baseL(baseStr);
    QLabel buildL(buildStr);
    QLabel historyL(hisStr);
    QLabel copyL(copyStr);
    QLabel desL(desStr);

    textLabelVLay->addWidget(&titleL);
    textLabelVLay->addWidget(&verL);
    textLabelVLay->addWidget(&baseL);
    textLabelVLay->addWidget(&buildL);
    textLabelVLay->addWidget(&historyL);
    textLabelVLay->addWidget(&copyL);
    textLabelVLay->addWidget(&desL);
*/
    //hLayout->addWidget(picLabel);
    //hLayout->addLayout(textLabelVLay);

    setLayout(gridLayout);
    setWindowIcon(*ico);


}

AboutPanel::~AboutPanel(){
    /*delete infoLabel;
    delete iconPix;
    delete textLabelHLay;
    delete vLayout;
    delete picLabel;
    delete titleLabel;
    delete gridLayout;
    delete ico;*/

    delete gridLayout;
    delete infoLabel;
    delete titleLabel;
    delete picLabel;
    delete ico;


}
