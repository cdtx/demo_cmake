cmake_minimum_required(VERSION 2.8)
include(externs/sugar/cmake/Sugar)

include(sugar_files)
include(sugar_include)
#-------------------------------------------------------
project(TEST)

add_subdirectory(src/lib)


sugar_include(src)

add_definitions(-DVERSION=3)
add_executable(test ${SOURCES_ALL})
target_link_libraries(test lib)

# Post build 
add_custom_command(TARGET test
    POST_BUILD
    COMMAND cp test ../../liv/
)
