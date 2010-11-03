#include "aboutpanel.h"

AboutPanel::AboutPanel()
{
    setWindowTitle("About QtRemoteDroid");

    this->setFixedSize(400, 200);
    setWindowFlags(Qt::Dialog);

    QString info("QtRemoteDroid\n");
    info.append("Version:0.45\n");
    info.append("Copyright:GNU Lesser Gerneral Public License(LGPL)");
    infoLabel = new QLabel(this);
    infoLabel->setText(info);

    //this->




}
