#include "xmlrecord.h"

XmlRecord::XmlRecord()
{
    QString xmlFileName = QString(ConfigName);
    qtRdDri = new QString(QtRdDir);
    xmlPath = new QString;
    xmlPath->append(*qtRdDir);
    xmlPath->append("\\");
    xmlPath->append(xmlFileName);
    xmlFile = new QFile(xmlPath);

    qDebug() << "the xml file path is" << xmlPath;

}

void XmlRecord::initXml(){

    if(!xmlFile.exists()){

    }
}
