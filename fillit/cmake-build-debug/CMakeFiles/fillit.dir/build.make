# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.9

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/azaporoz/fillit

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/azaporoz/fillit/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/fillit.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/fillit.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/fillit.dir/flags.make

CMakeFiles/fillit.dir/library.c.o: CMakeFiles/fillit.dir/flags.make
CMakeFiles/fillit.dir/library.c.o: ../library.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/azaporoz/fillit/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/fillit.dir/library.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/fillit.dir/library.c.o   -c /Users/azaporoz/fillit/library.c

CMakeFiles/fillit.dir/library.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/fillit.dir/library.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/azaporoz/fillit/library.c > CMakeFiles/fillit.dir/library.c.i

CMakeFiles/fillit.dir/library.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/fillit.dir/library.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/azaporoz/fillit/library.c -o CMakeFiles/fillit.dir/library.c.s

CMakeFiles/fillit.dir/library.c.o.requires:

.PHONY : CMakeFiles/fillit.dir/library.c.o.requires

CMakeFiles/fillit.dir/library.c.o.provides: CMakeFiles/fillit.dir/library.c.o.requires
	$(MAKE) -f CMakeFiles/fillit.dir/build.make CMakeFiles/fillit.dir/library.c.o.provides.build
.PHONY : CMakeFiles/fillit.dir/library.c.o.provides

CMakeFiles/fillit.dir/library.c.o.provides.build: CMakeFiles/fillit.dir/library.c.o


# Object files for target fillit
fillit_OBJECTS = \
"CMakeFiles/fillit.dir/library.c.o"

# External object files for target fillit
fillit_EXTERNAL_OBJECTS =

libfillit.a: CMakeFiles/fillit.dir/library.c.o
libfillit.a: CMakeFiles/fillit.dir/build.make
libfillit.a: CMakeFiles/fillit.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/azaporoz/fillit/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C static library libfillit.a"
	$(CMAKE_COMMAND) -P CMakeFiles/fillit.dir/cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/fillit.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/fillit.dir/build: libfillit.a

.PHONY : CMakeFiles/fillit.dir/build

CMakeFiles/fillit.dir/requires: CMakeFiles/fillit.dir/library.c.o.requires

.PHONY : CMakeFiles/fillit.dir/requires

CMakeFiles/fillit.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/fillit.dir/cmake_clean.cmake
.PHONY : CMakeFiles/fillit.dir/clean

CMakeFiles/fillit.dir/depend:
	cd /Users/azaporoz/fillit/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/azaporoz/fillit /Users/azaporoz/fillit /Users/azaporoz/fillit/cmake-build-debug /Users/azaporoz/fillit/cmake-build-debug /Users/azaporoz/fillit/cmake-build-debug/CMakeFiles/fillit.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/fillit.dir/depend

