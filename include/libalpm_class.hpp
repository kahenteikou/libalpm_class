#pragma once
#include <alpm.h>
#include <string>
#define String  std::string
class alpm_class{
    public:
        alpm_class(String root,String dbpath);
        ~alpm_class();
    private:
        alpm_handle_t* handle;
};