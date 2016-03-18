#ifndef IMAGE_H
#define IMAGE_H

#include <QObject>
#include <QMap>
#include "channel.h"

class Image
{
protected:
    void * ptrRawImage;
    unsigned int size;

    double height;
    double width;
    QMap<int, Channel*> channels;
public:
    virtual double getHeight() { return height; }
    virtual double getWidth() { return width; }
    virtual int getNumberOfChannels() { return channels.size(); }
    virtual Channel * getChannelById(int channelId) { return channels[channelId]; }
    virtual bool isChannelExists(int channelId) { return channels.contains(channelId); }

    virtual void Save(QString path) = 0;
    virtual void Load(QString path) = 0;

};

Q_DECLARE_INTERFACE(Image, "Image.ImageProcessorInterface/1.0")
#endif // IMAGE_H
