cmake_minimum_required(VERSION 2.8)
include(../../externs/sugar/cmake/Sugar)

include(sugar_files)
include(sugar_include)
#-------------------------------------------------------

PROJECT(LIB)

add_library(lib SHARED
    lib.c    
)

# Post build 
add_custom_command(TARGET lib
    POST_BUILD
    COMMAND echo ${CMAKE_SOURCE_DIR}
    COMMAND cp ${CMAKE_SHARED_LIBRARY_PREFIX}lib${CMAKE_SHARED_LIBRARY_SUFFIX} ${CMAKE_SOURCE_DIR}/liv
)
