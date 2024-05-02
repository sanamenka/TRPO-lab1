#ifndef LOGER_H
#define LOGER_H

#include <QObject>
#include <QString>
#include <iostream>
class Loger : public QObject
{
    Q_OBJECT
public:
    Loger();

public slots:
    void print_exist(QString namef, qint64 sizef);
    void print_deleted(QString namef);
    void print_changed(QString namef, qint64 sizef);
};

#endif // LOGER_H
