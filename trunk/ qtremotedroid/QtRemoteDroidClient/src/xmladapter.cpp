#include "xmladapter.h"

XmlAdapter::XmlAdapter()
{
    xmlDir = new QDir(QtRdDir);

    if(!xmlDir->exists())
        xmlDir->mkdir(QtRdDir);


    QString xmlPath(QtRdDir);
    xmlPath.append("\\");
    xmlPath.append(ConfigName);
    xmlFile = new QFile(xmlPath);
    QTextStream out;
    QDomProcessingInstruction instruction;
    doc = new QDomDocument;
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


        xmlFile->open(QIODevice::ReadWrite);
        out.setDevice(xmlFile);
        doc->save(out, 4);
        xmlFile->close();
    }
}

XmlAdapter::~XmlAdapter(){

}

void XmlAdapter::writeXml(QString *){

}
