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
include libsrc/atk/CMakeFiles/atk.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include libsrc/atk/CMakeFiles/atk.dir/compiler_depend.make

# Include the progress variables for this target.
include libsrc/atk/CMakeFiles/atk.dir/progress.make

# Include the compile flags for this target's objects.
include libsrc/atk/CMakeFiles/atk.dir/flags.make

libsrc/atk/CMakeFiles/atk.dir/transform.cpp.o: libsrc/atk/CMakeFiles/atk.dir/flags.make
libsrc/atk/CMakeFiles/atk.dir/transform.cpp.o: ../libsrc/atk/transform.cpp
libsrc/atk/CMakeFiles/atk.dir/transform.cpp.o: libsrc/atk/CMakeFiles/atk.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/williamlawrence/Documents/animation-toolkit/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object libsrc/atk/CMakeFiles/atk.dir/transform.cpp.o"
	cd /Users/williamlawrence/Documents/animation-toolkit/build/libsrc/atk && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT libsrc/atk/CMakeFiles/atk.dir/transform.cpp.o -MF CMakeFiles/atk.dir/transform.cpp.o.d -o CMakeFiles/atk.dir/transform.cpp.o -c /Users/williamlawrence/Documents/animation-toolkit/libsrc/atk/transform.cpp

libsrc/atk/CMakeFiles/atk.dir/transform.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/atk.dir/transform.cpp.i"
	cd /Users/williamlawrence/Documents/animation-toolkit/build/libsrc/atk && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/williamlawrence/Documents/animation-toolkit/libsrc/atk/transform.cpp > CMakeFiles/atk.dir/transform.cpp.i

libsrc/atk/CMakeFiles/atk.dir/transform.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/atk.dir/transform.cpp.s"
	cd /Users/williamlawrence/Documents/animation-toolkit/build/libsrc/atk && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/williamlawrence/Documents/animation-toolkit/libsrc/atk/transform.cpp -o CMakeFiles/atk.dir/transform.cpp.s

libsrc/atk/CMakeFiles/atk.dir/bvhreader.cpp.o: libsrc/atk/CMakeFiles/atk.dir/flags.make
libsrc/atk/CMakeFiles/atk.dir/bvhreader.cpp.o: ../libsrc/atk/bvhreader.cpp
libsrc/atk/CMakeFiles/atk.dir/bvhreader.cpp.o: libsrc/atk/CMakeFiles/atk.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/williamlawrence/Documents/animation-toolkit/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object libsrc/atk/CMakeFiles/atk.dir/bvhreader.cpp.o"
	cd /Users/williamlawrence/Documents/animation-toolkit/build/libsrc/atk && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT libsrc/atk/CMakeFiles/atk.dir/bvhreader.cpp.o -MF CMakeFiles/atk.dir/bvhreader.cpp.o.d -o CMakeFiles/atk.dir/bvhreader.cpp.o -c /Users/williamlawrence/Documents/animation-toolkit/libsrc/atk/bvhreader.cpp

libsrc/atk/CMakeFiles/atk.dir/bvhreader.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/atk.dir/bvhreader.cpp.i"
	cd /Users/williamlawrence/Documents/animation-toolkit/build/libsrc/atk && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/williamlawrence/Documents/animation-toolkit/libsrc/atk/bvhreader.cpp > CMakeFiles/atk.dir/bvhreader.cpp.i

libsrc/atk/CMakeFiles/atk.dir/bvhreader.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/atk.dir/bvhreader.cpp.s"
	cd /Users/williamlawrence/Documents/animation-toolkit/build/libsrc/atk && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/williamlawrence/Documents/animation-toolkit/libsrc/atk/bvhreader.cpp -o CMakeFiles/atk.dir/bvhreader.cpp.s

libsrc/atk/CMakeFiles/atk.dir/bvhwriter.cpp.o: libsrc/atk/CMakeFiles/atk.dir/flags.make
libsrc/atk/CMakeFiles/atk.dir/bvhwriter.cpp.o: ../libsrc/atk/bvhwriter.cpp
libsrc/atk/CMakeFiles/atk.dir/bvhwriter.cpp.o: libsrc/atk/CMakeFiles/atk.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/williamlawrence/Documents/animation-toolkit/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object libsrc/atk/CMakeFiles/atk.dir/bvhwriter.cpp.o"
	cd /Users/williamlawrence/Documents/animation-toolkit/build/libsrc/atk && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT libsrc/atk/CMakeFiles/atk.dir/bvhwriter.cpp.o -MF CMakeFiles/atk.dir/bvhwriter.cpp.o.d -o CMakeFiles/atk.dir/bvhwriter.cpp.o -c /Users/williamlawrence/Documents/animation-toolkit/libsrc/atk/bvhwriter.cpp

libsrc/atk/CMakeFiles/atk.dir/bvhwriter.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/atk.dir/bvhwriter.cpp.i"
	cd /Users/williamlawrence/Documents/animation-toolkit/build/libsrc/atk && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/williamlawrence/Documents/animation-toolkit/libsrc/atk/bvhwriter.cpp > CMakeFiles/atk.dir/bvhwriter.cpp.i

