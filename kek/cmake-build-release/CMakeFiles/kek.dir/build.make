# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.14

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "D:\CLion 2019.2.1\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "D:\CLion 2019.2.1\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\CLionsProjects\kek

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\CLionsProjects\kek\cmake-build-release

# Include any dependencies generated for this target.
include CMakeFiles/kek.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/kek.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/kek.dir/flags.make

CMakeFiles/kek.dir/main.cpp.obj: CMakeFiles/kek.dir/flags.make
CMakeFiles/kek.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\CLionsProjects\kek\cmake-build-release\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/kek.dir/main.cpp.obj"
	D:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\kek.dir\main.cpp.obj -c D:\CLionsProjects\kek\main.cpp

CMakeFiles/kek.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/kek.dir/main.cpp.i"
	D:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\CLionsProjects\kek\main.cpp > CMakeFiles\kek.dir\main.cpp.i

CMakeFiles/kek.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/kek.dir/main.cpp.s"
	D:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\CLionsProjects\kek\main.cpp -o CMakeFiles\kek.dir\main.cpp.s

# Object files for target kek
kek_OBJECTS = \
"CMakeFiles/kek.dir/main.cpp.obj"

# External object files for target kek
kek_EXTERNAL_OBJECTS =

kek.exe: CMakeFiles/kek.dir/main.cpp.obj
kek.exe: CMakeFiles/kek.dir/build.make
kek.exe: CMakeFiles/kek.dir/linklibs.rsp
kek.exe: CMakeFiles/kek.dir/objects1.rsp
kek.exe: CMakeFiles/kek.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\CLionsProjects\kek\cmake-build-release\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable kek.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\kek.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/kek.dir/build: kek.exe

.PHONY : CMakeFiles/kek.dir/build

CMakeFiles/kek.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\kek.dir\cmake_clean.cmake
.PHONY : CMakeFiles/kek.dir/clean

CMakeFiles/kek.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\CLionsProjects\kek D:\CLionsProjects\kek D:\CLionsProjects\kek\cmake-build-release D:\CLionsProjects\kek\cmake-build-release D:\CLionsProjects\kek\cmake-build-release\CMakeFiles\kek.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/kek.dir/depend

