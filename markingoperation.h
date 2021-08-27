#ifndef MARKINGOPERATION_H
#define MARKINGOPERATION_H

#include <QObject>
#include <QVector>

#include "code.h"

enum OperationTypes {
    Start, Pause, Stop
};

class MarkingOperation : public QObject
{
    Q_OBJECT
public:
    explicit MarkingOperation(QObject *parent = nullptr);

    Code *code() const;
    void setCode(Code *newCode);

    QVector<Code> *codeList() const;

    OperationTypes getCurrentStatus() const;
    void setCurrentStatus(OperationTypes newCurrentStatus);

private:
    Code *m_code;
    QVector<Code> *m_codeList;
    OperationTypes currentStatus;
};

#endif // MARKINGOPERATION_H
