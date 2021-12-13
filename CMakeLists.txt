cmake_minimum_required(VERSION 3.0.0)
project(onvif VERSION 0.1.0)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

#set(CMAKE_CXX_FLAGS "-Wall -g")

aux_source_directory(./src DIR_SRCS)
# aux_source_directory(./src/custom DIR_SRCS_CUSTOM)
# add_executable(onvif main.cpp ${DIR_SRCS} ${DIR_SRCS_CUSTOM})

add_executable(onvif main.cpp ${DIR_SRCS})

# include_directories(/usr/include/c++/9/)
include_directories(./include)
# include_directories(${PROJECT_SOURCE_DIR}/include/custom)
