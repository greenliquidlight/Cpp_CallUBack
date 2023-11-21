cmake_minimum_required(VERSION 3.20)

# Set the name of the project and the language it is written in
# CXX is included because we are using googletest.
project(Cpp_Callback C CXX)

# create a shared library
add_library(Cpp_Callback SHARED)

# add the include directory to the library
target_include_directories(Cpp_Callback PUBLIC include)

# add the sources to the library
target_sources(Cpp_Callback PUBLIC src/Cpp_Callback.cpp)

# Add the tests
include(CTest)
add_subdirectory(tests)
