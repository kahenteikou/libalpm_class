#include "alpm_pkg_class.hpp"
alpm_pkg_class::alpm_pkg_class(alpm_pkg_t* pkgkun){
    pkgptr=pkgkun;
}
alpm_pkg_class::~alpm_pkg_class(){
    alpm_pkg_free(pkgptr);
}
alpm_pkg_class::operator alpm_pkg_t*(){
    return pkgptr;
}
alpm_pkg_ver alpm_pkg_class::get_version(){
    return alpm_pkg_ver(alpm_pkg_get_version(pkgptr));
}