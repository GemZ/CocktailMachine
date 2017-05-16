#include "barkeeper.h"

#include <iostream>
#include <QDebug>
#include <QFile>

Barkeeper::Barkeeper()
{
    qDebug() << "Hello Barkeeper";
    readConfig();

}

int Barkeeper::readConfig() {
    // This Function reads the config file and populates the vectors with
    // the corresponding Objects. The XML File has different childnodes for
    // each Class of Objects under its root element.

    qDebug() << "Hello Config";
    QDomDocument config;
    QFile file("/home/alex/Qt/CocktailMachine/barkeeper.conf");
    if(!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        qDebug() << "Failed to open file";
        return -1;
    }
    else {
        QString errorStr;
        int errorLine;
        int errorColumn;
        if(!config.setContent(&file,false,&errorStr, &errorLine, &errorColumn)) {
            qDebug() << "Failed to parse config: " << errorStr << errorLine << errorColumn;
            return -1;
        }
        file.close();
    }

    // This is not implemented correctly - it works so I don't care (for now)
    // todo:The Element Container is not selected explicitly, so 'slot' will match in other elemtents too

    QDomElement xmlBarkeeper = config.firstChildElement();

    // todo:use this? QDomNodeList xyz = xmlBarkeeper.childNodes
    QDomNodeList xmlContainer = xmlBarkeeper.elementsByTagName("slot");
    qDebug() << "Total items = " << xmlContainer.count();
    for(int i = 0; i < xmlContainer.count(); i++) {
       QDomNode xmlSlot = xmlContainer.at(i);
       if(xmlSlot.isElement()) {
           QDomElement slot = xmlSlot.toElement();
           qDebug() << "Append Container: id " << slot.attribute("id");
           // todo: write Container constructor for this to work:
           //Container newContainer(slot.attribute("id"), slot.attribute("name"), slot.attribute("address"), slot.attribute("ingredient"));
           //_container.append(newContainer);
       }
    }

    return 0;
}

void Barkeeper::initScale() {

    return;
}
