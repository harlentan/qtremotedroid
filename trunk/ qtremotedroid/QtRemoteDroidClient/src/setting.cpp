#include "setting.h"

Setting::Setting(QWidget *parent) :
    QWidget(parent)
{
    colorLabel = new QLabel("Color:");
    sensLabel = new QLabel("Sensitivity:");

    QPixmap subPix(":/img/submit.png");
    preStepButn = new QPushButton(this);
    preStepButn->setObjectName("preStepButn");
    exitButn = new QPushButton(this);
    commitButn = new QPushButton;
    commitButn->setObjectName("submitButn");

    commitButn->setFixedSize(subPix.width(), subPix.height());
    commitButn->setMask(subPix.mask());
    commitButn->setIcon(QIcon(subPix));
    commitButn->setIconSize(QSize(subPix.width(), subPix.height()));

    QPixmap prePix(":/img/previous.png");
    preStepButn->setFixedSize(prePix.width(), prePix.height());
    preStepButn->setMask(prePix.mask());
    preStepButn->setIcon(QIcon(prePix));
    preStepButn->setIconSize(QSize(prePix.width(), prePix.height()));



    QPixmap exitPix(":/img/exit.png");
    exitButn->setFixedSize(exitPix.width(), exitPix.height());
    exitButn->setMask(exitPix.mask());
    exitButn->setIcon(QIcon(exitPix));
    exitButn->setIconSize(QSize(exitPix.width() + 2,
                                exitPix.height() + 4));

    bottomButnLay = new QHBoxLayout;
    bottomButnLay->addWidget(preStepButn);
    bottomButnLay->addWidget(exitButn);
    bottomButnLay->addWidget(commitButn);

    colorBox = new QComboBox;

    colorBox->addItem("Gray");
    colorBox->addItem("Blue");
    colorBox->addItem("Red");
    colorBox->addItem("Green");

    sensBox = new QComboBox;

    sensBox->addItem("Middle Level");
    sensBox->addItem("Low Level");
    sensBox->addItem("High Level");



    grid = new QGridLayout();
    grid->addWidget(colorLabel, 0, 0);
    grid->addWidget(colorBox, 0, 1);
    grid->addWidget(sensLabel, 1, 0);
    grid->addWidget(sensBox, 1, 1);
    grid->setSpacing(20);

    //grid->addWidget(exitButn, 2, 0);

    vBoxLayout = new QVBoxLayout;
    vBoxLayout->addLayout(grid);
    vBoxLayout->addStretch(1);
    //vBoxLayout->addWidget(exitButn);
    vBoxLayout->addLayout(bottomButnLay);

    setLayout(vBoxLayout);



    connect(preStepButn, SIGNAL(clicked()), this, SLOT(onClick()));
    connect(exitButn, SIGNAL(clicked()), this, SLOT(close()));
    connect(commitButn, SIGNAL(clicked()), this, SLOT(onSubmit()));
    connect(preStepButn, SIGNAL(pressed()), this, SLOT(onPrePress()));
    connect(preStepButn, SIGNAL(released()), this, SLOT(onPreRelease()));
    connect(commitButn, SIGNAL(pressed()), this, SLOT(onSubPress()));
    connect(commitButn, SIGNAL(released()), this, SLOT(onSubRelease()));
}

void Setting::onClick(){
    emit goPrevious();
}

void Setting::onSubmit(){
    colorType = colorBox->currentIndex();
    sensType = sensBox->currentIndex();
    emit goSubmit();
}

int Setting::getColor(){

    return colorType;
}

int Setting::getSens(){
    return sensType;
}

void Setting::onPrePress(){
    QPixmap pix(":/img/previousdim.png");
    preStepButn->setIcon(QIcon(pix));
    preStepButn->setIconSize(QSize(pix.width(), pix.height()));
}

void Setting::onPreRelease(){
    QPixmap pix(":/img/previous.png");
    preStepButn->setIcon(QIcon(pix));
    preStepButn->setIconSize(QSize(pix.width(), pix.height()));
}

void Setting::onSubPress(){
    QPixmap pix(":/img/submitdim.png");
    commitButn->setIcon(QIcon(pix));
    commitButn->setIconSize(QSize(pix.width(), pix.height()));
}

void Setting::onSubRelease(){
    QPixmap pix(":/img/submit.png");
    commitButn->setIcon(QIcon(pix));
    commitButn->setIconSize(QSize(pix.width(), pix.height()));
}
