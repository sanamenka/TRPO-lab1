#include <QCoreApplication>
#include <chrono>
#include <thread>
#include "filemanager.h"
#include "loger.h"
#include<QTextStream>
QTextStream cin(stdin);

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    FileManager& ourManager = FileManager::Inctance();
    Loger ourLoger;

    QObject::connect(&ourManager, &FileManager::file_exist, &ourLoger, &Loger::print_exist);
    QObject::connect(&ourManager, &FileManager::file_changed, &ourLoger, &Loger::print_changed);
    QObject::connect(&ourManager, &FileManager::file_deleted, &ourLoger, &Loger::print_deleted);

    QString testfile1,testfile2;
    std::cout << "enter the file path to add:" << std::endl;
    cin >> testfile1>> testfile2;
    ourManager.addfile(testfile1); // добавляем файлы для проверки
    ourManager.addfile(testfile2);

   // C:\test1.txt
   // C:\test2.txt

   while(true) // цикл для запуска проверки
    {
            ourManager.updatef();
            std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }

    return a.exec();
}
