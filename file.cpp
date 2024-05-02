#include "file.h"

File::File()
{

}
File::File(const QString& file_name)
{
    namef = file_name;
    QFileInfo file (namef);
    sizef = file.size();
    existf = file.exists();
}

bool File::operator ==(File f)const
{
    if (f.namef != namef)
        return false;
    else
        return true;
}


bool File::is_exist()
{
        return existf;
}

int File::get_file_size()
{
        return sizef;
}

QString File::get_file_name()
{
        return namef;
}
