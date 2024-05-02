#include "filemanager.h"

bool FileManager::addfile(QString file_name)
{
    File newfile(file_name);
    if (files.contains(newfile))
        return false;
    else
    {
        files.append(newfile);
        return true;
    }
}

void FileManager::updatef()
{
    for(int i = 0; i < files.count(); i++)
    {
        File newfile(files[i].get_file_name());
        if ((newfile.is_exist()!= files[i].is_exist() && (newfile.is_exist())))
        {
            files[i] = newfile;
            emit file_exist(newfile.get_file_name(), newfile.get_file_size());
        }

        else if ((newfile.is_exist()!= files[i].is_exist() && (newfile.is_exist())))
        {
            files[i] = newfile;
            emit file_exist(newfile.get_file_name(), newfile.get_file_size());
        }

        else if ((newfile.is_exist()!= files[i].is_exist() && (newfile.is_exist())))
        {
            files[i] = newfile;
            emit file_exist(newfile.get_file_name(), newfile.get_file_size());
        }
    }
}
