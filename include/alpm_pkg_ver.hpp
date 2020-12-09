#pragma once
#include <alpm.h>
#include <string>
class alpm_pkg_ver{
    public:
        alpm_pkg_ver(std::string pkgver);
        bool operator ==(const alpm_pkg_ver &r) const;
        bool operator !=(const alpm_pkg_ver &r) const;
        bool operator <(const alpm_pkg_ver &r) const;
        bool operator >(const alpm_pkg_ver &r) const;
        bool operator <=(const alpm_pkg_ver &r) const;
        bool operator >=(const alpm_pkg_ver &r) const;
    private:
        std::string pkgver_str;
};