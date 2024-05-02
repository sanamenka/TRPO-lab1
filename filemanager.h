#ifndef FILEMANAGER_H
#define FILEMANAGER_H
#include "file.h"
#include <QObject>
#include <QVector>

class FileManager: public QObject //SingleTon
{
    Q_OBJECT
private:
    QVector <File> files;
    FileManager() { } // конструктор недоступен
    // запрещаем копирование
    FileManager(FileManager const&);
    FileManager& operator= (FileManager const&);

public:
    static FileManager& Inctance()
    {
        static FileManager s;
        return s;
    }
    void addfile(QString file_name);  //метод добавления в массив файлов
    void updatef(); // метод обновления данных о наблюдаемых файлах

// сигналы
signals:
    void file_exist(QString file_name, qint64 file_size); //существования
    void file_changed(QString file_name, qint64 file_size); // изменения
    void file_deleted(QString file_name); // удаления

};

#endif // FILEMANAGER_H

