#include "markingoperation.h"

MarkingOperation::MarkingOperation(QObject *parent)
{

}

Code *MarkingOperation::code() const
{
    return m_code;
}

void MarkingOperation::setCode(Code *newCode)
{
    m_code = newCode;
}

QVector<Code> *MarkingOperation::codeList() const
{
    return m_codeList;
}
