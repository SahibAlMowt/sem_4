# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.28

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
CMAKE_SOURCE_DIR = "/home/stud-24/Desktop/Sahib Shukuru/projects_2/01.04___qt1/first"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/home/stud-24/Desktop/Sahib Shukuru/projects_2/01.04___qt1/first/build"

# Include any dependencies generated for this target.
include CMakeFiles/first.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/first.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/first.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/first.dir/flags.make

first_autogen/timestamp: /usr/lib/qt5/bin/moc
first_autogen/timestamp: CMakeFiles/first.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir="/home/stud-24/Desktop/Sahib Shukuru/projects_2/01.04___qt1/first/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Automatic MOC and UIC for target first"
	/usr/bin/cmake -E cmake_autogen "/home/stud-24/Desktop/Sahib Shukuru/projects_2/01.04___qt1/first/build/CMakeFiles/first_autogen.dir/AutogenInfo.json" ""
	/usr/bin/cmake -E touch "/home/stud-24/Desktop/Sahib Shukuru/projects_2/01.04___qt1/first/build/first_autogen/timestamp"

CMakeFiles/first.dir/first_autogen/mocs_compilation.cpp.o: CMakeFiles/first.dir/flags.make
CMakeFiles/first.dir/first_autogen/mocs_compilation.cpp.o: first_autogen/mocs_compilation.cpp
CMakeFiles/first.dir/first_autogen/mocs_compilation.cpp.o: CMakeFiles/first.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="/home/stud-24/Desktop/Sahib Shukuru/projects_2/01.04___qt1/first/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/first.dir/first_autogen/mocs_compilation.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/first.dir/first_autogen/mocs_compilation.cpp.o -MF CMakeFiles/first.dir/first_autogen/mocs_compilation.cpp.o.d -o CMakeFiles/first.dir/first_autogen/mocs_compilation.cpp.o -c "/home/stud-24/Desktop/Sahib Shukuru/projects_2/01.04___qt1/first/build/first_autogen/mocs_compilation.cpp"

CMakeFiles/first.dir/first_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/first.dir/first_autogen/mocs_compilation.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/stud-24/Desktop/Sahib Shukuru/projects_2/01.04___qt1/first/build/first_autogen/mocs_compilation.cpp" > CMakeFiles/first.dir/first_autogen/mocs_compilation.cpp.i

CMakeFiles/first.dir/first_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/first.dir/first_autogen/mocs_compilation.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/stud-24/Desktop/Sahib Shukuru/projects_2/01.04___qt1/first/build/first_autogen/mocs_compilation.cpp" -o CMakeFiles/first.dir/first_autogen/mocs_compilation.cpp.s

CMakeFiles/first.dir/main.cpp.o: CMakeFiles/first.dir/flags.make
CMakeFiles/first.dir/main.cpp.o: /home/stud-24/Desktop/Sahib\ Shukuru/projects_2/01.04___qt1/first/main.cpp
CMakeFiles/first.dir/main.cpp.o: CMakeFiles/first.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="/home/stud-24/Desktop/Sahib Shukuru/projects_2/01.04___qt1/first/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/first.dir/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/first.dir/main.cpp.o -MF CMakeFiles/first.dir/main.cpp.o.d -o CMakeFiles/first.dir/main.cpp.o -c "/home/stud-24/Desktop/Sahib Shukuru/projects_2/01.04___qt1/first/main.cpp"

CMakeFiles/first.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/first.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/stud-24/Desktop/Sahib Shukuru/projects_2/01.04___qt1/first/main.cpp" > CMakeFiles/first.dir/main.cpp.i

CMakeFiles/first.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/first.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/stud-24/Desktop/Sahib Shukuru/projects_2/01.04___qt1/first/main.cpp" -o CMakeFiles/first.dir/main.cpp.s

# Object files for target first
first_OBJECTS = \
"CMakeFiles/first.dir/first_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/first.dir/main.cpp.o"

# External object files for target first
first_EXTERNAL_OBJECTS =

first: CMakeFiles/first.dir/first_autogen/mocs_compilation.cpp.o
first: CMakeFiles/first.dir/main.cpp.o
first: CMakeFiles/first.dir/build.make
first: /usr/lib/x86_64-linux-gnu/libQt5Core.so.5.15.13
first: CMakeFiles/first.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir="/home/stud-24/Desktop/Sahib Shukuru/projects_2/01.04___qt1/first/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable first"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/first.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/first.dir/build: first
.PHONY : CMakeFiles/first.dir/build

CMakeFiles/first.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/first.dir/cmake_clean.cmake
.PHONY : CMakeFiles/first.dir/clean

CMakeFiles/first.dir/depend: first_autogen/timestamp
	cd "/home/stud-24/Desktop/Sahib Shukuru/projects_2/01.04___qt1/first/build" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/stud-24/Desktop/Sahib Shukuru/projects_2/01.04___qt1/first" "/home/stud-24/Desktop/Sahib Shukuru/projects_2/01.04___qt1/first" "/home/stud-24/Desktop/Sahib Shukuru/projects_2/01.04___qt1/first/build" "/home/stud-24/Desktop/Sahib Shukuru/projects_2/01.04___qt1/first/build" "/home/stud-24/Desktop/Sahib Shukuru/projects_2/01.04___qt1/first/build/CMakeFiles/first.dir/DependInfo.cmake" "--color=$(COLOR)"
.PHONY : CMakeFiles/first.dir/depend

