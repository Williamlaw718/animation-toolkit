# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.21

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
CMAKE_COMMAND = /usr/local/Cellar/cmake/3.21.2/bin/cmake

# The command to remove a file.
RM = /usr/local/Cellar/cmake/3.21.2/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/williamlawrence/Documents/animation-toolkit

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/williamlawrence/Documents/animation-toolkit/build

# Include any dependencies generated for this target.
include assignments/a1-hello/CMakeFiles/a1-circles.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include assignments/a1-hello/CMakeFiles/a1-circles.dir/compiler_depend.make

# Include the progress variables for this target.
include assignments/a1-hello/CMakeFiles/a1-circles.dir/progress.make

# Include the compile flags for this target's objects.
include assignments/a1-hello/CMakeFiles/a1-circles.dir/flags.make

assignments/a1-hello/CMakeFiles/a1-circles.dir/circles.cpp.o: assignments/a1-hello/CMakeFiles/a1-circles.dir/flags.make
assignments/a1-hello/CMakeFiles/a1-circles.dir/circles.cpp.o: ../assignments/a1-hello/circles.cpp
assignments/a1-hello/CMakeFiles/a1-circles.dir/circles.cpp.o: assignments/a1-hello/CMakeFiles/a1-circles.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/williamlawrence/Documents/animation-toolkit/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object assignments/a1-hello/CMakeFiles/a1-circles.dir/circles.cpp.o"
	cd /Users/williamlawrence/Documents/animation-toolkit/build/assignments/a1-hello && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT assignments/a1-hello/CMakeFiles/a1-circles.dir/circles.cpp.o -MF CMakeFiles/a1-circles.dir/circles.cpp.o.d -o CMakeFiles/a1-circles.dir/circles.cpp.o -c /Users/williamlawrence/Documents/animation-toolkit/assignments/a1-hello/circles.cpp

assignments/a1-hello/CMakeFiles/a1-circles.dir/circles.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/a1-circles.dir/circles.cpp.i"
	cd /Users/williamlawrence/Documents/animation-toolkit/build/assignments/a1-hello && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/williamlawrence/Documents/animation-toolkit/assignments/a1-hello/circles.cpp > CMakeFiles/a1-circles.dir/circles.cpp.i

assignments/a1-hello/CMakeFiles/a1-circles.dir/circles.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/a1-circles.dir/circles.cpp.s"
	cd /Users/williamlawrence/Documents/animation-toolkit/build/assignments/a1-hello && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/williamlawrence/Documents/animation-toolkit/assignments/a1-hello/circles.cpp -o CMakeFiles/a1-circles.dir/circles.cpp.s

# Object files for target a1-circles
a1__circles_OBJECTS = \
"CMakeFiles/a1-circles.dir/circles.cpp.o"

# External object files for target a1-circles
a1__circles_EXTERNAL_OBJECTS =

../bin/a1-circles: assignments/a1-hello/CMakeFiles/a1-circles.dir/circles.cpp.o
../bin/a1-circles: assignments/a1-hello/CMakeFiles/a1-circles.dir/build.make
../bin/a1-circles: ../lib/libatkui.a
../bin/a1-circles: ../lib/libatk.a
../bin/a1-circles: ../lib/libagl.a
../bin/a1-circles: /usr/local/lib/libGLEW.dylib
../bin/a1-circles: /usr/local/lib/libglfw.dylib
../bin/a1-circles: assignments/a1-hello/CMakeFiles/a1-circles.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/williamlawrence/Documents/animation-toolkit/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ../../../bin/a1-circles"
	cd /Users/williamlawrence/Documents/animation-toolkit/build/assignments/a1-hello && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/a1-circles.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
assignments/a1-hello/CMakeFiles/a1-circles.dir/build: ../bin/a1-circles
.PHONY : assignments/a1-hello/CMakeFiles/a1-circles.dir/build

assignments/a1-hello/CMakeFiles/a1-circles.dir/clean:
	cd /Users/williamlawrence/Documents/animation-toolkit/build/assignments/a1-hello && $(CMAKE_COMMAND) -P CMakeFiles/a1-circles.dir/cmake_clean.cmake
.PHONY : assignments/a1-hello/CMakeFiles/a1-circles.dir/clean

assignments/a1-hello/CMakeFiles/a1-circles.dir/depend:
	cd /Users/williamlawrence/Documents/animation-toolkit/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/williamlawrence/Documents/animation-toolkit /Users/williamlawrence/Documents/animation-toolkit/assignments/a1-hello /Users/williamlawrence/Documents/animation-toolkit/build /Users/williamlawrence/Documents/animation-toolkit/build/assignments/a1-hello /Users/williamlawrence/Documents/animation-toolkit/build/assignments/a1-hello/CMakeFiles/a1-circles.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : assignments/a1-hello/CMakeFiles/a1-circles.dir/depend

