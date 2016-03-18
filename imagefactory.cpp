#include "imagefactory.h"

ImageFactory::ImageFactory()
{

}

ImageFactory::~ImageFactory()
{

}

Image * ImageFactory::getInstanceByType(QString type)
{
    QString className = this->lookupTable[type];
    if(!className.isEmpty()){
        int typeId = QMetaType::type(className.toLatin1().data());
        if (typeId != QMetaType::UnknownType){
            QObject * newObejectPtr = (QObject*) QMetaType::construct(typeId, 0, 0);
            return qobject_cast<Image*>(newObejectPtr);
        }
    }
    return 0;
}

void ImageFactory::registerType(QString type, QString className)
{
    this->lookupTable[type] = className;
}

void ImageFactory::unregisterType(QString type)
{
    this->lookupTable.remove(type);
}

