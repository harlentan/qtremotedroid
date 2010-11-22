#ifndef XMLADAPTER_H
#define XMLADAPTER_H

#include <QtXml/QDomDocument>
#include <QtXml/QDomElement>
#include <QtXml/QDomProcessingInstruction>
#include <QFile>
#include <QTextStream>
#include <QDir>
#include <QString>
#include <QIODevice>
#include <QtXml/QDomText>

#include "clientCommn.h"

class XmlAdapter
{
public:
    XmlAdapter();
    ~XmlAdapter();
    QString readXml();
    void writeXml(QString *);


private:
    QFile *xmlFile;
    QDir *xmlDir;
    QDomDocument *doc;
    QDomElement rootNode;
    QString rootName;
    QDomElement ipNode;
    QString ipText;
    QTextStream out;
};

#endif // XMLADAPTER_H
