cmake_minimum_required(VERSION 2.8)
include(externs/sugar/cmake/Sugar)

include(sugar_files)
include(sugar_include)

SET( CMAKE_RUNTIME_OUTPUT_DIRECTORY_DEBUG "${OUTPUT_DIRECTORY}")
SET( CMAKE_RUNTIME_OUTPUT_DIRECTORY_RELEASE "${OUTPUT_DIRECTORY}")
SET( CMAKE_LIBRARY_OUTPUT_DIRECTORY_DEBUG "${OUTPUT_DIRECTORY}")
SET( CMAKE_LIBRARY_OUTPUT_DIRECTORY_RELEASE "${OUTPUT_DIRECTORY}")
SET( CMAKE_ARCHIVE_OUTPUT_DIRECTORY_DEBUG "${OUTPUT_DIRECTORY}")
SET( CMAKE_ARCHIVE_OUTPUT_DIRECTORY_RELEASE "${OUTPUT_DIRECTORY}")


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
    COMMAND cp ${CMAKE_CURRENT_SOURCE_DIR}/test${CMAKE_EXECUTABLE_SUFFIX} ${CMAKE_SOURCE_DIR}/liv
)
