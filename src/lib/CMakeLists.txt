cmake_minimum_required(VERSION 2.8)
include(../../externs/sugar/cmake/Sugar)

include(sugar_files)
include(sugar_include)
#-------------------------------------------------------

PROJECT(LIB)

add_definitions(-DBUILDING_LIB=y)
add_library(lib SHARED
    lib.c    
)

# Post build 
add_custom_command(TARGET lib
    POST_BUILD
    COMMAND cp ${CMAKE_RUNTIME_OUTPUT_DIRECTORY_DEBUG}/${CMAKE_SHARED_LIBRARY_PREFIX}lib${CMAKE_SHARED_LIBRARY_SUFFIX} ${CMAKE_SOURCE_DIR}/liv
)
