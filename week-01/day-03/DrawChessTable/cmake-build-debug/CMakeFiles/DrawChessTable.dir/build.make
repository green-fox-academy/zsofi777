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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2019.1\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2019.1\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\Szonja-asus\Documents\greenfox\zsofi777\week-01\DrawChessTable

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\Szonja-asus\Documents\greenfox\zsofi777\week-01\DrawChessTable\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/DrawChessTable.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/DrawChessTable.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/DrawChessTable.dir/flags.make

CMakeFiles/DrawChessTable.dir/main.cpp.obj: CMakeFiles/DrawChessTable.dir/flags.make
CMakeFiles/DrawChessTable.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Szonja-asus\Documents\greenfox\zsofi777\week-01\DrawChessTable\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/DrawChessTable.dir/main.cpp.obj"
	C:\MinGW\mingw32\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\DrawChessTable.dir\main.cpp.obj -c C:\Users\Szonja-asus\Documents\greenfox\zsofi777\week-01\DrawChessTable\main.cpp

CMakeFiles/DrawChessTable.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/DrawChessTable.dir/main.cpp.i"
	C:\MinGW\mingw32\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Szonja-asus\Documents\greenfox\zsofi777\week-01\DrawChessTable\main.cpp > CMakeFiles\DrawChessTable.dir\main.cpp.i

CMakeFiles/DrawChessTable.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/DrawChessTable.dir/main.cpp.s"
	C:\MinGW\mingw32\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Szonja-asus\Documents\greenfox\zsofi777\week-01\DrawChessTable\main.cpp -o CMakeFiles\DrawChessTable.dir\main.cpp.s

# Object files for target DrawChessTable
DrawChessTable_OBJECTS = \
"CMakeFiles/DrawChessTable.dir/main.cpp.obj"

# External object files for target DrawChessTable
DrawChessTable_EXTERNAL_OBJECTS =

DrawChessTable.exe: CMakeFiles/DrawChessTable.dir/main.cpp.obj
DrawChessTable.exe: CMakeFiles/DrawChessTable.dir/build.make
DrawChessTable.exe: CMakeFiles/DrawChessTable.dir/linklibs.rsp
DrawChessTable.exe: CMakeFiles/DrawChessTable.dir/objects1.rsp
DrawChessTable.exe: CMakeFiles/DrawChessTable.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\Szonja-asus\Documents\greenfox\zsofi777\week-01\DrawChessTable\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable DrawChessTable.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\DrawChessTable.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/DrawChessTable.dir/build: DrawChessTable.exe

.PHONY : CMakeFiles/DrawChessTable.dir/build

CMakeFiles/DrawChessTable.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\DrawChessTable.dir\cmake_clean.cmake
.PHONY : CMakeFiles/DrawChessTable.dir/clean

CMakeFiles/DrawChessTable.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\Szonja-asus\Documents\greenfox\zsofi777\week-01\DrawChessTable C:\Users\Szonja-asus\Documents\greenfox\zsofi777\week-01\DrawChessTable C:\Users\Szonja-asus\Documents\greenfox\zsofi777\week-01\DrawChessTable\cmake-build-debug C:\Users\Szonja-asus\Documents\greenfox\zsofi777\week-01\DrawChessTable\cmake-build-debug C:\Users\Szonja-asus\Documents\greenfox\zsofi777\week-01\DrawChessTable\cmake-build-debug\CMakeFiles\DrawChessTable.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/DrawChessTable.dir/depend

