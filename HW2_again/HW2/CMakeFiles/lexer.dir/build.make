# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.12

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

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/local/bin/cmake

# The command to remove a file.
RM = /usr/local/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/kab163/CIS561/HW2_again/HW2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/kab163/CIS561/HW2_again/HW2

# Include any dependencies generated for this target.
include CMakeFiles/lexer.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/lexer.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/lexer.dir/flags.make

lex.yy.cpp: quack.lxx
lex.yy.cpp: quack.tab.hxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/Users/kab163/CIS561/HW2_again/HW2/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating lex.yy.cpp, lex.yy.h"
	reflex --bison-cc --bison-locations --header-file /Users/kab163/CIS561/HW2_again/HW2/quack.lxx

lex.yy.h: lex.yy.cpp
	@$(CMAKE_COMMAND) -E touch_nocreate lex.yy.h

quack.tab.cxx: quack.yxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/Users/kab163/CIS561/HW2_again/HW2/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Generating quack.tab.cxx, quack.tab.hxx, location.hh, position.hh, stack.hh"
	bison -d /Users/kab163/CIS561/HW2_again/HW2/quack.yxx

quack.tab.hxx: quack.tab.cxx
	@$(CMAKE_COMMAND) -E touch_nocreate quack.tab.hxx

location.hh: quack.tab.cxx
	@$(CMAKE_COMMAND) -E touch_nocreate location.hh

position.hh: quack.tab.cxx
	@$(CMAKE_COMMAND) -E touch_nocreate position.hh

stack.hh: quack.tab.cxx
	@$(CMAKE_COMMAND) -E touch_nocreate stack.hh

CMakeFiles/lexer.dir/lex_driver.cpp.o: CMakeFiles/lexer.dir/flags.make
CMakeFiles/lexer.dir/lex_driver.cpp.o: lex_driver.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/kab163/CIS561/HW2_again/HW2/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/lexer.dir/lex_driver.cpp.o"
	/Users/kab163/Downloads/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/lexer.dir/lex_driver.cpp.o -c /Users/kab163/CIS561/HW2_again/HW2/lex_driver.cpp

CMakeFiles/lexer.dir/lex_driver.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lexer.dir/lex_driver.cpp.i"
	/Users/kab163/Downloads/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/kab163/CIS561/HW2_again/HW2/lex_driver.cpp > CMakeFiles/lexer.dir/lex_driver.cpp.i

CMakeFiles/lexer.dir/lex_driver.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lexer.dir/lex_driver.cpp.s"
	/Users/kab163/Downloads/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/kab163/CIS561/HW2_again/HW2/lex_driver.cpp -o CMakeFiles/lexer.dir/lex_driver.cpp.s

CMakeFiles/lexer.dir/lex.yy.cpp.o: CMakeFiles/lexer.dir/flags.make
CMakeFiles/lexer.dir/lex.yy.cpp.o: lex.yy.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/kab163/CIS561/HW2_again/HW2/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/lexer.dir/lex.yy.cpp.o"
	/Users/kab163/Downloads/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/lexer.dir/lex.yy.cpp.o -c /Users/kab163/CIS561/HW2_again/HW2/lex.yy.cpp

CMakeFiles/lexer.dir/lex.yy.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lexer.dir/lex.yy.cpp.i"
	/Users/kab163/Downloads/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/kab163/CIS561/HW2_again/HW2/lex.yy.cpp > CMakeFiles/lexer.dir/lex.yy.cpp.i

CMakeFiles/lexer.dir/lex.yy.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lexer.dir/lex.yy.cpp.s"
	/Users/kab163/Downloads/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/kab163/CIS561/HW2_again/HW2/lex.yy.cpp -o CMakeFiles/lexer.dir/lex.yy.cpp.s

