FILE(GLOB alpm_class_src *.cpp)
add_library(alpm_class
  SHARED
    ${alpm_class_src}
  )
target_link_libraries(alpm_class alpm)