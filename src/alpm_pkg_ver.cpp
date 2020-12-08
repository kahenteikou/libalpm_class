#include "alpm_pkg_ver.hpp"
alpm_pkg_ver::alpm_pkg_ver(std::string pkgver){
    pkgver_str=pkgver;
}
bool alpm_pkg_ver::operator ==(const alpm_pkg_ver &r) const{
    return pkgver_str == r.pkgver_str;
}
bool alpm_pkg_ver::operator !=(const alpm_pkg_ver &r) const{
    return !(pkgver_str == r.pkgver_str);
}
bool alpm_pkg_ver::operator <(const alpm_pkg_ver &r) const{
    const char* a=pkgver_str.c_str();
    const char* b=r.pkgver_str.c_str();
    char* pkg_result=(char*)alpm_pkg_vercmp(a,b);
    return (pkg_result == b);
}