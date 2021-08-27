#ifndef VALIDATION_H
#define VALIDATION_H

#include "markingoperation.h"
#include <QObject>

class Validation : public MarkingOperation
{
    Q_OBJECT
public:
    explicit Validation(QObject *parent = nullptr);

    bool changeOperationState(OperationTypes newCurrentStatus) override;

private:
//    CodeSource cameraReader;
//    UnitCodeImpl unitCodeImpl;
//    SensorController sensor;
//    LigthColumnController lightController;
};

#endif // VALIDATION_H
