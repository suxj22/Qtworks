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
CMAKE_COMMAND = /usr/local/Cellar/cmake/3.26.4/bin/cmake

# The command to remove a file.
RM = /usr/local/Cellar/cmake/3.26.4/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/suxingjian/Documents/GitHub/Qtworks/hw04_2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/suxingjian/Documents/GitHub/Qtworks/build-hw04_2-Qt_6_5_1-Debug

# Include any dependencies generated for this target.
include CMakeFiles/hw04_2.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/hw04_2.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/hw04_2.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/hw04_2.dir/flags.make

CMakeFiles/hw04_2.dir/hw04_2_autogen/mocs_compilation.cpp.o: CMakeFiles/hw04_2.dir/flags.make
CMakeFiles/hw04_2.dir/hw04_2_autogen/mocs_compilation.cpp.o: hw04_2_autogen/mocs_compilation.cpp
CMakeFiles/hw04_2.dir/hw04_2_autogen/mocs_compilation.cpp.o: CMakeFiles/hw04_2.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/suxingjian/Documents/GitHub/Qtworks/build-hw04_2-Qt_6_5_1-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/hw04_2.dir/hw04_2_autogen/mocs_compilation.cpp.o"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/hw04_2.dir/hw04_2_autogen/mocs_compilation.cpp.o -MF CMakeFiles/hw04_2.dir/hw04_2_autogen/mocs_compilation.cpp.o.d -o CMakeFiles/hw04_2.dir/hw04_2_autogen/mocs_compilation.cpp.o -c /Users/suxingjian/Documents/GitHub/Qtworks/build-hw04_2-Qt_6_5_1-Debug/hw04_2_autogen/mocs_compilation.cpp

CMakeFiles/hw04_2.dir/hw04_2_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/hw04_2.dir/hw04_2_autogen/mocs_compilation.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/suxingjian/Documents/GitHub/Qtworks/build-hw04_2-Qt_6_5_1-Debug/hw04_2_autogen/mocs_compilation.cpp > CMakeFiles/hw04_2.dir/hw04_2_autogen/mocs_compilation.cpp.i

CMakeFiles/hw04_2.dir/hw04_2_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/hw04_2.dir/hw04_2_autogen/mocs_compilation.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/suxingjian/Documents/GitHub/Qtworks/build-hw04_2-Qt_6_5_1-Debug/hw04_2_autogen/mocs_compilation.cpp -o CMakeFiles/hw04_2.dir/hw04_2_autogen/mocs_compilation.cpp.s

CMakeFiles/hw04_2.dir/main.cpp.o: CMakeFiles/hw04_2.dir/flags.make
CMakeFiles/hw04_2.dir/main.cpp.o: /Users/suxingjian/Documents/GitHub/Qtworks/hw04_2/main.cpp
CMakeFiles/hw04_2.dir/main.cpp.o: CMakeFiles/hw04_2.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/suxingjian/Documents/GitHub/Qtworks/build-hw04_2-Qt_6_5_1-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/hw04_2.dir/main.cpp.o"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/hw04_2.dir/main.cpp.o -MF CMakeFiles/hw04_2.dir/main.cpp.o.d -o CMakeFiles/hw04_2.dir/main.cpp.o -c /Users/suxingjian/Documents/GitHub/Qtworks/hw04_2/main.cpp

CMakeFiles/hw04_2.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/hw04_2.dir/main.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/suxingjian/Documents/GitHub/Qtworks/hw04_2/main.cpp > CMakeFiles/hw04_2.dir/main.cpp.i

CMakeFiles/hw04_2.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/hw04_2.dir/main.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/suxingjian/Documents/GitHub/Qtworks/hw04_2/main.cpp -o CMakeFiles/hw04_2.dir/main.cpp.s

