#pragma once
#include <alpm.h>
#include "alpm_pkg_class.hpp"
#include <string>
class alpm_db_class{
    public:
        alpm_db_class(alpm_db_t* db);
        ~alpm_db_class();
        alpm_pkg_class get_pkg(std::string pkgname);
        
    private:
        alpm_db_t* db_ptr;
};