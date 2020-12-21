#include "alpm_depend_class.hpp"
alpm_depend_class::alpm_depend_class(alpm_depend_t dep){
    dep_orig=dep;
}
alpm_depend_class::~alpm_depend_class(){
}
alpm_pkg_ver alpm_depend_class::get_version(){
    return alpm_pkg_ver(dep_orig.version);
}
std::string alpm_depend_class::get_name(){
    return dep_orig.name;
}
std::string alpm_depend_class::get_desc(){
    return dep_orig.desc;
}
unsigned long alpm_depend_class::get_name_hash(){
    return dep_orig.name_hash;
}
alpm_depmod_t alpm_depend_class::get_mod(){
    return dep_orig.mod;
}