# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.26

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/anarchyst/AnimeForAll

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/anarchyst/AnimeForAll/build

# Utility rule file for AnimeForAll_autogen.

# Include any custom commands dependencies for this target.
include CMakeFiles/AnimeForAll_autogen.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/AnimeForAll_autogen.dir/progress.make

CMakeFiles/AnimeForAll_autogen:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/anarchyst/AnimeForAll/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic MOC and UIC for target AnimeForAll"
	/usr/bin/cmake -E cmake_autogen /home/anarchyst/AnimeForAll/build/CMakeFiles/AnimeForAll_autogen.dir/AutogenInfo.json ""

AnimeForAll_autogen: CMakeFiles/AnimeForAll_autogen
AnimeForAll_autogen: CMakeFiles/AnimeForAll_autogen.dir/build.make
.PHONY : AnimeForAll_autogen

# Rule to build all files generated by this target.
CMakeFiles/AnimeForAll_autogen.dir/build: AnimeForAll_autogen
.PHONY : CMakeFiles/AnimeForAll_autogen.dir/build

CMakeFiles/AnimeForAll_autogen.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/AnimeForAll_autogen.dir/cmake_clean.cmake
.PHONY : CMakeFiles/AnimeForAll_autogen.dir/clean

CMakeFiles/AnimeForAll_autogen.dir/depend:
	cd /home/anarchyst/AnimeForAll/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/anarchyst/AnimeForAll /home/anarchyst/AnimeForAll /home/anarchyst/AnimeForAll/build /home/anarchyst/AnimeForAll/build /home/anarchyst/AnimeForAll/build/CMakeFiles/AnimeForAll_autogen.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/AnimeForAll_autogen.dir/depend
