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
include assignments/a2-interpolation/CMakeFiles/a2-unique.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include assignments/a2-interpolation/CMakeFiles/a2-unique.dir/compiler_depend.make

# Include the progress variables for this target.
include assignments/a2-interpolation/CMakeFiles/a2-unique.dir/progress.make

# Include the compile flags for this target's objects.
include assignments/a2-interpolation/CMakeFiles/a2-unique.dir/flags.make

assignments/a2-interpolation/CMakeFiles/a2-unique.dir/unique.cpp.o: assignments/a2-interpolation/CMakeFiles/a2-unique.dir/flags.make
assignments/a2-interpolation/CMakeFiles/a2-unique.dir/unique.cpp.o: ../assignments/a2-interpolation/unique.cpp
assignments/a2-interpolation/CMakeFiles/a2-unique.dir/unique.cpp.o: assignments/a2-interpolation/CMakeFiles/a2-unique.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/williamlawrence/Documents/animation-toolkit/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object assignments/a2-interpolation/CMakeFiles/a2-unique.dir/unique.cpp.o"
	cd /Users/williamlawrence/Documents/animation-toolkit/build/assignments/a2-interpolation && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT assignments/a2-interpolation/CMakeFiles/a2-unique.dir/unique.cpp.o -MF CMakeFiles/a2-unique.dir/unique.cpp.o.d -o CMakeFiles/a2-unique.dir/unique.cpp.o -c /Users/williamlawrence/Documents/animation-toolkit/assignments/a2-interpolation/unique.cpp

assignments/a2-interpolation/CMakeFiles/a2-unique.dir/unique.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/a2-unique.dir/unique.cpp.i"
	cd /Users/williamlawrence/Documents/animation-toolkit/build/assignments/a2-interpolation && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/williamlawrence/Documents/animation-toolkit/assignments/a2-interpolation/unique.cpp > CMakeFiles/a2-unique.dir/unique.cpp.i

assignments/a2-interpolation/CMakeFiles/a2-unique.dir/unique.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/a2-unique.dir/unique.cpp.s"
	cd /Users/williamlawrence/Documents/animation-toolkit/build/assignments/a2-interpolation && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/williamlawrence/Documents/animation-toolkit/assignments/a2-interpolation/unique.cpp -o CMakeFiles/a2-unique.dir/unique.cpp.s

# Object files for target a2-unique
a2__unique_OBJECTS = \
"CMakeFiles/a2-unique.dir/unique.cpp.o"

# External object files for target a2-unique
a2__unique_EXTERNAL_OBJECTS =

../bin/a2-unique: assignments/a2-interpolation/CMakeFiles/a2-unique.dir/unique.cpp.o
../bin/a2-unique: assignments/a2-interpolation/CMakeFiles/a2-unique.dir/build.make
../bin/a2-unique: ../lib/libatkui.a
../bin/a2-unique: ../lib/libatk.a
../bin/a2-unique: ../lib/libagl.a
../bin/a2-unique: /usr/local/lib/libGLEW.dylib
../bin/a2-unique: /usr/local/lib/libglfw.dylib
../bin/a2-unique: assignments/a2-interpolation/CMakeFiles/a2-unique.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/williamlawrence/Documents/animation-toolkit/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ../../../bin/a2-unique"
	cd /Users/williamlawrence/Documents/animation-toolkit/build/assignments/a2-interpolation && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/a2-unique.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
assignments/a2-interpolation/CMakeFiles/a2-unique.dir/build: ../bin/a2-unique
.PHONY : assignments/a2-interpolation/CMakeFiles/a2-unique.dir/build

assignments/a2-interpolation/CMakeFiles/a2-unique.dir/clean:
	cd /Users/williamlawrence/Documents/animation-toolkit/build/assignments/a2-interpolation && $(CMAKE_COMMAND) -P CMakeFiles/a2-unique.dir/cmake_clean.cmake
.PHONY : assignments/a2-interpolation/CMakeFiles/a2-unique.dir/clean

assignments/a2-interpolation/CMakeFiles/a2-unique.dir/depend:
	cd /Users/williamlawrence/Documents/animation-toolkit/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/williamlawrence/Documents/animation-toolkit /Users/williamlawrence/Documents/animation-toolkit/assignments/a2-interpolation /Users/williamlawrence/Documents/animation-toolkit/build /Users/williamlawrence/Documents/animation-toolkit/build/assignments/a2-interpolation /Users/williamlawrence/Documents/animation-toolkit/build/assignments/a2-interpolation/CMakeFiles/a2-unique.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : assignments/a2-interpolation/CMakeFiles/a2-unique.dir/depend

