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
CMAKE_COMMAND = /usr/bin/cmake.exe

# The command to remove a file.
RM = /usr/bin/cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /cygdrive/c/code/Sound

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /cygdrive/c/code/Sound/build

# Include any dependencies generated for this target.
include CMakeFiles/BrazzSound.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/BrazzSound.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/BrazzSound.dir/flags.make

CMakeFiles/BrazzSound.dir/source/WaveOutInterface.cpp.o: CMakeFiles/BrazzSound.dir/flags.make
CMakeFiles/BrazzSound.dir/source/WaveOutInterface.cpp.o: ../source/WaveOutInterface.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/c/code/Sound/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/BrazzSound.dir/source/WaveOutInterface.cpp.o"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/BrazzSound.dir/source/WaveOutInterface.cpp.o -c /cygdrive/c/code/Sound/source/WaveOutInterface.cpp

CMakeFiles/BrazzSound.dir/source/WaveOutInterface.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/BrazzSound.dir/source/WaveOutInterface.cpp.i"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /cygdrive/c/code/Sound/source/WaveOutInterface.cpp > CMakeFiles/BrazzSound.dir/source/WaveOutInterface.cpp.i

CMakeFiles/BrazzSound.dir/source/WaveOutInterface.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/BrazzSound.dir/source/WaveOutInterface.cpp.s"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /cygdrive/c/code/Sound/source/WaveOutInterface.cpp -o CMakeFiles/BrazzSound.dir/source/WaveOutInterface.cpp.s

CMakeFiles/BrazzSound.dir/source/BrazzSound.cpp.o: CMakeFiles/BrazzSound.dir/flags.make
CMakeFiles/BrazzSound.dir/source/BrazzSound.cpp.o: ../source/BrazzSound.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/c/code/Sound/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/BrazzSound.dir/source/BrazzSound.cpp.o"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/BrazzSound.dir/source/BrazzSound.cpp.o -c /cygdrive/c/code/Sound/source/BrazzSound.cpp

CMakeFiles/BrazzSound.dir/source/BrazzSound.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/BrazzSound.dir/source/BrazzSound.cpp.i"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /cygdrive/c/code/Sound/source/BrazzSound.cpp > CMakeFiles/BrazzSound.dir/source/BrazzSound.cpp.i

CMakeFiles/BrazzSound.dir/source/BrazzSound.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/BrazzSound.dir/source/BrazzSound.cpp.s"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /cygdrive/c/code/Sound/source/BrazzSound.cpp -o CMakeFiles/BrazzSound.dir/source/BrazzSound.cpp.s

CMakeFiles/BrazzSound.dir/source/BrazzSoundFactory.cpp.o: CMakeFiles/BrazzSound.dir/flags.make
CMakeFiles/BrazzSound.dir/source/BrazzSoundFactory.cpp.o: ../source/BrazzSoundFactory.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/c/code/Sound/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/BrazzSound.dir/source/BrazzSoundFactory.cpp.o"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/BrazzSound.dir/source/BrazzSoundFactory.cpp.o -c /cygdrive/c/code/Sound/source/BrazzSoundFactory.cpp

CMakeFiles/BrazzSound.dir/source/BrazzSoundFactory.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/BrazzSound.dir/source/BrazzSoundFactory.cpp.i"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /cygdrive/c/code/Sound/source/BrazzSoundFactory.cpp > CMakeFiles/BrazzSound.dir/source/BrazzSoundFactory.cpp.i

CMakeFiles/BrazzSound.dir/source/BrazzSoundFactory.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/BrazzSound.dir/source/BrazzSoundFactory.cpp.s"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /cygdrive/c/code/Sound/source/BrazzSoundFactory.cpp -o CMakeFiles/BrazzSound.dir/source/BrazzSoundFactory.cpp.s

CMakeFiles/BrazzSound.dir/source/BrazzSoundData.cpp.o: CMakeFiles/BrazzSound.dir/flags.make
CMakeFiles/BrazzSound.dir/source/BrazzSoundData.cpp.o: ../source/BrazzSoundData.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/c/code/Sound/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/BrazzSound.dir/source/BrazzSoundData.cpp.o"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/BrazzSound.dir/source/BrazzSoundData.cpp.o -c /cygdrive/c/code/Sound/source/BrazzSoundData.cpp

