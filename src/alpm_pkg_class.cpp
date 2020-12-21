#include "alpm_pkg_class.hpp"

typedef std::string String;
template<typename T>
using Vector=std::vector<T>;
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

Vector<alpm_pkg_class> alpm_pkg_class::get_depends_packages(){

}
template<class T> 
Vector<T> alpm_pkg_class::to_array_pointer(alpm_list_t* lskun){
    Vector<T> return_v_kun;
    to_array_p(lskun,&return_v_kun);
    return return_v_kun;
}
template<class T>
void alpm_pkg_class::to_array_p(alpm_list_t* lskun,Vector<T>* vectp){
    if(lskun->data != nullptr){
        vectp->push_back((T)lskun->data);
    }
    if(lskun->next !=nullptr){
        to_array_p((__alpm_list_t*)lskun->next,vectp);
    }
}
