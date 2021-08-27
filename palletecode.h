#ifndef PALLETECODE_H
#define PALLETECODE_H

#include "code.h"
#include <QObject>

class PalleteCode : public Code
{
    Q_OBJECT
public:
    explicit PalleteCode(QObject *parent = nullptr);
};

#endif // PALLETECODE_H
