cmake_minimum_required(VERSION 3.27)
project(COEN243)
set(CMAKE_CXX_STANDARD 17)
#Start of interactive messages
message("\n\nWelcome to COEN243 Project")
message("CMAKE Version: 3.27")
message("C++${CMAKE_CXX_STANDARD} Standard")
message("Current system: ${CMAKE_SYSTEM}")
message("System name: ${CMAKE_SYSTEM_NAME}")
message("Processor: ${CMAKE_SYSTEM_PROCESSOR}")
message("\n")
#end of messages
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

#add_subdirectory(${PROJECT_SOURCE_DIR}/Assignment4) # This line ensure all files in Assignment4 folder are brought in!
#add_subdirectory(${PROJECT_SOURCE_DIR}/Labs)
#add_subdirectory(${PROJECT_SOURCE_DIR}/FinalProject)
#add_subdirectory("${PROJECT_SOURCE_DIR}/STL ALGORITHMS")
add_subdirectory("${PROJECT_SOURCE_DIR}/STL")