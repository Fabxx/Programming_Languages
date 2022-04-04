#project name
project(main)

#checking for min version of cmake
cmake_minimum_required(VERSION 3.10)

#including library directories, from extra packages too.
include_directories(include)

#adding source .cpp files directory
aux_source_directory(src SOURCE)
aux_source_directory(include INCLUDE)

#creating executable with sources
add_executable(main ${SOURCE})

#linking external libraries to executable
target_link_libraries(main ${INCLUDE})
