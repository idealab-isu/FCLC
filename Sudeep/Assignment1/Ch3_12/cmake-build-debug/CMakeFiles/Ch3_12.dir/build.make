# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.17

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
CMAKE_COMMAND = /home/smenon/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/202.7660.37/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/smenon/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/202.7660.37/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/smenon/CLionProjects/Ch3_12

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/smenon/CLionProjects/Ch3_12/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Ch3_12.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Ch3_12.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Ch3_12.dir/flags.make

CMakeFiles/Ch3_12.dir/main.cpp.o: CMakeFiles/Ch3_12.dir/flags.make
CMakeFiles/Ch3_12.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/smenon/CLionProjects/Ch3_12/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Ch3_12.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Ch3_12.dir/main.cpp.o -c /home/smenon/CLionProjects/Ch3_12/main.cpp

CMakeFiles/Ch3_12.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Ch3_12.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/smenon/CLionProjects/Ch3_12/main.cpp > CMakeFiles/Ch3_12.dir/main.cpp.i

CMakeFiles/Ch3_12.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Ch3_12.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/smenon/CLionProjects/Ch3_12/main.cpp -o CMakeFiles/Ch3_12.dir/main.cpp.s

CMakeFiles/Ch3_12.dir/Account.cpp.o: CMakeFiles/Ch3_12.dir/flags.make
CMakeFiles/Ch3_12.dir/Account.cpp.o: ../Account.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/smenon/CLionProjects/Ch3_12/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Ch3_12.dir/Account.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Ch3_12.dir/Account.cpp.o -c /home/smenon/CLionProjects/Ch3_12/Account.cpp

CMakeFiles/Ch3_12.dir/Account.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Ch3_12.dir/Account.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/smenon/CLionProjects/Ch3_12/Account.cpp > CMakeFiles/Ch3_12.dir/Account.cpp.i

CMakeFiles/Ch3_12.dir/Account.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Ch3_12.dir/Account.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/smenon/CLionProjects/Ch3_12/Account.cpp -o CMakeFiles/Ch3_12.dir/Account.cpp.s

# Object files for target Ch3_12
Ch3_12_OBJECTS = \
"CMakeFiles/Ch3_12.dir/main.cpp.o" \
"CMakeFiles/Ch3_12.dir/Account.cpp.o"

# External object files for target Ch3_12
Ch3_12_EXTERNAL_OBJECTS =

Ch3_12: CMakeFiles/Ch3_12.dir/main.cpp.o
Ch3_12: CMakeFiles/Ch3_12.dir/Account.cpp.o
Ch3_12: CMakeFiles/Ch3_12.dir/build.make
Ch3_12: CMakeFiles/Ch3_12.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/smenon/CLionProjects/Ch3_12/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable Ch3_12"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Ch3_12.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Ch3_12.dir/build: Ch3_12

.PHONY : CMakeFiles/Ch3_12.dir/build

CMakeFiles/Ch3_12.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Ch3_12.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Ch3_12.dir/clean

CMakeFiles/Ch3_12.dir/depend:
	cd /home/smenon/CLionProjects/Ch3_12/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/smenon/CLionProjects/Ch3_12 /home/smenon/CLionProjects/Ch3_12 /home/smenon/CLionProjects/Ch3_12/cmake-build-debug /home/smenon/CLionProjects/Ch3_12/cmake-build-debug /home/smenon/CLionProjects/Ch3_12/cmake-build-debug/CMakeFiles/Ch3_12.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Ch3_12.dir/depend

