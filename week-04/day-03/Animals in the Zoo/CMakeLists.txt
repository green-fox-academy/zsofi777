cmake_minimum_required(VERSION 3.13)
project(Animals_in_the_Zoo)

set(CMAKE_CXX_STANDARD 14)

add_executable(Animals_in_the_Zoo main.cpp Animal.cpp Animal.h Mammal.cpp Mammal.h Reptile.cpp Reptile.h Bird.cpp Bird.h)