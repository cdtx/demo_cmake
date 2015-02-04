# sugar.cmake is an include file, so header guards required
# to prevent collisions make guard variable name like that: <PROJECT>_<PATH>_SUGAR_CMAKE_
# (compare to C++: http://google-styleguide.googlecode.com/svn/trunk/cppguide.xml, see 'The #define Guard')
if(DEFINED ${PROJECT_NAME}_${CMAKE_CURRENT_LIST_DIR}_SUGAR_CMAKE)
  return()
else()
    set(${PROJECT_NAME}_${CMAKE_CURRENT_LIST_DIR}_SUGAR_CMAKE 1)
endif()

# load 'sugar_include.cmake' and 'sugar_files.cmake' modules with 'sugar_include' and 'sugar_files' macroses
include(sugar_include)
include(sugar_files)
#-------------------------------------------------------

# List sub directories
sugar_include(gp)

# list files
sugar_files(SOURCES_ALL
    main.c
)