CMakeFiles/lexer.dir/ASTNode.cpp.o: CMakeFiles/lexer.dir/flags.make
CMakeFiles/lexer.dir/ASTNode.cpp.o: ASTNode.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/kab163/CIS561/HW2_again/HW2/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/lexer.dir/ASTNode.cpp.o"
	/Users/kab163/Downloads/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/lexer.dir/ASTNode.cpp.o -c /Users/kab163/CIS561/HW2_again/HW2/ASTNode.cpp

CMakeFiles/lexer.dir/ASTNode.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lexer.dir/ASTNode.cpp.i"
	/Users/kab163/Downloads/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/kab163/CIS561/HW2_again/HW2/ASTNode.cpp > CMakeFiles/lexer.dir/ASTNode.cpp.i

CMakeFiles/lexer.dir/ASTNode.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lexer.dir/ASTNode.cpp.s"
	/Users/kab163/Downloads/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/kab163/CIS561/HW2_again/HW2/ASTNode.cpp -o CMakeFiles/lexer.dir/ASTNode.cpp.s

CMakeFiles/lexer.dir/Messages.cpp.o: CMakeFiles/lexer.dir/flags.make
CMakeFiles/lexer.dir/Messages.cpp.o: Messages.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/kab163/CIS561/HW2_again/HW2/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/lexer.dir/Messages.cpp.o"
	/Users/kab163/Downloads/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/lexer.dir/Messages.cpp.o -c /Users/kab163/CIS561/HW2_again/HW2/Messages.cpp

CMakeFiles/lexer.dir/Messages.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lexer.dir/Messages.cpp.i"
	/Users/kab163/Downloads/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/kab163/CIS561/HW2_again/HW2/Messages.cpp > CMakeFiles/lexer.dir/Messages.cpp.i

CMakeFiles/lexer.dir/Messages.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lexer.dir/Messages.cpp.s"
	/Users/kab163/Downloads/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/kab163/CIS561/HW2_again/HW2/Messages.cpp -o CMakeFiles/lexer.dir/Messages.cpp.s

# Object files for target lexer
lexer_OBJECTS = \
"CMakeFiles/lexer.dir/lex_driver.cpp.o" \
"CMakeFiles/lexer.dir/lex.yy.cpp.o" \
"CMakeFiles/lexer.dir/ASTNode.cpp.o" \
"CMakeFiles/lexer.dir/Messages.cpp.o"

# External object files for target lexer
lexer_EXTERNAL_OBJECTS =

lexer: CMakeFiles/lexer.dir/lex_driver.cpp.o
lexer: CMakeFiles/lexer.dir/lex.yy.cpp.o
lexer: CMakeFiles/lexer.dir/ASTNode.cpp.o
lexer: CMakeFiles/lexer.dir/Messages.cpp.o
lexer: CMakeFiles/lexer.dir/build.make
lexer: /usr/local/lib/libreflex.a
lexer: CMakeFiles/lexer.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/kab163/CIS561/HW2_again/HW2/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Linking CXX executable lexer"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/lexer.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/lexer.dir/build: lexer

.PHONY : CMakeFiles/lexer.dir/build

CMakeFiles/lexer.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/lexer.dir/cmake_clean.cmake
.PHONY : CMakeFiles/lexer.dir/clean

CMakeFiles/lexer.dir/depend: lex.yy.cpp
CMakeFiles/lexer.dir/depend: lex.yy.h
CMakeFiles/lexer.dir/depend: quack.tab.cxx
CMakeFiles/lexer.dir/depend: quack.tab.hxx
CMakeFiles/lexer.dir/depend: location.hh
CMakeFiles/lexer.dir/depend: position.hh
CMakeFiles/lexer.dir/depend: stack.hh
	cd /Users/kab163/CIS561/HW2_again/HW2 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/kab163/CIS561/HW2_again/HW2 /Users/kab163/CIS561/HW2_again/HW2 /Users/kab163/CIS561/HW2_again/HW2 /Users/kab163/CIS561/HW2_again/HW2 /Users/kab163/CIS561/HW2_again/HW2/CMakeFiles/lexer.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/lexer.dir/depend

