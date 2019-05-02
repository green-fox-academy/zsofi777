cmake_minimum_required(VERSION 3.13)
project(AnimalsInTheZoo)

set(CMAKE_CXX_STANDARD 14)

add_executable(AnimalsInTheZoo main.cpp Animal.h Animal.cpp Bird.h Bird.cpp Reptile.h Reptile.cpp Mammal.h Mammal.cpp)