libsrc/atk/CMakeFiles/atk.dir/bvhwriter.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/atk.dir/bvhwriter.cpp.s"
	cd /Users/williamlawrence/Documents/animation-toolkit/build/libsrc/atk && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/williamlawrence/Documents/animation-toolkit/libsrc/atk/bvhwriter.cpp -o CMakeFiles/atk.dir/bvhwriter.cpp.s

libsrc/atk/CMakeFiles/atk.dir/skeleton.cpp.o: libsrc/atk/CMakeFiles/atk.dir/flags.make
libsrc/atk/CMakeFiles/atk.dir/skeleton.cpp.o: ../libsrc/atk/skeleton.cpp
libsrc/atk/CMakeFiles/atk.dir/skeleton.cpp.o: libsrc/atk/CMakeFiles/atk.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/williamlawrence/Documents/animation-toolkit/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object libsrc/atk/CMakeFiles/atk.dir/skeleton.cpp.o"
	cd /Users/williamlawrence/Documents/animation-toolkit/build/libsrc/atk && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT libsrc/atk/CMakeFiles/atk.dir/skeleton.cpp.o -MF CMakeFiles/atk.dir/skeleton.cpp.o.d -o CMakeFiles/atk.dir/skeleton.cpp.o -c /Users/williamlawrence/Documents/animation-toolkit/libsrc/atk/skeleton.cpp

libsrc/atk/CMakeFiles/atk.dir/skeleton.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/atk.dir/skeleton.cpp.i"
	cd /Users/williamlawrence/Documents/animation-toolkit/build/libsrc/atk && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/williamlawrence/Documents/animation-toolkit/libsrc/atk/skeleton.cpp > CMakeFiles/atk.dir/skeleton.cpp.i

libsrc/atk/CMakeFiles/atk.dir/skeleton.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/atk.dir/skeleton.cpp.s"
	cd /Users/williamlawrence/Documents/animation-toolkit/build/libsrc/atk && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/williamlawrence/Documents/animation-toolkit/libsrc/atk/skeleton.cpp -o CMakeFiles/atk.dir/skeleton.cpp.s

libsrc/atk/CMakeFiles/atk.dir/joint.cpp.o: libsrc/atk/CMakeFiles/atk.dir/flags.make
libsrc/atk/CMakeFiles/atk.dir/joint.cpp.o: ../libsrc/atk/joint.cpp
libsrc/atk/CMakeFiles/atk.dir/joint.cpp.o: libsrc/atk/CMakeFiles/atk.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/williamlawrence/Documents/animation-toolkit/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object libsrc/atk/CMakeFiles/atk.dir/joint.cpp.o"
	cd /Users/williamlawrence/Documents/animation-toolkit/build/libsrc/atk && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT libsrc/atk/CMakeFiles/atk.dir/joint.cpp.o -MF CMakeFiles/atk.dir/joint.cpp.o.d -o CMakeFiles/atk.dir/joint.cpp.o -c /Users/williamlawrence/Documents/animation-toolkit/libsrc/atk/joint.cpp

libsrc/atk/CMakeFiles/atk.dir/joint.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/atk.dir/joint.cpp.i"
	cd /Users/williamlawrence/Documents/animation-toolkit/build/libsrc/atk && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/williamlawrence/Documents/animation-toolkit/libsrc/atk/joint.cpp > CMakeFiles/atk.dir/joint.cpp.i

libsrc/atk/CMakeFiles/atk.dir/joint.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/atk.dir/joint.cpp.s"
	cd /Users/williamlawrence/Documents/animation-toolkit/build/libsrc/atk && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/williamlawrence/Documents/animation-toolkit/libsrc/atk/joint.cpp -o CMakeFiles/atk.dir/joint.cpp.s

libsrc/atk/CMakeFiles/atk.dir/pose.cpp.o: libsrc/atk/CMakeFiles/atk.dir/flags.make
libsrc/atk/CMakeFiles/atk.dir/pose.cpp.o: ../libsrc/atk/pose.cpp
libsrc/atk/CMakeFiles/atk.dir/pose.cpp.o: libsrc/atk/CMakeFiles/atk.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/williamlawrence/Documents/animation-toolkit/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object libsrc/atk/CMakeFiles/atk.dir/pose.cpp.o"
	cd /Users/williamlawrence/Documents/animation-toolkit/build/libsrc/atk && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT libsrc/atk/CMakeFiles/atk.dir/pose.cpp.o -MF CMakeFiles/atk.dir/pose.cpp.o.d -o CMakeFiles/atk.dir/pose.cpp.o -c /Users/williamlawrence/Documents/animation-toolkit/libsrc/atk/pose.cpp

libsrc/atk/CMakeFiles/atk.dir/pose.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/atk.dir/pose.cpp.i"
	cd /Users/williamlawrence/Documents/animation-toolkit/build/libsrc/atk && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/williamlawrence/Documents/animation-toolkit/libsrc/atk/pose.cpp > CMakeFiles/atk.dir/pose.cpp.i

