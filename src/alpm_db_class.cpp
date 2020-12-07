#include "alpm_db_class.hpp"
alpm_db_class::alpm_db_class(alpm_db_t* db){
    db_ptr=db;
}
alpm_db_class::~alpm_db_class(){
    //nothing to do
}
alpm_pkg_class alpm_db_class::get_pkg(std::string pkgname){
    return alpm_pkg_class(alpm_db_get_pkg(db_ptr,pkgname.c_str()));
}