#ifndef FILE_H
#define FILE_H
#include <QFileInfo>
#include <QObject>
#include <QString>


class File
{
private:
    bool existf;
    qint64 sizef;
    QString namef;

public:
    File();
    File(const QString& file_name, bool flag = 0);
    bool is_exist();
    int get_file_size();
    QString get_file_name();

    bool operator==(File f) const;
};

#endif // FILE_H
