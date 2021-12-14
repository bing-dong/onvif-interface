cmake_minimum_required(VERSION 3.0.0)
project(onvif VERSION 0.1.0)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)
#set(CMAKE_CXX_FLAGS "-Wall -g")

# define preprocessor macro
add_compile_definitions(WITH_OPENSSL)

# for onvif auth
find_package(OpenSSL REQUIRED)
if( OpenSSL_FOUND )
  include_directories(${OPENSSL_INCLUDE_DIRS})
  message(STATUS "Using OpenSSL ${OPENSSL_VERSION}")
else()
  message(FATAL_ERROR "Can not find OpenSSL")
endif()

# header & source
include_directories(./include)
aux_source_directory(./src DIR_SRCS)

# aux_source_directory(./src/custom DIR_SRCS_CUSTOM)
# add_executable(onvif main.cpp ${DIR_SRCS} ${DIR_SRCS_CUSTOM})
# include_directories(${PROJECT_SOURCE_DIR}/include/custom)

# exe
add_executable(onvif main.cpp ${DIR_SRCS})

# lib
target_link_libraries(onvif ${OPENSSL_LIBRARIES})