CMakeFiles/hw04_2.dir/temperaturemonitormainwindow.cpp.o: CMakeFiles/hw04_2.dir/flags.make
CMakeFiles/hw04_2.dir/temperaturemonitormainwindow.cpp.o: /Users/suxingjian/Documents/GitHub/Qtworks/hw04_2/temperaturemonitormainwindow.cpp
CMakeFiles/hw04_2.dir/temperaturemonitormainwindow.cpp.o: CMakeFiles/hw04_2.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/suxingjian/Documents/GitHub/Qtworks/build-hw04_2-Qt_6_5_1-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/hw04_2.dir/temperaturemonitormainwindow.cpp.o"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/hw04_2.dir/temperaturemonitormainwindow.cpp.o -MF CMakeFiles/hw04_2.dir/temperaturemonitormainwindow.cpp.o.d -o CMakeFiles/hw04_2.dir/temperaturemonitormainwindow.cpp.o -c /Users/suxingjian/Documents/GitHub/Qtworks/hw04_2/temperaturemonitormainwindow.cpp

CMakeFiles/hw04_2.dir/temperaturemonitormainwindow.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/hw04_2.dir/temperaturemonitormainwindow.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/suxingjian/Documents/GitHub/Qtworks/hw04_2/temperaturemonitormainwindow.cpp > CMakeFiles/hw04_2.dir/temperaturemonitormainwindow.cpp.i

CMakeFiles/hw04_2.dir/temperaturemonitormainwindow.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/hw04_2.dir/temperaturemonitormainwindow.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/suxingjian/Documents/GitHub/Qtworks/hw04_2/temperaturemonitormainwindow.cpp -o CMakeFiles/hw04_2.dir/temperaturemonitormainwindow.cpp.s

# Object files for target hw04_2
hw04_2_OBJECTS = \
"CMakeFiles/hw04_2.dir/hw04_2_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/hw04_2.dir/main.cpp.o" \
"CMakeFiles/hw04_2.dir/temperaturemonitormainwindow.cpp.o"

# External object files for target hw04_2
hw04_2_EXTERNAL_OBJECTS =

hw04_2.app/Contents/MacOS/hw04_2: CMakeFiles/hw04_2.dir/hw04_2_autogen/mocs_compilation.cpp.o
hw04_2.app/Contents/MacOS/hw04_2: CMakeFiles/hw04_2.dir/main.cpp.o
hw04_2.app/Contents/MacOS/hw04_2: CMakeFiles/hw04_2.dir/temperaturemonitormainwindow.cpp.o
hw04_2.app/Contents/MacOS/hw04_2: CMakeFiles/hw04_2.dir/build.make
hw04_2.app/Contents/MacOS/hw04_2: /opt/homebrew/lib/QtWidgets.framework/Versions/A/QtWidgets
hw04_2.app/Contents/MacOS/hw04_2: /opt/homebrew/lib/QtGui.framework/Versions/A/QtGui
hw04_2.app/Contents/MacOS/hw04_2: /opt/homebrew/lib/QtCore.framework/Versions/A/QtCore
hw04_2.app/Contents/MacOS/hw04_2: CMakeFiles/hw04_2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/suxingjian/Documents/GitHub/Qtworks/build-hw04_2-Qt_6_5_1-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable hw04_2.app/Contents/MacOS/hw04_2"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/hw04_2.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/hw04_2.dir/build: hw04_2.app/Contents/MacOS/hw04_2
.PHONY : CMakeFiles/hw04_2.dir/build

CMakeFiles/hw04_2.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/hw04_2.dir/cmake_clean.cmake
.PHONY : CMakeFiles/hw04_2.dir/clean

CMakeFiles/hw04_2.dir/depend:
	cd /Users/suxingjian/Documents/GitHub/Qtworks/build-hw04_2-Qt_6_5_1-Debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/suxingjian/Documents/GitHub/Qtworks/hw04_2 /Users/suxingjian/Documents/GitHub/Qtworks/hw04_2 /Users/suxingjian/Documents/GitHub/Qtworks/build-hw04_2-Qt_6_5_1-Debug /Users/suxingjian/Documents/GitHub/Qtworks/build-hw04_2-Qt_6_5_1-Debug /Users/suxingjian/Documents/GitHub/Qtworks/build-hw04_2-Qt_6_5_1-Debug/CMakeFiles/hw04_2.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/hw04_2.dir/depend