CMakeFiles/BrazzSound.dir/source/BrazzSoundData.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/BrazzSound.dir/source/BrazzSoundData.cpp.i"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /cygdrive/c/code/Sound/source/BrazzSoundData.cpp > CMakeFiles/BrazzSound.dir/source/BrazzSoundData.cpp.i

CMakeFiles/BrazzSound.dir/source/BrazzSoundData.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/BrazzSound.dir/source/BrazzSoundData.cpp.s"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /cygdrive/c/code/Sound/source/BrazzSoundData.cpp -o CMakeFiles/BrazzSound.dir/source/BrazzSoundData.cpp.s

CMakeFiles/BrazzSound.dir/source/BrazzSoundManager.cpp.o: CMakeFiles/BrazzSound.dir/flags.make
CMakeFiles/BrazzSound.dir/source/BrazzSoundManager.cpp.o: ../source/BrazzSoundManager.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/c/code/Sound/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/BrazzSound.dir/source/BrazzSoundManager.cpp.o"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/BrazzSound.dir/source/BrazzSoundManager.cpp.o -c /cygdrive/c/code/Sound/source/BrazzSoundManager.cpp

CMakeFiles/BrazzSound.dir/source/BrazzSoundManager.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/BrazzSound.dir/source/BrazzSoundManager.cpp.i"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /cygdrive/c/code/Sound/source/BrazzSoundManager.cpp > CMakeFiles/BrazzSound.dir/source/BrazzSoundManager.cpp.i

CMakeFiles/BrazzSound.dir/source/BrazzSoundManager.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/BrazzSound.dir/source/BrazzSoundManager.cpp.s"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /cygdrive/c/code/Sound/source/BrazzSoundManager.cpp -o CMakeFiles/BrazzSound.dir/source/BrazzSoundManager.cpp.s

CMakeFiles/BrazzSound.dir/source/EffectsManager.cpp.o: CMakeFiles/BrazzSound.dir/flags.make
CMakeFiles/BrazzSound.dir/source/EffectsManager.cpp.o: ../source/EffectsManager.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/c/code/Sound/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/BrazzSound.dir/source/EffectsManager.cpp.o"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/BrazzSound.dir/source/EffectsManager.cpp.o -c /cygdrive/c/code/Sound/source/EffectsManager.cpp

CMakeFiles/BrazzSound.dir/source/EffectsManager.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/BrazzSound.dir/source/EffectsManager.cpp.i"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /cygdrive/c/code/Sound/source/EffectsManager.cpp > CMakeFiles/BrazzSound.dir/source/EffectsManager.cpp.i

CMakeFiles/BrazzSound.dir/source/EffectsManager.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/BrazzSound.dir/source/EffectsManager.cpp.s"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /cygdrive/c/code/Sound/source/EffectsManager.cpp -o CMakeFiles/BrazzSound.dir/source/EffectsManager.cpp.s

CMakeFiles/BrazzSound.dir/source/Note.cpp.o: CMakeFiles/BrazzSound.dir/flags.make
CMakeFiles/BrazzSound.dir/source/Note.cpp.o: ../source/Note.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/c/code/Sound/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/BrazzSound.dir/source/Note.cpp.o"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/BrazzSound.dir/source/Note.cpp.o -c /cygdrive/c/code/Sound/source/Note.cpp

CMakeFiles/BrazzSound.dir/source/Note.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/BrazzSound.dir/source/Note.cpp.i"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /cygdrive/c/code/Sound/source/Note.cpp > CMakeFiles/BrazzSound.dir/source/Note.cpp.i

CMakeFiles/BrazzSound.dir/source/Note.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/BrazzSound.dir/source/Note.cpp.s"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /cygdrive/c/code/Sound/source/Note.cpp -o CMakeFiles/BrazzSound.dir/source/Note.cpp.s

CMakeFiles/BrazzSound.dir/source/Envelope.cpp.o: CMakeFiles/BrazzSound.dir/flags.make
CMakeFiles/BrazzSound.dir/source/Envelope.cpp.o: ../source/Envelope.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/c/code/Sound/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/BrazzSound.dir/source/Envelope.cpp.o"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/BrazzSound.dir/source/Envelope.cpp.o -c /cygdrive/c/code/Sound/source/Envelope.cpp

CMakeFiles/BrazzSound.dir/source/Envelope.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/BrazzSound.dir/source/Envelope.cpp.i"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /cygdrive/c/code/Sound/source/Envelope.cpp > CMakeFiles/BrazzSound.dir/source/Envelope.cpp.i

