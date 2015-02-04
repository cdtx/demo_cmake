cmake_minimum_required(VERSION 2.8)
include(../../externs/sugar/cmake/Sugar)

include(sugar_files)
include(sugar_include)
#-------------------------------------------------------

PROJECT(LIB)

add_library(lib SHARED
    lib.c    
)
