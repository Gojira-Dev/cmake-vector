# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.18

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
CMAKE_COMMAND = "C:\Program Files (x86)\Microsoft Visual Studio\2019\Community\Common7\IDE\CommonExtensions\Microsoft\CMake\CMake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files (x86)\Microsoft Visual Studio\2019\Community\Common7\IDE\CommonExtensions\Microsoft\CMake\CMake\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\Admin\Documents\projects\cmake-vector

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\Admin\Documents\projects\cmake-vector\build

# Include any dependencies generated for this target.
include src/CMakeFiles/Vector.dir/depend.make

# Include the progress variables for this target.
include src/CMakeFiles/Vector.dir/progress.make

# Include the compile flags for this target's objects.
include src/CMakeFiles/Vector.dir/flags.make

src/CMakeFiles/Vector.dir/Vector.cpp.obj: src/CMakeFiles/Vector.dir/flags.make
src/CMakeFiles/Vector.dir/Vector.cpp.obj: src/CMakeFiles/Vector.dir/includes_CXX.rsp
src/CMakeFiles/Vector.dir/Vector.cpp.obj: ../src/Vector.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Admin\Documents\projects\cmake-vector\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/CMakeFiles/Vector.dir/Vector.cpp.obj"
	cd /d C:\Users\Admin\Documents\projects\cmake-vector\build\src && C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Vector.dir\Vector.cpp.obj -c C:\Users\Admin\Documents\projects\cmake-vector\src\Vector.cpp

src/CMakeFiles/Vector.dir/Vector.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Vector.dir/Vector.cpp.i"
	cd /d C:\Users\Admin\Documents\projects\cmake-vector\build\src && C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Admin\Documents\projects\cmake-vector\src\Vector.cpp > CMakeFiles\Vector.dir\Vector.cpp.i

src/CMakeFiles/Vector.dir/Vector.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Vector.dir/Vector.cpp.s"
	cd /d C:\Users\Admin\Documents\projects\cmake-vector\build\src && C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Admin\Documents\projects\cmake-vector\src\Vector.cpp -o CMakeFiles\Vector.dir\Vector.cpp.s

# Object files for target Vector
Vector_OBJECTS = \
"CMakeFiles/Vector.dir/Vector.cpp.obj"

# External object files for target Vector
Vector_EXTERNAL_OBJECTS =

src/libVector.a: src/CMakeFiles/Vector.dir/Vector.cpp.obj
src/libVector.a: src/CMakeFiles/Vector.dir/build.make
src/libVector.a: src/CMakeFiles/Vector.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\Admin\Documents\projects\cmake-vector\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libVector.a"
	cd /d C:\Users\Admin\Documents\projects\cmake-vector\build\src && $(CMAKE_COMMAND) -P CMakeFiles\Vector.dir\cmake_clean_target.cmake
	cd /d C:\Users\Admin\Documents\projects\cmake-vector\build\src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Vector.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/CMakeFiles/Vector.dir/build: src/libVector.a

.PHONY : src/CMakeFiles/Vector.dir/build

src/CMakeFiles/Vector.dir/clean:
	cd /d C:\Users\Admin\Documents\projects\cmake-vector\build\src && $(CMAKE_COMMAND) -P CMakeFiles\Vector.dir\cmake_clean.cmake
.PHONY : src/CMakeFiles/Vector.dir/clean

src/CMakeFiles/Vector.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\Admin\Documents\projects\cmake-vector C:\Users\Admin\Documents\projects\cmake-vector\src C:\Users\Admin\Documents\projects\cmake-vector\build C:\Users\Admin\Documents\projects\cmake-vector\build\src C:\Users\Admin\Documents\projects\cmake-vector\build\src\CMakeFiles\Vector.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : src/CMakeFiles/Vector.dir/depend
