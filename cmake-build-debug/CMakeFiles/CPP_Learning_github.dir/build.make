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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/Rayliu40k/CLionProjects/CPP_Learning_github

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/Rayliu40k/CLionProjects/CPP_Learning_github/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/CPP_Learning_github.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/CPP_Learning_github.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/CPP_Learning_github.dir/flags.make

CMakeFiles/CPP_Learning_github.dir/变量.cpp.o: CMakeFiles/CPP_Learning_github.dir/flags.make
CMakeFiles/CPP_Learning_github.dir/变量.cpp.o: ../变量.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/Rayliu40k/CLionProjects/CPP_Learning_github/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/CPP_Learning_github.dir/变量.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/CPP_Learning_github.dir/变量.cpp.o -c /Users/Rayliu40k/CLionProjects/CPP_Learning_github/变量.cpp

CMakeFiles/CPP_Learning_github.dir/变量.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CPP_Learning_github.dir/变量.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/Rayliu40k/CLionProjects/CPP_Learning_github/变量.cpp > CMakeFiles/CPP_Learning_github.dir/变量.cpp.i

CMakeFiles/CPP_Learning_github.dir/变量.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CPP_Learning_github.dir/变量.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/Rayliu40k/CLionProjects/CPP_Learning_github/变量.cpp -o CMakeFiles/CPP_Learning_github.dir/变量.cpp.s

# Object files for target CPP_Learning_github
CPP_Learning_github_OBJECTS = \
"CMakeFiles/CPP_Learning_github.dir/变量.cpp.o"

# External object files for target CPP_Learning_github
CPP_Learning_github_EXTERNAL_OBJECTS =

CPP_Learning_github: CMakeFiles/CPP_Learning_github.dir/变量.cpp.o
CPP_Learning_github: CMakeFiles/CPP_Learning_github.dir/build.make
CPP_Learning_github: CMakeFiles/CPP_Learning_github.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/Rayliu40k/CLionProjects/CPP_Learning_github/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable CPP_Learning_github"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/CPP_Learning_github.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/CPP_Learning_github.dir/build: CPP_Learning_github

.PHONY : CMakeFiles/CPP_Learning_github.dir/build

CMakeFiles/CPP_Learning_github.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/CPP_Learning_github.dir/cmake_clean.cmake
.PHONY : CMakeFiles/CPP_Learning_github.dir/clean

CMakeFiles/CPP_Learning_github.dir/depend:
	cd /Users/Rayliu40k/CLionProjects/CPP_Learning_github/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/Rayliu40k/CLionProjects/CPP_Learning_github /Users/Rayliu40k/CLionProjects/CPP_Learning_github /Users/Rayliu40k/CLionProjects/CPP_Learning_github/cmake-build-debug /Users/Rayliu40k/CLionProjects/CPP_Learning_github/cmake-build-debug /Users/Rayliu40k/CLionProjects/CPP_Learning_github/cmake-build-debug/CMakeFiles/CPP_Learning_github.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/CPP_Learning_github.dir/depend

