cmake_minimum_required(VERSION 3.12)
project(myprog)

set(CMAKE_CXX_STANDARD 11)

# Set the output directory for the executable
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

# Add the main executable
add_executable(myprog main.cpp)

# Include the 'include' directory for header files
target_include_directories(myprog PRIVATE mylib/include)

# Determine the library extension based on the operating system
if(WIN32)
	set(LIB_EXTENSION ".dll")
elseif(APPLE)
	set(LIB_EXTENSION ".dylib")
else()
	set(LIB_EXTENSION ".so")
endif()

# Link against the shared library
target_link_libraries(myprog PRIVATE ${CMAKE_SOURCE_DIR}/mylib/build/lib/libmylib${LIB_EXTENSION})
