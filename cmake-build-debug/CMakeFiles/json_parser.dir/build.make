# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.15

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
CMAKE_COMMAND = /opt/clion-2019.2.4/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /opt/clion-2019.2.4/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/cezar/CERZAR/workspace/labs/lab-01-parser

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/cezar/CERZAR/workspace/labs/lab-01-parser/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/json_parser.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/json_parser.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/json_parser.dir/flags.make

CMakeFiles/json_parser.dir/sources/Json.cpp.o: CMakeFiles/json_parser.dir/flags.make
CMakeFiles/json_parser.dir/sources/Json.cpp.o: ../sources/Json.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/cezar/CERZAR/workspace/labs/lab-01-parser/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/json_parser.dir/sources/Json.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/json_parser.dir/sources/Json.cpp.o -c /home/cezar/CERZAR/workspace/labs/lab-01-parser/sources/Json.cpp

CMakeFiles/json_parser.dir/sources/Json.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/json_parser.dir/sources/Json.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/cezar/CERZAR/workspace/labs/lab-01-parser/sources/Json.cpp > CMakeFiles/json_parser.dir/sources/Json.cpp.i

CMakeFiles/json_parser.dir/sources/Json.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/json_parser.dir/sources/Json.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/cezar/CERZAR/workspace/labs/lab-01-parser/sources/Json.cpp -o CMakeFiles/json_parser.dir/sources/Json.cpp.s

# Object files for target json_parser
json_parser_OBJECTS = \
"CMakeFiles/json_parser.dir/sources/Json.cpp.o"

# External object files for target json_parser
json_parser_EXTERNAL_OBJECTS =

libjson_parserd.a: CMakeFiles/json_parser.dir/sources/Json.cpp.o
libjson_parserd.a: CMakeFiles/json_parser.dir/build.make
libjson_parserd.a: CMakeFiles/json_parser.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/cezar/CERZAR/workspace/labs/lab-01-parser/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libjson_parserd.a"
	$(CMAKE_COMMAND) -P CMakeFiles/json_parser.dir/cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/json_parser.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/json_parser.dir/build: libjson_parserd.a

.PHONY : CMakeFiles/json_parser.dir/build

CMakeFiles/json_parser.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/json_parser.dir/cmake_clean.cmake
.PHONY : CMakeFiles/json_parser.dir/clean

CMakeFiles/json_parser.dir/depend:
	cd /home/cezar/CERZAR/workspace/labs/lab-01-parser/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/cezar/CERZAR/workspace/labs/lab-01-parser /home/cezar/CERZAR/workspace/labs/lab-01-parser /home/cezar/CERZAR/workspace/labs/lab-01-parser/cmake-build-debug /home/cezar/CERZAR/workspace/labs/lab-01-parser/cmake-build-debug /home/cezar/CERZAR/workspace/labs/lab-01-parser/cmake-build-debug/CMakeFiles/json_parser.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/json_parser.dir/depend

