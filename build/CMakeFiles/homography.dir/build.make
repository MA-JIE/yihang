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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/majie/yihang

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/majie/yihang/build

# Include any dependencies generated for this target.
include CMakeFiles/homography.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/homography.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/homography.dir/flags.make

CMakeFiles/homography.dir/homography.cpp.o: CMakeFiles/homography.dir/flags.make
CMakeFiles/homography.dir/homography.cpp.o: ../homography.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/majie/yihang/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/homography.dir/homography.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/homography.dir/homography.cpp.o -c /home/majie/yihang/homography.cpp

CMakeFiles/homography.dir/homography.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/homography.dir/homography.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/majie/yihang/homography.cpp > CMakeFiles/homography.dir/homography.cpp.i

CMakeFiles/homography.dir/homography.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/homography.dir/homography.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/majie/yihang/homography.cpp -o CMakeFiles/homography.dir/homography.cpp.s

CMakeFiles/homography.dir/homography.cpp.o.requires:

.PHONY : CMakeFiles/homography.dir/homography.cpp.o.requires

CMakeFiles/homography.dir/homography.cpp.o.provides: CMakeFiles/homography.dir/homography.cpp.o.requires
	$(MAKE) -f CMakeFiles/homography.dir/build.make CMakeFiles/homography.dir/homography.cpp.o.provides.build
.PHONY : CMakeFiles/homography.dir/homography.cpp.o.provides

CMakeFiles/homography.dir/homography.cpp.o.provides.build: CMakeFiles/homography.dir/homography.cpp.o


# Object files for target homography
homography_OBJECTS = \
"CMakeFiles/homography.dir/homography.cpp.o"

# External object files for target homography
homography_EXTERNAL_OBJECTS =

homography: CMakeFiles/homography.dir/homography.cpp.o
homography: CMakeFiles/homography.dir/build.make
homography: CMakeFiles/homography.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/majie/yihang/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable homography"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/homography.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/homography.dir/build: homography

.PHONY : CMakeFiles/homography.dir/build

CMakeFiles/homography.dir/requires: CMakeFiles/homography.dir/homography.cpp.o.requires

.PHONY : CMakeFiles/homography.dir/requires

CMakeFiles/homography.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/homography.dir/cmake_clean.cmake
.PHONY : CMakeFiles/homography.dir/clean

CMakeFiles/homography.dir/depend:
	cd /home/majie/yihang/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/majie/yihang /home/majie/yihang /home/majie/yihang/build /home/majie/yihang/build /home/majie/yihang/build/CMakeFiles/homography.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/homography.dir/depend
