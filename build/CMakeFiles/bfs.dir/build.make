# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.18

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/alice/guru/ЛР1-bus

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/alice/guru/ЛР1-bus/build

# Include any dependencies generated for this target.
include CMakeFiles/bfs.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/bfs.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/bfs.dir/flags.make

CMakeFiles/bfs.dir/src/main.cpp.o: CMakeFiles/bfs.dir/flags.make
CMakeFiles/bfs.dir/src/main.cpp.o: ../src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alice/guru/ЛР1-bus/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/bfs.dir/src/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/bfs.dir/src/main.cpp.o -c /home/alice/guru/ЛР1-bus/src/main.cpp

CMakeFiles/bfs.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/bfs.dir/src/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alice/guru/ЛР1-bus/src/main.cpp > CMakeFiles/bfs.dir/src/main.cpp.i

CMakeFiles/bfs.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/bfs.dir/src/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alice/guru/ЛР1-bus/src/main.cpp -o CMakeFiles/bfs.dir/src/main.cpp.s

# Object files for target bfs
bfs_OBJECTS = \
"CMakeFiles/bfs.dir/src/main.cpp.o"

# External object files for target bfs
bfs_EXTERNAL_OBJECTS =

bfs: CMakeFiles/bfs.dir/src/main.cpp.o
bfs: CMakeFiles/bfs.dir/build.make
bfs: CMakeFiles/bfs.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/alice/guru/ЛР1-bus/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable bfs"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/bfs.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/bfs.dir/build: bfs

.PHONY : CMakeFiles/bfs.dir/build

CMakeFiles/bfs.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/bfs.dir/cmake_clean.cmake
.PHONY : CMakeFiles/bfs.dir/clean

CMakeFiles/bfs.dir/depend:
	cd /home/alice/guru/ЛР1-bus/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/alice/guru/ЛР1-bus /home/alice/guru/ЛР1-bus /home/alice/guru/ЛР1-bus/build /home/alice/guru/ЛР1-bus/build /home/alice/guru/ЛР1-bus/build/CMakeFiles/bfs.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/bfs.dir/depend

