# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.1

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
CMAKE_COMMAND = /usr/local/Cellar/cmake/3.1.3/bin/cmake

# The command to remove a file.
RM = /usr/local/Cellar/cmake/3.1.3/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/thomas/LIFE5/lifev-em/tools/install_scripts/app/dummy

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/thomas/LIFE5/lifev-em/tools/install_scripts/app

# Include any dependencies generated for this target.
include CMakeFiles/dummyApp.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/dummyApp.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/dummyApp.dir/flags.make

CMakeFiles/dummyApp.dir/dummy.cpp.o: CMakeFiles/dummyApp.dir/flags.make
CMakeFiles/dummyApp.dir/dummy.cpp.o: dummy/dummy.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /Users/thomas/LIFE5/lifev-em/tools/install_scripts/app/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/dummyApp.dir/dummy.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/dummyApp.dir/dummy.cpp.o -c /Users/thomas/LIFE5/lifev-em/tools/install_scripts/app/dummy/dummy.cpp

CMakeFiles/dummyApp.dir/dummy.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/dummyApp.dir/dummy.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /Users/thomas/LIFE5/lifev-em/tools/install_scripts/app/dummy/dummy.cpp > CMakeFiles/dummyApp.dir/dummy.cpp.i

CMakeFiles/dummyApp.dir/dummy.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/dummyApp.dir/dummy.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /Users/thomas/LIFE5/lifev-em/tools/install_scripts/app/dummy/dummy.cpp -o CMakeFiles/dummyApp.dir/dummy.cpp.s

CMakeFiles/dummyApp.dir/dummy.cpp.o.requires:
.PHONY : CMakeFiles/dummyApp.dir/dummy.cpp.o.requires

CMakeFiles/dummyApp.dir/dummy.cpp.o.provides: CMakeFiles/dummyApp.dir/dummy.cpp.o.requires
	$(MAKE) -f CMakeFiles/dummyApp.dir/build.make CMakeFiles/dummyApp.dir/dummy.cpp.o.provides.build
.PHONY : CMakeFiles/dummyApp.dir/dummy.cpp.o.provides

CMakeFiles/dummyApp.dir/dummy.cpp.o.provides.build: CMakeFiles/dummyApp.dir/dummy.cpp.o

# Object files for target dummyApp
dummyApp_OBJECTS = \
"CMakeFiles/dummyApp.dir/dummy.cpp.o"

# External object files for target dummyApp
dummyApp_EXTERNAL_OBJECTS =

dummyApp: CMakeFiles/dummyApp.dir/dummy.cpp.o
dummyApp: CMakeFiles/dummyApp.dir/build.make
dummyApp: CMakeFiles/dummyApp.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable dummyApp"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/dummyApp.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/dummyApp.dir/build: dummyApp
.PHONY : CMakeFiles/dummyApp.dir/build

CMakeFiles/dummyApp.dir/requires: CMakeFiles/dummyApp.dir/dummy.cpp.o.requires
.PHONY : CMakeFiles/dummyApp.dir/requires

CMakeFiles/dummyApp.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/dummyApp.dir/cmake_clean.cmake
.PHONY : CMakeFiles/dummyApp.dir/clean

CMakeFiles/dummyApp.dir/depend:
	cd /Users/thomas/LIFE5/lifev-em/tools/install_scripts/app && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/thomas/LIFE5/lifev-em/tools/install_scripts/app/dummy /Users/thomas/LIFE5/lifev-em/tools/install_scripts/app/dummy /Users/thomas/LIFE5/lifev-em/tools/install_scripts/app /Users/thomas/LIFE5/lifev-em/tools/install_scripts/app /Users/thomas/LIFE5/lifev-em/tools/install_scripts/app/CMakeFiles/dummyApp.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/dummyApp.dir/depend

