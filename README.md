# Implementing Dynamic Libraries in C++ - Starter Code

This repository provides a basic example on how to create dynamic libraries (`.dll`, `.so`, `.dynlib`) by C++. These dynamic libraries bundle executable code and can be shared across multiple applications written in different languages. Example client applications 
that call the library functions are included.

## Instructions

Start by cloning the repository and entering it.

```sh
git clone https://github.com/blitzingeagle/DynamicLibraryCpp.git
cd DynamicLibraryCpp
```

### Compile the dynamic library

Navigate to the `mylib` directory, containing the example library code that will be compiled into a dynamic library. The `CMakeLists.txt` has been provided. Use CMake to build.

```sh
cd mylib
mkdir build
cd build
cmake ..
cmake --build .
```

This will compile the dynamic library and create `lib/libmylib.dll`, `lib/libmylib.so`, or `lib/libmylib.dylib` depending on if you are on Windows, Linux, or MacOS.


### Compile the client application

Navigate to the root directory of the repository. Here contains a sample client program that uses a function created in the dynamic library located under `mylib/build/lib/`.

```sh
cd ../..
mkdir build
cd build
cmake ..
cmake --build .
```

Now to execute the program, run the executable created by the build.

```sh
./bin/myprog
```

The program will run using a library function from mylib.
