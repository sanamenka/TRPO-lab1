#ifndef FILE_H
#define FILE_H
#include <QFileInfo>
#include <QString>

class File
{
private:
    bool existf; // статус существования
    qint64 sizef; //размер
    QString namef; //путь

public:
    File();
    File(const QString& file_name, bool flag = 0);
    bool is_exist();
    int get_file_size();
    QString get_file_name();

    bool operator==(File f) const; //перегрузка == для метода addfile
};

#endif // FILE_H
