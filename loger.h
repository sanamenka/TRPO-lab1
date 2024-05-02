#ifndef LOGER_H
#define LOGER_H

#include <QObject>

class Loger : public QObject
{
    Q_OBJECT
public:
    explicit Loger(QObject *parent = nullptr);

signals:

};

#endif // LOGER_H
