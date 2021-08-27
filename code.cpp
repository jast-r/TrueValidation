#include "code.h"

Code::Code(QObject *parent) : QObject(parent)
{

}

const QString &Code::checkedDate() const
{
    return m_checkedDate;
}

void Code::setCheckedDate(const QString &newCheckedDate)
{
    m_checkedDate = newCheckedDate;
}

const QString &Code::id() const
{
    return m_id;
}

void Code::setId(const QString &newId)
{
    m_id = newId;
}

const QString &Code::value() const
{
    return m_value;
}

void Code::setValue(const QString &newValue)
{
    m_value = newValue;
}
