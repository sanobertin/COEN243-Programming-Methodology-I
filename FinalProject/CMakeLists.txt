
# CMAKE file for the project
add_executable(FinalProject Employee.h Employee.cpp)
message(STATUS "Adding target for FinalProject")
add_executable(test test.cpp Employee.h Employee.cpp)
message(STATUS "Adding target for test-project")

