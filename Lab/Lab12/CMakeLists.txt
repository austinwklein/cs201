cmake_minimum_required(VERSION 3.17)
# folder 2 above CMAKE
project(Lab)

set(CMAKE_CXX_STANDARD 20)

# Folder above CMAKE 'space' filename.cpp
add_executable(Lab12 userInput.cpp userInput.hpp userInputMain.cpp)