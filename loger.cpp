#include "loger.h"

Loger::Loger(){ }

void Loger::print_exist(QString namef, qint64 sizef)
{
    std::cout << "File: "<< namef.toStdString() << " exist, size: " << sizef << std::endl;
}
void Loger::print_deleted(QString namef)
{
    std::cout << "File: "<< namef.toStdString() << " not exist" << std::endl;
}
void Loger::print_changed(QString namef, qint64 sizef)
{
    std::cout << "File: "<< namef.toStdString() << " exist and was changed, new size: " << sizef << std::endl;
}
