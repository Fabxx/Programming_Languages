#project name
project(main)

#checking for min version of cmake
cmake_minimum_required(VERSION 3.10)

#checking GTK packages, this is used for any external libraries.
FIND_PACKAGE(PkgConfig REQUIRED)
PKG_CHECK_MODULES(GTK REQUIRED gtk+-3.0) #replace gtk+-3.0 with the actual package name if there are external libraries to include.

#including library directories, from extra packages too.
include_directories(include)
include_directories(${GTK_INCLUDE_DIRS})
link_directories(${GTK_LIBRARY_DIRS})

#adding source .cpp files directory
aux_source_directory(src SOURCE)
aux_source_directory(include INCLUDE)

#creating executable with sources
add_executable(main ${SOURCE})

#linking external libraries to executable
target_link_libraries(main ${INCLUDE} ${GTK_LIBRARIES})
