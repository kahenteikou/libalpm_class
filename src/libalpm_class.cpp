#include "libalpm_class.hpp"
alpm_class::alpm_class(String root,String dbpath){
    alpm_errno_t alpm_err;
    handle=alpm_initialize(root.c_str(),dbpath.c_str(),&alpm_err);

}
alpm_class::~alpm_class(){
    alpm_release(handle);
}
alpm_db_class alpm_class::register_syncdb(String treename,int level){
    return alpm_db_class(alpm_register_syncdb(handle,treename.c_str(),level));
}
alpm_db_class alpm_class::get_localdb(){
    return alpm_db_class(alpm_get_localdb(handle));
}
Vector<alpm_db_class> alpm_class::get_syncdbs(){
    Vector<alpm_db_t*> ls_arraykun= to_array_pointer<alpm_db_t*>(alpm_get_syncdbs(handle));
    Vector<alpm_db_class> return_array;
    for(alpm_db_t* ptrkun : ls_arraykun){
        return_array.push_back(alpm_db_class(ptrkun));
    }
    return return_array;
}

template<class T> 
Vector<T> alpm_class::to_array_pointer(alpm_list_t* lskun){
    Vector<T> return_v_kun;
    to_array_p(lskun,&return_v_kun);
    return return_v_kun;
}
template<class T>
void alpm_class::to_array_p(alpm_list_t* lskun,Vector<T>* vectp){
    if(lskun->data != nullptr){
        vectp->push_back((T)lskun->data);
    }
    if(lskun->next !=nullptr){
        to_array_p((__alpm_list_t*)lskun->next,vectp);
    }
}
