#include "xmladapter.h"

#include <QDebug>

XmlAdapter::XmlAdapter()
{
    xmlDir = new QDir(QtRdDir);

    if(!xmlDir->exists())
        xmlDir->mkdir(QtRdDir);


    QString xmlPath(QtRdDir);
    xmlPath.append("\\");
    xmlPath.append(ConfigName);
    xmlFile = new QFile(xmlPath);
    //xmlFile->open(QIODevice::ReadWrite);
    QDomProcessingInstruction instruction;
    doc = new QDomDocument;

    xmlFile->open(QIODevice::ReadWrite);
    out.setDevice(xmlFile);
    //init the xml file

    if(!xmlFile->exists()){
        QDomElement root = doc->createElement("QtRemoteDroid");
        doc->createProcessingInstruction("xml","version=\"1.0\" encoding=\"UTF-8\"");
        doc->appendChild(instruction);
        doc->appendChild(root);
        QDomElement ip = doc->createElement("ip");
        QDomText ip_text = doc->createTextNode("");
        ip.appendChild(ip_text);
        root.appendChild(ip);
        //ip.setNodeValue("");


        //xmlFile->open(QIODevice::ReadWrite);
        out.setDevice(xmlFile);
        doc->save(out, 4);

    }
    doc->setContent(xmlFile);
    rootNode = doc->documentElement();
    rootName = QString(rootNode.tagName());


    //xmlFile->close();
    //readXml();
}

XmlAdapter::~XmlAdapter(){

}

void XmlAdapter::writeXml(QString *st){
    /*ipNode.setNodeValue(*st);
    qDebug() << "write"<<st;

    doc->save(out, 4);
*/}

QString XmlAdapter::readXml(){
    /*ipNode = rootNode.firstChildElement("ip");
    qDebug()<< ipNode.text();
    return ipNode.text();*/
}

