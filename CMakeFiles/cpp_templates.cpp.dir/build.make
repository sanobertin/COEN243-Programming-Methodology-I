# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.27

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /opt/homebrew/Cellar/cmake/3.27.3/bin/cmake

# The command to remove a file.
RM = /opt/homebrew/Cellar/cmake/3.27.3/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/bertin/clionprojects/COEN243

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/bertin/clionprojects/COEN243

# Include any dependencies generated for this target.
include CMakeFiles/cpp_templates.cpp.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/cpp_templates.cpp.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/cpp_templates.cpp.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/cpp_templates.cpp.dir/flags.make

CMakeFiles/cpp_templates.cpp.dir/cpp_templates.cpp.o: CMakeFiles/cpp_templates.cpp.dir/flags.make
CMakeFiles/cpp_templates.cpp.dir/cpp_templates.cpp.o: cpp_templates.cpp
CMakeFiles/cpp_templates.cpp.dir/cpp_templates.cpp.o: CMakeFiles/cpp_templates.cpp.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/bertin/clionprojects/COEN243/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/cpp_templates.cpp.dir/cpp_templates.cpp.o"
	/Applications/Xcode-beta.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/cpp_templates.cpp.dir/cpp_templates.cpp.o -MF CMakeFiles/cpp_templates.cpp.dir/cpp_templates.cpp.o.d -o CMakeFiles/cpp_templates.cpp.dir/cpp_templates.cpp.o -c /Users/bertin/clionprojects/COEN243/cpp_templates.cpp

CMakeFiles/cpp_templates.cpp.dir/cpp_templates.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/cpp_templates.cpp.dir/cpp_templates.cpp.i"
	/Applications/Xcode-beta.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/bertin/clionprojects/COEN243/cpp_templates.cpp > CMakeFiles/cpp_templates.cpp.dir/cpp_templates.cpp.i

CMakeFiles/cpp_templates.cpp.dir/cpp_templates.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/cpp_templates.cpp.dir/cpp_templates.cpp.s"
	/Applications/Xcode-beta.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/bertin/clionprojects/COEN243/cpp_templates.cpp -o CMakeFiles/cpp_templates.cpp.dir/cpp_templates.cpp.s

# Object files for target cpp_templates.cpp
cpp_templates_cpp_OBJECTS = \
"CMakeFiles/cpp_templates.cpp.dir/cpp_templates.cpp.o"

# External object files for target cpp_templates.cpp
cpp_templates_cpp_EXTERNAL_OBJECTS =

cpp_templates.cpp: CMakeFiles/cpp_templates.cpp.dir/cpp_templates.cpp.o
cpp_templates.cpp: CMakeFiles/cpp_templates.cpp.dir/build.make
cpp_templates.cpp: CMakeFiles/cpp_templates.cpp.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/Users/bertin/clionprojects/COEN243/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable cpp_templates.cpp"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/cpp_templates.cpp.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/cpp_templates.cpp.dir/build: cpp_templates.cpp
.PHONY : CMakeFiles/cpp_templates.cpp.dir/build

CMakeFiles/cpp_templates.cpp.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/cpp_templates.cpp.dir/cmake_clean.cmake
.PHONY : CMakeFiles/cpp_templates.cpp.dir/clean

CMakeFiles/cpp_templates.cpp.dir/depend:
	cd /Users/bertin/clionprojects/COEN243 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/bertin/clionprojects/COEN243 /Users/bertin/clionprojects/COEN243 /Users/bertin/clionprojects/COEN243 /Users/bertin/clionprojects/COEN243 /Users/bertin/clionprojects/COEN243/CMakeFiles/cpp_templates.cpp.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/cpp_templates.cpp.dir/depend

