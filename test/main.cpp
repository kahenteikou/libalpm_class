#include "libalpm_class.hpp"
#include <iostream>
int main(int argc,char** argv){
    alpm_class alpmkun("/","/var/lib/pacman");
    alpm_db_class localdbkun=alpmkun.get_localdb();
    alpm_pkg_class bash_pkg=localdbkun.get_pkg("bash");
    std::vector<alpm_depend_class> dep_vect=bash_pkg.get_depends_packages();
    for(alpm_depend_class depniki:dep_vect){
        std::cout << "name : " << depniki.get_name() << std::endl;
    }
    return 0;
}