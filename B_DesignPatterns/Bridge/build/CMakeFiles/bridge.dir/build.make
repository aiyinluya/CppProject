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
CMAKE_SOURCE_DIR = /home/lz/study/c++/cmakeStudy/DesignPatterns/Bridge

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/lz/study/c++/cmakeStudy/DesignPatterns/Bridge/build

# Include any dependencies generated for this target.
include CMakeFiles/bridge.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/bridge.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/bridge.dir/flags.make

CMakeFiles/bridge.dir/main.cpp.o: CMakeFiles/bridge.dir/flags.make
CMakeFiles/bridge.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/lz/study/c++/cmakeStudy/DesignPatterns/Bridge/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/bridge.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/bridge.dir/main.cpp.o -c /home/lz/study/c++/cmakeStudy/DesignPatterns/Bridge/main.cpp

CMakeFiles/bridge.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/bridge.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/lz/study/c++/cmakeStudy/DesignPatterns/Bridge/main.cpp > CMakeFiles/bridge.dir/main.cpp.i

CMakeFiles/bridge.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/bridge.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/lz/study/c++/cmakeStudy/DesignPatterns/Bridge/main.cpp -o CMakeFiles/bridge.dir/main.cpp.s

CMakeFiles/bridge.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/bridge.dir/main.cpp.o.requires

CMakeFiles/bridge.dir/main.cpp.o.provides: CMakeFiles/bridge.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/bridge.dir/build.make CMakeFiles/bridge.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/bridge.dir/main.cpp.o.provides

CMakeFiles/bridge.dir/main.cpp.o.provides.build: CMakeFiles/bridge.dir/main.cpp.o


# Object files for target bridge
bridge_OBJECTS = \
"CMakeFiles/bridge.dir/main.cpp.o"

# External object files for target bridge
bridge_EXTERNAL_OBJECTS =

bridge: CMakeFiles/bridge.dir/main.cpp.o
bridge: CMakeFiles/bridge.dir/build.make
bridge: CMakeFiles/bridge.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/lz/study/c++/cmakeStudy/DesignPatterns/Bridge/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable bridge"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/bridge.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/bridge.dir/build: bridge

.PHONY : CMakeFiles/bridge.dir/build

CMakeFiles/bridge.dir/requires: CMakeFiles/bridge.dir/main.cpp.o.requires

.PHONY : CMakeFiles/bridge.dir/requires

CMakeFiles/bridge.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/bridge.dir/cmake_clean.cmake
.PHONY : CMakeFiles/bridge.dir/clean

CMakeFiles/bridge.dir/depend:
	cd /home/lz/study/c++/cmakeStudy/DesignPatterns/Bridge/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/lz/study/c++/cmakeStudy/DesignPatterns/Bridge /home/lz/study/c++/cmakeStudy/DesignPatterns/Bridge /home/lz/study/c++/cmakeStudy/DesignPatterns/Bridge/build /home/lz/study/c++/cmakeStudy/DesignPatterns/Bridge/build /home/lz/study/c++/cmakeStudy/DesignPatterns/Bridge/build/CMakeFiles/bridge.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/bridge.dir/depend

