#include "libalpm_class.hpp"
alpm_class::alpm_class(String root,String dbpath){
    alpm_errno_t alpm_err;
    handle=alpm_initialize(root.c_str(),dbpath.c_str(),&alpm_err);

}
alpm_class::~alpm_class(){
    alpm_release(handle);
}