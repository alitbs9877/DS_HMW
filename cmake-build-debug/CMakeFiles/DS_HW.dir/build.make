# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /opt/clion-2018.1.1/bin/cmake/bin/cmake

# The command to remove a file.
RM = /opt/clion-2018.1.1/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/alitbs/Documents/DS_HW

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/alitbs/Documents/DS_HW/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/DS_HW.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/DS_HW.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/DS_HW.dir/flags.make

CMakeFiles/DS_HW.dir/main.cpp.o: CMakeFiles/DS_HW.dir/flags.make
CMakeFiles/DS_HW.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alitbs/Documents/DS_HW/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/DS_HW.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/DS_HW.dir/main.cpp.o -c /home/alitbs/Documents/DS_HW/main.cpp

CMakeFiles/DS_HW.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/DS_HW.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alitbs/Documents/DS_HW/main.cpp > CMakeFiles/DS_HW.dir/main.cpp.i

CMakeFiles/DS_HW.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/DS_HW.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alitbs/Documents/DS_HW/main.cpp -o CMakeFiles/DS_HW.dir/main.cpp.s

CMakeFiles/DS_HW.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/DS_HW.dir/main.cpp.o.requires

CMakeFiles/DS_HW.dir/main.cpp.o.provides: CMakeFiles/DS_HW.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/DS_HW.dir/build.make CMakeFiles/DS_HW.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/DS_HW.dir/main.cpp.o.provides

CMakeFiles/DS_HW.dir/main.cpp.o.provides.build: CMakeFiles/DS_HW.dir/main.cpp.o


# Object files for target DS_HW
DS_HW_OBJECTS = \
"CMakeFiles/DS_HW.dir/main.cpp.o"

# External object files for target DS_HW
DS_HW_EXTERNAL_OBJECTS =

DS_HW: CMakeFiles/DS_HW.dir/main.cpp.o
DS_HW: CMakeFiles/DS_HW.dir/build.make
DS_HW: CMakeFiles/DS_HW.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/alitbs/Documents/DS_HW/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable DS_HW"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/DS_HW.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/DS_HW.dir/build: DS_HW

.PHONY : CMakeFiles/DS_HW.dir/build

CMakeFiles/DS_HW.dir/requires: CMakeFiles/DS_HW.dir/main.cpp.o.requires

.PHONY : CMakeFiles/DS_HW.dir/requires

CMakeFiles/DS_HW.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/DS_HW.dir/cmake_clean.cmake
.PHONY : CMakeFiles/DS_HW.dir/clean

CMakeFiles/DS_HW.dir/depend:
	cd /home/alitbs/Documents/DS_HW/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/alitbs/Documents/DS_HW /home/alitbs/Documents/DS_HW /home/alitbs/Documents/DS_HW/cmake-build-debug /home/alitbs/Documents/DS_HW/cmake-build-debug /home/alitbs/Documents/DS_HW/cmake-build-debug/CMakeFiles/DS_HW.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/DS_HW.dir/depend
