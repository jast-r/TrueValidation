#ifndef CODE_H
#define CODE_H

#include <QObject>

class Code : public QObject
{
    Q_OBJECT
public:
    explicit Code(QObject *parent = nullptr);

    const QString &checkedDate() const;
    void setCheckedDate(const QString &newCheckedDate);

    const QString &id() const;
    void setId(const QString &newId);

    const QString &value() const;
    void setValue(const QString &newValue);

private:
    QString m_id;
    QString m_value;
    QString m_checkedDate;
};

#endif // CODE_H
