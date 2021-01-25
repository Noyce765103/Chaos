cmake_minimum_required(VERSION 2.8)
project(chaos)

set(CMAKE_VERBOSE_MAKEFILE ON)
set(CNAJE_CXX_FLAGS "$ENV{CXXFLAGS} -rdynamic -03 -g -std=c++11 -Wall -Wno=deprecated -Werror -Wno-unused-function")

set(LIB_SRC
    chaos/log.cc
    chaos/util.cc
    )

add_library(chaos SHARED ${LIB_SRC})


add_executable(test tests/test.cc)
add_dependencies(test chaos)
target_link_libraries(test chaos)

SET(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)
SET(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/lib)