# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

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
CMAKE_COMMAND = /usr/local/Cellar/cmake/3.22.0/bin/cmake

# The command to remove a file.
RM = /usr/local/Cellar/cmake/3.22.0/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/bernardocohen/repos/dsa/cpp/tests

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/bernardocohen/repos/dsa/cpp/tests/build

# Include any dependencies generated for this target.
include CMakeFiles/week3.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/week3.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/week3.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/week3.dir/flags.make

CMakeFiles/week3.dir/src/week3.cpp.o: CMakeFiles/week3.dir/flags.make
CMakeFiles/week3.dir/src/week3.cpp.o: ../src/week3.cpp
CMakeFiles/week3.dir/src/week3.cpp.o: CMakeFiles/week3.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/bernardocohen/repos/dsa/cpp/tests/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/week3.dir/src/week3.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/week3.dir/src/week3.cpp.o -MF CMakeFiles/week3.dir/src/week3.cpp.o.d -o CMakeFiles/week3.dir/src/week3.cpp.o -c /Users/bernardocohen/repos/dsa/cpp/tests/src/week3.cpp

CMakeFiles/week3.dir/src/week3.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/week3.dir/src/week3.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/bernardocohen/repos/dsa/cpp/tests/src/week3.cpp > CMakeFiles/week3.dir/src/week3.cpp.i

CMakeFiles/week3.dir/src/week3.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/week3.dir/src/week3.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/bernardocohen/repos/dsa/cpp/tests/src/week3.cpp -o CMakeFiles/week3.dir/src/week3.cpp.s

# Object files for target week3
week3_OBJECTS = \
"CMakeFiles/week3.dir/src/week3.cpp.o"

# External object files for target week3
week3_EXTERNAL_OBJECTS =

../bin/week3: CMakeFiles/week3.dir/src/week3.cpp.o
../bin/week3: CMakeFiles/week3.dir/build.make
../bin/week3: /usr/local/lib/libdsa.dylib
../bin/week3: CMakeFiles/week3.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/bernardocohen/repos/dsa/cpp/tests/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ../bin/week3"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/week3.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/week3.dir/build: ../bin/week3
.PHONY : CMakeFiles/week3.dir/build

CMakeFiles/week3.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/week3.dir/cmake_clean.cmake
.PHONY : CMakeFiles/week3.dir/clean

CMakeFiles/week3.dir/depend:
	cd /Users/bernardocohen/repos/dsa/cpp/tests/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/bernardocohen/repos/dsa/cpp/tests /Users/bernardocohen/repos/dsa/cpp/tests /Users/bernardocohen/repos/dsa/cpp/tests/build /Users/bernardocohen/repos/dsa/cpp/tests/build /Users/bernardocohen/repos/dsa/cpp/tests/build/CMakeFiles/week3.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/week3.dir/depend