libsrc/atk/CMakeFiles/atk.dir/pose.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/atk.dir/pose.cpp.s"
	cd /Users/williamlawrence/Documents/animation-toolkit/build/libsrc/atk && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/williamlawrence/Documents/animation-toolkit/libsrc/atk/pose.cpp -o CMakeFiles/atk.dir/pose.cpp.s

libsrc/atk/CMakeFiles/atk.dir/motion.cpp.o: libsrc/atk/CMakeFiles/atk.dir/flags.make
libsrc/atk/CMakeFiles/atk.dir/motion.cpp.o: ../libsrc/atk/motion.cpp
libsrc/atk/CMakeFiles/atk.dir/motion.cpp.o: libsrc/atk/CMakeFiles/atk.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/williamlawrence/Documents/animation-toolkit/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object libsrc/atk/CMakeFiles/atk.dir/motion.cpp.o"
	cd /Users/williamlawrence/Documents/animation-toolkit/build/libsrc/atk && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT libsrc/atk/CMakeFiles/atk.dir/motion.cpp.o -MF CMakeFiles/atk.dir/motion.cpp.o.d -o CMakeFiles/atk.dir/motion.cpp.o -c /Users/williamlawrence/Documents/animation-toolkit/libsrc/atk/motion.cpp

libsrc/atk/CMakeFiles/atk.dir/motion.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/atk.dir/motion.cpp.i"
	cd /Users/williamlawrence/Documents/animation-toolkit/build/libsrc/atk && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/williamlawrence/Documents/animation-toolkit/libsrc/atk/motion.cpp > CMakeFiles/atk.dir/motion.cpp.i

libsrc/atk/CMakeFiles/atk.dir/motion.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/atk.dir/motion.cpp.s"
	cd /Users/williamlawrence/Documents/animation-toolkit/build/libsrc/atk && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/williamlawrence/Documents/animation-toolkit/libsrc/atk/motion.cpp -o CMakeFiles/atk.dir/motion.cpp.s

# Object files for target atk
atk_OBJECTS = \
"CMakeFiles/atk.dir/transform.cpp.o" \
"CMakeFiles/atk.dir/bvhreader.cpp.o" \
"CMakeFiles/atk.dir/bvhwriter.cpp.o" \
"CMakeFiles/atk.dir/skeleton.cpp.o" \
"CMakeFiles/atk.dir/joint.cpp.o" \
"CMakeFiles/atk.dir/pose.cpp.o" \
"CMakeFiles/atk.dir/motion.cpp.o"

# External object files for target atk
atk_EXTERNAL_OBJECTS =

../lib/libatk.a: libsrc/atk/CMakeFiles/atk.dir/transform.cpp.o
../lib/libatk.a: libsrc/atk/CMakeFiles/atk.dir/bvhreader.cpp.o
../lib/libatk.a: libsrc/atk/CMakeFiles/atk.dir/bvhwriter.cpp.o
../lib/libatk.a: libsrc/atk/CMakeFiles/atk.dir/skeleton.cpp.o
../lib/libatk.a: libsrc/atk/CMakeFiles/atk.dir/joint.cpp.o
../lib/libatk.a: libsrc/atk/CMakeFiles/atk.dir/pose.cpp.o
../lib/libatk.a: libsrc/atk/CMakeFiles/atk.dir/motion.cpp.o
../lib/libatk.a: libsrc/atk/CMakeFiles/atk.dir/build.make
../lib/libatk.a: libsrc/atk/CMakeFiles/atk.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/williamlawrence/Documents/animation-toolkit/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Linking CXX static library ../../../lib/libatk.a"
	cd /Users/williamlawrence/Documents/animation-toolkit/build/libsrc/atk && $(CMAKE_COMMAND) -P CMakeFiles/atk.dir/cmake_clean_target.cmake
	cd /Users/williamlawrence/Documents/animation-toolkit/build/libsrc/atk && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/atk.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
libsrc/atk/CMakeFiles/atk.dir/build: ../lib/libatk.a
.PHONY : libsrc/atk/CMakeFiles/atk.dir/build

libsrc/atk/CMakeFiles/atk.dir/clean:
	cd /Users/williamlawrence/Documents/animation-toolkit/build/libsrc/atk && $(CMAKE_COMMAND) -P CMakeFiles/atk.dir/cmake_clean.cmake
.PHONY : libsrc/atk/CMakeFiles/atk.dir/clean

libsrc/atk/CMakeFiles/atk.dir/depend:
	cd /Users/williamlawrence/Documents/animation-toolkit/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/williamlawrence/Documents/animation-toolkit /Users/williamlawrence/Documents/animation-toolkit/libsrc/atk /Users/williamlawrence/Documents/animation-toolkit/build /Users/williamlawrence/Documents/animation-toolkit/build/libsrc/atk /Users/williamlawrence/Documents/animation-toolkit/build/libsrc/atk/CMakeFiles/atk.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : libsrc/atk/CMakeFiles/atk.dir/depend

