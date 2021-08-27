#ifndef UNITCODE_H
#define UNITCODE_H

#include "code.h"
#include <QObject>

class UnitCode : public Code
{
    Q_OBJECT
public:
    explicit UnitCode(QObject *parent = nullptr);

private:

};

#endif // UNITCODE_H
