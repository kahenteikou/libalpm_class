#pragma once
#include <alpm.h>
#include <string>
#include "alpm_pkg_ver.hpp"
class alpm_depend_class{
    public:
        alpm_depend_class();
        alpm_depend_class(alpm_depend_t dep);
        ~alpm_depend_class();
        alpm_pkg_ver get_version();
        std::string get_name();
        std::string get_desc();
        unsigned long get_name_hash();
        alpm_depmod_t get_mod();
    private:
        alpm_depend_t dep_orig;
};