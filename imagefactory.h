#ifndef IMAGE_FACTORY_H
#define IMAGE_FACTORY_H

#include <QObject>
#include <QMap>
#include "image.h"

class ImageFactory
{
private:
    QMap<QString, QString> lookupTable;
public:
    ImageFactory();
    ~ImageFactory();
    Image * getInstanceByType(QString type);
    void registerType(QString type, QString className);
    void unregisterType(QString type);
};

#endif // IMAGE_FACTORY_H
