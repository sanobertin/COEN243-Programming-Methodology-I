
# CMAKE file for the project
add_executable("COEN243FinalProject" Driver.cpp Employee.h Employee.cpp)
message(STATUS "Adding target for COEN243FinalProject")

add_executable(test test.cpp Employee.h Employee.cpp)

