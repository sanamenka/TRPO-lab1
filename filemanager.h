#ifndef FILEMANAGER_H
#define FILEMANAGER_H
#include "file.h"
#include <QObject>
#include <QVector>

class FileManager : public QObject
{
    Q_OBJECT
private:
    QVector <File> files;
    FileManager() { }
    FileManager& operator= (FileManager const&);
    FileManager(FileManager const&);

public:
    static FileManager& Inctance()
    {
        static FileManager s;
        return s;
    }
    bool addfile(QString file_name);
    void updatef();

signals:
    void file_exist(QString file_name, qint64 file_size);
    void file_changed(QString file_name, qint64 file_size);
    void file_deleted(QString file_name);

};

#endif // FILEMANAGER_H

