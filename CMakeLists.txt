cmake_minimum_required(VERSION 2.9)
project(alpm_class CXX)
set(CMAKE_INCLUDE_CURRENT_DIR_IN_INTERFACE ON) 
add_subdirectory(src)
target_include_directories(alpm_class PRIVATE include/)
add_executable(alpm_class_test test/main.cpp)
target_include_directories(alpm_class_test PRIVATE include/)
target_link_libraries(alpm_class_test alpm_class)

set_target_properties(alpm_class PROPERTIES
        PUBLIC_HEADER "include/libalpm_class.hpp"
)
install(TARGETS alpm_class
    EXPORT alpm_class-export
    LIBRARY        DESTINATION lib  
    INCLUDES       DESTINATION include
    PUBLIC_HEADER  DESTINATION include/libalpm_class)
install(EXPORT alpm_class-export
    FILE alpm_class-config.cmake
    DESTINATION share/cmake/libalpm_class/
    )
