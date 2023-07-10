cmake_minimum_required(VERSION 3.25)
project(COEN243)

set(CMAKE_CXX_STANDARD 20)

#Get every cpp file in the current directory
file(GLOB CPPFILES "*.cpp")
#Get every cpp file in sub directories
#add_subdirectory(Assignment1)
#for each cpp file found...
foreach(file ${CPPFILES})
    #extract just the file name and extension
    get_filename_component(fname ${file} NAME)
    message(STATUS "Adding target for ${fname}")
    #add target for just that file
    #add_executable(run_${fname} ${fname} "SimpleCalc.cpp" "Income_Tax_Calculator.cpp")
    add_executable(run_${fname} ${fname})
endforeach()