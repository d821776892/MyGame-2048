# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.15

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
CMAKE_COMMAND = "D:\CLion 2019.2.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "D:\CLion 2019.2.2\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\C++project\MyGame

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\C++project\MyGame\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/MyGame.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/MyGame.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/MyGame.dir/flags.make

CMakeFiles/MyGame.dir/main.cpp.obj: CMakeFiles/MyGame.dir/flags.make
CMakeFiles/MyGame.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\C++project\MyGame\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/MyGame.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\MyGame.dir\main.cpp.obj -c D:\C++project\MyGame\main.cpp

CMakeFiles/MyGame.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/MyGame.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\C++project\MyGame\main.cpp > CMakeFiles\MyGame.dir\main.cpp.i

CMakeFiles/MyGame.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/MyGame.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\C++project\MyGame\main.cpp -o CMakeFiles\MyGame.dir\main.cpp.s

CMakeFiles/MyGame.dir/game_cpp/moveUp.cpp.obj: CMakeFiles/MyGame.dir/flags.make
CMakeFiles/MyGame.dir/game_cpp/moveUp.cpp.obj: ../game\ cpp/moveUp.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\C++project\MyGame\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/MyGame.dir/game_cpp/moveUp.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\MyGame.dir\game_cpp\moveUp.cpp.obj -c "D:\C++project\MyGame\game cpp\moveUp.cpp"

CMakeFiles/MyGame.dir/game_cpp/moveUp.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/MyGame.dir/game_cpp/moveUp.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "D:\C++project\MyGame\game cpp\moveUp.cpp" > CMakeFiles\MyGame.dir\game_cpp\moveUp.cpp.i

CMakeFiles/MyGame.dir/game_cpp/moveUp.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/MyGame.dir/game_cpp/moveUp.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "D:\C++project\MyGame\game cpp\moveUp.cpp" -o CMakeFiles\MyGame.dir\game_cpp\moveUp.cpp.s

# Object files for target MyGame
MyGame_OBJECTS = \
"CMakeFiles/MyGame.dir/main.cpp.obj" \
"CMakeFiles/MyGame.dir/game_cpp/moveUp.cpp.obj"

# External object files for target MyGame
MyGame_EXTERNAL_OBJECTS =

MyGame.exe: CMakeFiles/MyGame.dir/main.cpp.obj
MyGame.exe: CMakeFiles/MyGame.dir/game_cpp/moveUp.cpp.obj
MyGame.exe: CMakeFiles/MyGame.dir/build.make
MyGame.exe: CMakeFiles/MyGame.dir/linklibs.rsp
MyGame.exe: CMakeFiles/MyGame.dir/objects1.rsp
MyGame.exe: CMakeFiles/MyGame.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\C++project\MyGame\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable MyGame.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\MyGame.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/MyGame.dir/build: MyGame.exe

.PHONY : CMakeFiles/MyGame.dir/build

CMakeFiles/MyGame.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\MyGame.dir\cmake_clean.cmake
.PHONY : CMakeFiles/MyGame.dir/clean

CMakeFiles/MyGame.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\C++project\MyGame D:\C++project\MyGame D:\C++project\MyGame\cmake-build-debug D:\C++project\MyGame\cmake-build-debug D:\C++project\MyGame\cmake-build-debug\CMakeFiles\MyGame.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/MyGame.dir/depend
