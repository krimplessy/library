cmake_minimum_required(VERSION 3.20.2)
project(library)

set(CMAKE_CXX_STANDARD 23)

add_executable(library main.cpp vector.h person.cpp person.h Book.cpp Book.h LibraryCard.cpp LibraryCard.h LibraryCardSystem.cpp LibraryCardSystem.h)
