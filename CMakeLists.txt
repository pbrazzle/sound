cmake_minimum_required(VERSION 3.2)

project(BrazzSound)

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR})

link_directories(${CMAKE_SOURCE_DIR}/lib)

set(HEADERS
	include/WaveOutInterface.hpp
	include/BrazzSound.hpp
	include/BrazzSoundFactory.hpp
	include/BrazzSoundData.hpp
	include/BrazzSoundManager.hpp
	include/EffectsManager.hpp
	include/Note.hpp
	include/Envelope.hpp
	include/Instrument.hpp)

set(SOURCES
	source/WaveOutInterface.cpp
	source/BrazzSound.cpp
	source/BrazzSoundFactory.cpp
	source/BrazzSoundData.cpp
	source/BrazzSoundManager.cpp
	source/EffectsManager.cpp
	source/Note.cpp
	source/Envelope.cpp
	source/Instrument.cpp)

add_library(BrazzSound STATIC ${SOURCES} ${HEADERS})
target_include_directories(BrazzSound PUBLIC include)
target_link_libraries(BrazzSound winmm)

add_executable(test test/test.cpp)
target_link_libraries(test BrazzSound winmm)