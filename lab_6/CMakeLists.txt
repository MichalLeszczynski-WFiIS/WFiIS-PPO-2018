cmake_minimum_required(VERSION 3.7)

PROJECT( Lab06 )
ADD_SUBDIRECTORY( src )
ADD_SUBDIRECTORY( include )
include_directories(${CMAKE_SOURCE_DIR} "include")
file(GLOB SOURCE.cpp RELATIVE ${CMAKE_CURRENT_LIST_DIR} "src/*.cpp")
file(GLOB HEADERS.h RELATIVE ${CMAKE_CURRENT_LIST_DIR} "include/*.h")


#testy
#list(REMOVE_ITEM cpps "src/test.cpp")



ADD_EXECUTABLE( Lab06 ${SOURCE.cpp} )

set(CMAKE_BUILD_TYPE Release)
set(CMAKE_CXX_FLAGS_DEBUG "-g -Wall -O0")
set(CMAKE_CXX_FLAGS_RELEASE "-Wall -O3")


