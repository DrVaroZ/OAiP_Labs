# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.20

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Users\User\AppData\Local\JetBrains\CLion 2021.2.1\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Users\User\AppData\Local\JetBrains\CLion 2021.2.1\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "D:\C++ projects\OAiP_Lab_6\Task_6.7"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "D:\C++ projects\OAiP_Lab_6\Task_6.7\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Task_6_7.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/Task_6_7.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Task_6_7.dir/flags.make

CMakeFiles/Task_6_7.dir/main.cpp.obj: CMakeFiles/Task_6_7.dir/flags.make
CMakeFiles/Task_6_7.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="D:\C++ projects\OAiP_Lab_6\Task_6.7\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Task_6_7.dir/main.cpp.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Task_6_7.dir\main.cpp.obj -c "D:\C++ projects\OAiP_Lab_6\Task_6.7\main.cpp"

CMakeFiles/Task_6_7.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Task_6_7.dir/main.cpp.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "D:\C++ projects\OAiP_Lab_6\Task_6.7\main.cpp" > CMakeFiles\Task_6_7.dir\main.cpp.i

CMakeFiles/Task_6_7.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Task_6_7.dir/main.cpp.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "D:\C++ projects\OAiP_Lab_6\Task_6.7\main.cpp" -o CMakeFiles\Task_6_7.dir\main.cpp.s

# Object files for target Task_6_7
Task_6_7_OBJECTS = \
"CMakeFiles/Task_6_7.dir/main.cpp.obj"

# External object files for target Task_6_7
Task_6_7_EXTERNAL_OBJECTS =

Task_6_7.exe: CMakeFiles/Task_6_7.dir/main.cpp.obj
Task_6_7.exe: CMakeFiles/Task_6_7.dir/build.make
Task_6_7.exe: CMakeFiles/Task_6_7.dir/linklibs.rsp
Task_6_7.exe: CMakeFiles/Task_6_7.dir/objects1.rsp
Task_6_7.exe: CMakeFiles/Task_6_7.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="D:\C++ projects\OAiP_Lab_6\Task_6.7\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Task_6_7.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Task_6_7.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Task_6_7.dir/build: Task_6_7.exe
.PHONY : CMakeFiles/Task_6_7.dir/build

CMakeFiles/Task_6_7.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Task_6_7.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Task_6_7.dir/clean

CMakeFiles/Task_6_7.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "D:\C++ projects\OAiP_Lab_6\Task_6.7" "D:\C++ projects\OAiP_Lab_6\Task_6.7" "D:\C++ projects\OAiP_Lab_6\Task_6.7\cmake-build-debug" "D:\C++ projects\OAiP_Lab_6\Task_6.7\cmake-build-debug" "D:\C++ projects\OAiP_Lab_6\Task_6.7\cmake-build-debug\CMakeFiles\Task_6_7.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Task_6_7.dir/depend

