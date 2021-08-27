#ifndef PACKCODE_H
#define PACKCODE_H

#include "code.h"
#include <QObject>

class PackCode : public Code
{
    Q_OBJECT
public:
    explicit PackCode(QObject *parent = nullptr);
};

#endif // PACKCODE_H
