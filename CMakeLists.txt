cmake_minimum_required(VERSION 3.2)

project(BrazzSound)

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR})

link_directories(${CMAKE_SOURCE_DIR}/lib)

set(SOURCES
	source/WaveOutInterface.cpp
	source/BrazzSound.cpp
	source/Note.cpp
	source/Envelope.cpp
	source/Instrument.cpp)

add_library(BrazzSound STATIC ${SOURCES})
target_include_directories(BrazzSound PUBLIC include)
target_link_libraries(BrazzSound winmm)

add_executable(test test/test.cpp)
target_link_libraries(test BrazzSound winmm)