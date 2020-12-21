#pragma once
#include <alpm.h>
#include "alpm_pkg_ver.hpp"
#include <vector>
#include <string>
#include "alpm_depend_class.hpp"

class alpm_pkg_class{
    public:
        alpm_pkg_class(alpm_pkg_t* pkgkun);
        ~alpm_pkg_class();
        alpm_pkg_ver get_version();
        std::vector<alpm_depend_class> get_depends_packages();
        operator alpm_pkg_t*();
    private:
        alpm_pkg_t* pkgptr;
        template<class T> 
        std::vector<T> to_array_pointer(alpm_list_t* lskun); 
        template<class T>
        void to_array_p(alpm_list_t* lskun,std::vector<T>* vectp);
};