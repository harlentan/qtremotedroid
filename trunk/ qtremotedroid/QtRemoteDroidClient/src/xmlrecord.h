#ifndef XMLRECORD_H
#define XMLRECORD_H

#include "clientCommn.h"
#include <QString>

#include <QDebug>
#include <QFile>

class XmlRecord
{
public:
    XmlRecord();
    void initXml();

private:
    QString *xmlPath;
    QString *qtRdDir;
    QFile *xmlFile;
};

#endif // XMLRECORD_H
