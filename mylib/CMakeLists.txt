cmake_minimum_required(VERSION 3.12)
project(example_dll)

set(CMAKE_CXX_STANDARD 11)

# Set the output directory for the DLL/SO
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

# Source files
set(SOURCE_FILES src/example.cpp)

# Create the DLL/SO
add_library(example_lib SHARED ${SOURCE_FILES})

# Include directories
target_include_directories(example_lib PRIVATE include)

