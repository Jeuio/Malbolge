# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.20

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

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /app/extra/clion/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /app/extra/clion/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/jeremy/CLionProjects/Malbolge/src

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/jeremy/CLionProjects/Malbolge/src/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Malbolge.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/Malbolge.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Malbolge.dir/flags.make

CMakeFiles/Malbolge.dir/Malbolge_autogen/mocs_compilation.cpp.o: CMakeFiles/Malbolge.dir/flags.make
CMakeFiles/Malbolge.dir/Malbolge_autogen/mocs_compilation.cpp.o: Malbolge_autogen/mocs_compilation.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jeremy/CLionProjects/Malbolge/src/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Malbolge.dir/Malbolge_autogen/mocs_compilation.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Malbolge.dir/Malbolge_autogen/mocs_compilation.cpp.o -c /home/jeremy/CLionProjects/Malbolge/src/cmake-build-debug/Malbolge_autogen/mocs_compilation.cpp

CMakeFiles/Malbolge.dir/Malbolge_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Malbolge.dir/Malbolge_autogen/mocs_compilation.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jeremy/CLionProjects/Malbolge/src/cmake-build-debug/Malbolge_autogen/mocs_compilation.cpp > CMakeFiles/Malbolge.dir/Malbolge_autogen/mocs_compilation.cpp.i

CMakeFiles/Malbolge.dir/Malbolge_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Malbolge.dir/Malbolge_autogen/mocs_compilation.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jeremy/CLionProjects/Malbolge/src/cmake-build-debug/Malbolge_autogen/mocs_compilation.cpp -o CMakeFiles/Malbolge.dir/Malbolge_autogen/mocs_compilation.cpp.s

CMakeFiles/Malbolge.dir/helloWorld.cpp.o: CMakeFiles/Malbolge.dir/flags.make
CMakeFiles/Malbolge.dir/helloWorld.cpp.o: ../helloWorld.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jeremy/CLionProjects/Malbolge/src/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Malbolge.dir/helloWorld.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Malbolge.dir/helloWorld.cpp.o -c /home/jeremy/CLionProjects/Malbolge/src/helloWorld.cpp

CMakeFiles/Malbolge.dir/helloWorld.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Malbolge.dir/helloWorld.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jeremy/CLionProjects/Malbolge/src/helloWorld.cpp > CMakeFiles/Malbolge.dir/helloWorld.cpp.i

CMakeFiles/Malbolge.dir/helloWorld.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Malbolge.dir/helloWorld.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jeremy/CLionProjects/Malbolge/src/helloWorld.cpp -o CMakeFiles/Malbolge.dir/helloWorld.cpp.s

# Object files for target Malbolge
Malbolge_OBJECTS = \
"CMakeFiles/Malbolge.dir/Malbolge_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/Malbolge.dir/helloWorld.cpp.o"

# External object files for target Malbolge
Malbolge_EXTERNAL_OBJECTS =

Malbolge: CMakeFiles/Malbolge.dir/Malbolge_autogen/mocs_compilation.cpp.o
Malbolge: CMakeFiles/Malbolge.dir/helloWorld.cpp.o
Malbolge: CMakeFiles/Malbolge.dir/build.make
Malbolge: /home/jeremy/Qt/6.2.1/gcc_64/lib/libQt6Widgets.so.6.2.1
Malbolge: /home/jeremy/Qt/6.2.1/gcc_64/lib/libQt6Gui.so.6.2.1
Malbolge: /home/jeremy/Qt/6.2.1/gcc_64/lib/libQt6Core.so.6.2.1
Malbolge: /usr/lib/x86_64-linux-gnu/libGLX.so
Malbolge: /usr/lib/x86_64-linux-gnu/libOpenGL.so
Malbolge: CMakeFiles/Malbolge.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/jeremy/CLionProjects/Malbolge/src/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable Malbolge"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Malbolge.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Malbolge.dir/build: Malbolge
.PHONY : CMakeFiles/Malbolge.dir/build

CMakeFiles/Malbolge.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Malbolge.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Malbolge.dir/clean

CMakeFiles/Malbolge.dir/depend:
	cd /home/jeremy/CLionProjects/Malbolge/src/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/jeremy/CLionProjects/Malbolge/src /home/jeremy/CLionProjects/Malbolge/src /home/jeremy/CLionProjects/Malbolge/src/cmake-build-debug /home/jeremy/CLionProjects/Malbolge/src/cmake-build-debug /home/jeremy/CLionProjects/Malbolge/src/cmake-build-debug/CMakeFiles/Malbolge.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Malbolge.dir/depend

