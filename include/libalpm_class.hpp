#pragma once
#include <alpm.h>
#include <string>
typedef std::string String;
class alpm_class{
    public:
        alpm_class(String root,String dbpath);
        ~alpm_class();
        alpm_db_t* register_syncdb(String treename,int level);
    private:
        alpm_handle_t* handle;
};