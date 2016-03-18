#ifndef BMPIMAGE_H
#define BMPIMAGE_H

#include <QObject>
#include "image.h"

class BmpImage : public QObject, public Image
{
    Q_OBJECT
    Q_INTERFACES(Image)
public:
    explicit BmpImage(QObject *parent = 0);
    ~BmpImage();

signals:

public slots:
};

#endif // BMPIMAGE_H
