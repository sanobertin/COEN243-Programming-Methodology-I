cmake_minimum_required(VERSION 3.27)
project(COEN243)

set(CMAKE_CXX_STANDARD 20)
if (APPLE)
    SET(CMAKE_OSX_ARCHITECTURES arm64)
endif ()

#GLOB_RECURSE
file(GLOB ALL
        "*.cpp")

foreach(file ${ALL})
    #extract just the file name and extension
    get_filename_component(fname ${file} NAME)
    message(STATUS "Adding target for ${fname}")
    #add target for just that file
    add_executable(${fname} ${fname})
endforeach()


#target_link_directories(${PROJECT_SOURCE_DIR})
#target_link_libraries(${PROJECT_SOURCE_DIR})
#add_executable(MY Assignment4/Employee.cpp Assignment4/Employee.h Assignment4/testemployee.cpp)
#include_directories(${PROJECT_SOURCE_DIR}/Assignment4)

add_subdirectory(${PROJECT_SOURCE_DIR}/Assignment4) # This line ensure all files in Assignment4 folder are brought in!
add_subdirectory(${PROJECT_SOURCE_DIR}/Labs)
add_subdirectory(${PROJECT_SOURCE_DIR}/FinalProject)
add_subdirectory("${PROJECT_SOURCE_DIR}/STL ALGORITHMS")