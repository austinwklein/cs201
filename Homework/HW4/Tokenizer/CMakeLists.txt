cmake_minimum_required(VERSION 3.17)
# folder 2 above CMAKE
project(Homework)

set(CMAKE_CXX_STANDARD 20)

# Folder above CMAKE 'space' filename.cpp
add_executable(Tokenizer tokenizer.cpp tokenizer.hpp tokenizertest.cpp)