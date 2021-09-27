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
include libsrc/atkui/CMakeFiles/atkui.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include libsrc/atkui/CMakeFiles/atkui.dir/compiler_depend.make

# Include the progress variables for this target.
include libsrc/atkui/CMakeFiles/atkui.dir/progress.make

# Include the compile flags for this target's objects.
include libsrc/atkui/CMakeFiles/atkui.dir/flags.make

libsrc/atkui/CMakeFiles/atkui.dir/framework.cpp.o: libsrc/atkui/CMakeFiles/atkui.dir/flags.make
libsrc/atkui/CMakeFiles/atkui.dir/framework.cpp.o: ../libsrc/atkui/framework.cpp
libsrc/atkui/CMakeFiles/atkui.dir/framework.cpp.o: libsrc/atkui/CMakeFiles/atkui.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/williamlawrence/Documents/animation-toolkit/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object libsrc/atkui/CMakeFiles/atkui.dir/framework.cpp.o"
	cd /Users/williamlawrence/Documents/animation-toolkit/build/libsrc/atkui && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT libsrc/atkui/CMakeFiles/atkui.dir/framework.cpp.o -MF CMakeFiles/atkui.dir/framework.cpp.o.d -o CMakeFiles/atkui.dir/framework.cpp.o -c /Users/williamlawrence/Documents/animation-toolkit/libsrc/atkui/framework.cpp

libsrc/atkui/CMakeFiles/atkui.dir/framework.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/atkui.dir/framework.cpp.i"
	cd /Users/williamlawrence/Documents/animation-toolkit/build/libsrc/atkui && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/williamlawrence/Documents/animation-toolkit/libsrc/atkui/framework.cpp > CMakeFiles/atkui.dir/framework.cpp.i

libsrc/atkui/CMakeFiles/atkui.dir/framework.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/atkui.dir/framework.cpp.s"
	cd /Users/williamlawrence/Documents/animation-toolkit/build/libsrc/atkui && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/williamlawrence/Documents/animation-toolkit/libsrc/atkui/framework.cpp -o CMakeFiles/atkui.dir/framework.cpp.s

# Object files for target atkui
atkui_OBJECTS = \
"CMakeFiles/atkui.dir/framework.cpp.o"

# External object files for target atkui
atkui_EXTERNAL_OBJECTS =

../lib/libatkui.a: libsrc/atkui/CMakeFiles/atkui.dir/framework.cpp.o
../lib/libatkui.a: libsrc/atkui/CMakeFiles/atkui.dir/build.make
../lib/libatkui.a: libsrc/atkui/CMakeFiles/atkui.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/williamlawrence/Documents/animation-toolkit/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library ../../../lib/libatkui.a"
	cd /Users/williamlawrence/Documents/animation-toolkit/build/libsrc/atkui && $(CMAKE_COMMAND) -P CMakeFiles/atkui.dir/cmake_clean_target.cmake
	cd /Users/williamlawrence/Documents/animation-toolkit/build/libsrc/atkui && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/atkui.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
libsrc/atkui/CMakeFiles/atkui.dir/build: ../lib/libatkui.a
.PHONY : libsrc/atkui/CMakeFiles/atkui.dir/build

libsrc/atkui/CMakeFiles/atkui.dir/clean:
	cd /Users/williamlawrence/Documents/animation-toolkit/build/libsrc/atkui && $(CMAKE_COMMAND) -P CMakeFiles/atkui.dir/cmake_clean.cmake
.PHONY : libsrc/atkui/CMakeFiles/atkui.dir/clean

libsrc/atkui/CMakeFiles/atkui.dir/depend:
	cd /Users/williamlawrence/Documents/animation-toolkit/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/williamlawrence/Documents/animation-toolkit /Users/williamlawrence/Documents/animation-toolkit/libsrc/atkui /Users/williamlawrence/Documents/animation-toolkit/build /Users/williamlawrence/Documents/animation-toolkit/build/libsrc/atkui /Users/williamlawrence/Documents/animation-toolkit/build/libsrc/atkui/CMakeFiles/atkui.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : libsrc/atkui/CMakeFiles/atkui.dir/depend

