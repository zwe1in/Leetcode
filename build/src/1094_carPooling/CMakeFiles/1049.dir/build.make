# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.13

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
CMAKE_COMMAND = D:\Cmake\bin\cmake.exe

# The command to remove a file.
RM = D:\Cmake\bin\cmake.exe -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\PC\Desktop\Leetcode

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\PC\Desktop\Leetcode\build

# Include any dependencies generated for this target.
include src/1094_carPooling/CMakeFiles/1049.dir/depend.make

# Include the progress variables for this target.
include src/1094_carPooling/CMakeFiles/1049.dir/progress.make

# Include the compile flags for this target's objects.
include src/1094_carPooling/CMakeFiles/1049.dir/flags.make

src/1094_carPooling/CMakeFiles/1049.dir/main.cpp.obj: src/1094_carPooling/CMakeFiles/1049.dir/flags.make
src/1094_carPooling/CMakeFiles/1049.dir/main.cpp.obj: ../src/1094_carPooling/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\PC\Desktop\Leetcode\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/1094_carPooling/CMakeFiles/1049.dir/main.cpp.obj"
	cd /d C:\Users\PC\Desktop\Leetcode\build\src\1094_carPooling && C:\mingw64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\1049.dir\main.cpp.obj -c C:\Users\PC\Desktop\Leetcode\src\1094_carPooling\main.cpp

src/1094_carPooling/CMakeFiles/1049.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/1049.dir/main.cpp.i"
	cd /d C:\Users\PC\Desktop\Leetcode\build\src\1094_carPooling && C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\PC\Desktop\Leetcode\src\1094_carPooling\main.cpp > CMakeFiles\1049.dir\main.cpp.i

src/1094_carPooling/CMakeFiles/1049.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/1049.dir/main.cpp.s"
	cd /d C:\Users\PC\Desktop\Leetcode\build\src\1094_carPooling && C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\PC\Desktop\Leetcode\src\1094_carPooling\main.cpp -o CMakeFiles\1049.dir\main.cpp.s

# Object files for target 1049
1049_OBJECTS = \
"CMakeFiles/1049.dir/main.cpp.obj"

# External object files for target 1049
1049_EXTERNAL_OBJECTS =

src/1094_carPooling/1049.exe: src/1094_carPooling/CMakeFiles/1049.dir/main.cpp.obj
src/1094_carPooling/1049.exe: src/1094_carPooling/CMakeFiles/1049.dir/build.make
src/1094_carPooling/1049.exe: src/1094_carPooling/CMakeFiles/1049.dir/linklibs.rsp
src/1094_carPooling/1049.exe: src/1094_carPooling/CMakeFiles/1049.dir/objects1.rsp
src/1094_carPooling/1049.exe: src/1094_carPooling/CMakeFiles/1049.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\PC\Desktop\Leetcode\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 1049.exe"
	cd /d C:\Users\PC\Desktop\Leetcode\build\src\1094_carPooling && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\1049.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/1094_carPooling/CMakeFiles/1049.dir/build: src/1094_carPooling/1049.exe

.PHONY : src/1094_carPooling/CMakeFiles/1049.dir/build

src/1094_carPooling/CMakeFiles/1049.dir/clean:
	cd /d C:\Users\PC\Desktop\Leetcode\build\src\1094_carPooling && $(CMAKE_COMMAND) -P CMakeFiles\1049.dir\cmake_clean.cmake
.PHONY : src/1094_carPooling/CMakeFiles/1049.dir/clean

src/1094_carPooling/CMakeFiles/1049.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\PC\Desktop\Leetcode C:\Users\PC\Desktop\Leetcode\src\1094_carPooling C:\Users\PC\Desktop\Leetcode\build C:\Users\PC\Desktop\Leetcode\build\src\1094_carPooling C:\Users\PC\Desktop\Leetcode\build\src\1094_carPooling\CMakeFiles\1049.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : src/1094_carPooling/CMakeFiles/1049.dir/depend