CMakeFiles/BrazzSound.dir/source/Envelope.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/BrazzSound.dir/source/Envelope.cpp.s"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /cygdrive/c/code/Sound/source/Envelope.cpp -o CMakeFiles/BrazzSound.dir/source/Envelope.cpp.s

CMakeFiles/BrazzSound.dir/source/Instrument.cpp.o: CMakeFiles/BrazzSound.dir/flags.make
CMakeFiles/BrazzSound.dir/source/Instrument.cpp.o: ../source/Instrument.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/c/code/Sound/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/BrazzSound.dir/source/Instrument.cpp.o"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/BrazzSound.dir/source/Instrument.cpp.o -c /cygdrive/c/code/Sound/source/Instrument.cpp

CMakeFiles/BrazzSound.dir/source/Instrument.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/BrazzSound.dir/source/Instrument.cpp.i"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /cygdrive/c/code/Sound/source/Instrument.cpp > CMakeFiles/BrazzSound.dir/source/Instrument.cpp.i

CMakeFiles/BrazzSound.dir/source/Instrument.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/BrazzSound.dir/source/Instrument.cpp.s"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /cygdrive/c/code/Sound/source/Instrument.cpp -o CMakeFiles/BrazzSound.dir/source/Instrument.cpp.s

# Object files for target BrazzSound
BrazzSound_OBJECTS = \
"CMakeFiles/BrazzSound.dir/source/WaveOutInterface.cpp.o" \
"CMakeFiles/BrazzSound.dir/source/BrazzSound.cpp.o" \
"CMakeFiles/BrazzSound.dir/source/BrazzSoundFactory.cpp.o" \
"CMakeFiles/BrazzSound.dir/source/BrazzSoundData.cpp.o" \
"CMakeFiles/BrazzSound.dir/source/BrazzSoundManager.cpp.o" \
"CMakeFiles/BrazzSound.dir/source/EffectsManager.cpp.o" \
"CMakeFiles/BrazzSound.dir/source/Note.cpp.o" \
"CMakeFiles/BrazzSound.dir/source/Envelope.cpp.o" \
"CMakeFiles/BrazzSound.dir/source/Instrument.cpp.o"

# External object files for target BrazzSound
BrazzSound_EXTERNAL_OBJECTS =

../lib/libBrazzSound.a: CMakeFiles/BrazzSound.dir/source/WaveOutInterface.cpp.o
../lib/libBrazzSound.a: CMakeFiles/BrazzSound.dir/source/BrazzSound.cpp.o
../lib/libBrazzSound.a: CMakeFiles/BrazzSound.dir/source/BrazzSoundFactory.cpp.o
../lib/libBrazzSound.a: CMakeFiles/BrazzSound.dir/source/BrazzSoundData.cpp.o
../lib/libBrazzSound.a: CMakeFiles/BrazzSound.dir/source/BrazzSoundManager.cpp.o
../lib/libBrazzSound.a: CMakeFiles/BrazzSound.dir/source/EffectsManager.cpp.o
../lib/libBrazzSound.a: CMakeFiles/BrazzSound.dir/source/Note.cpp.o
../lib/libBrazzSound.a: CMakeFiles/BrazzSound.dir/source/Envelope.cpp.o
../lib/libBrazzSound.a: CMakeFiles/BrazzSound.dir/source/Instrument.cpp.o
../lib/libBrazzSound.a: CMakeFiles/BrazzSound.dir/build.make
../lib/libBrazzSound.a: CMakeFiles/BrazzSound.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/cygdrive/c/code/Sound/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Linking CXX static library ../lib/libBrazzSound.a"
	$(CMAKE_COMMAND) -P CMakeFiles/BrazzSound.dir/cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/BrazzSound.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/BrazzSound.dir/build: ../lib/libBrazzSound.a

.PHONY : CMakeFiles/BrazzSound.dir/build

CMakeFiles/BrazzSound.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/BrazzSound.dir/cmake_clean.cmake
.PHONY : CMakeFiles/BrazzSound.dir/clean

CMakeFiles/BrazzSound.dir/depend:
	cd /cygdrive/c/code/Sound/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /cygdrive/c/code/Sound /cygdrive/c/code/Sound /cygdrive/c/code/Sound/build /cygdrive/c/code/Sound/build /cygdrive/c/code/Sound/build/CMakeFiles/BrazzSound.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/BrazzSound.dir/depend

