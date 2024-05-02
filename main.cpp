#include "loger.h"
#include <QCoreApplication>
#include <chrono>
#include <thread>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    FileManager& ourManager = FileManager::Inctance();
    Loger& ourLoger = ourLoger::Inctance();

    // ourLoger.addfile(C:\f1.txt);

    QObject::connect(&ourManager, &FileManager::/**/, &ourLoger, &Loger::/**/);
    QObject::connect(&ourManager, &FileManager::/**/, &ourLoger, &Loger::/**/);
    QObject::connect(&ourManager, &FileManager::/**/, &ourLoger, &Loger::/**/);


    while(true)
    {
        ourManager.updatef();
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }

    return a.exec();
}
