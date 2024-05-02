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
        if ((newfile.get_file_size()!= files[i].get_file_size() && (newfile.is_exist())&&(files[i].is_exist())))
        {
            files[i] = newfile;
            emit file_changed(newfile.get_file_name(), newfile.get_file_size());
        }
        else if (newfile.is_exist())
        {
            files[i] = newfile;
            emit file_exist(newfile.get_file_name(), newfile.get_file_size());
        }

        else if (!newfile.is_exist())
        {
            files[i] = newfile;
            emit file_deleted(newfile.get_file_name());
        }
    }
}

