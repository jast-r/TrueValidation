#ifndef ICODESOURCE_H
#define ICODESOURCE_H

#include <QObject>
#include "code.h"

class ICodeSource : public QObject
{
    Q_OBJECT
public:
    virtual Code readCode() = 0;
};

#endif // ICODESOURCE_H
