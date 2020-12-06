#pragma once
#include <alpm.h>
#include <string>
#include <vector>
typedef std::string String;
#define Vector  std::vector
class alpm_class{
    public:
        alpm_class(String root,String dbpath);
        ~alpm_class();
        alpm_db_t* register_syncdb(String treename,int level);
        alpm_db_t* get_localdb();
        Vector<alpm_db_t*> get_syncdbs();
    private:
        alpm_handle_t* handle;
        template<class T> 
        Vector<T> to_array_pointer(alpm_list_t* lskun); 
        template<class T>
        void to_array_p(alpm_list_t* lskun,Vector<T>* vectp);
};