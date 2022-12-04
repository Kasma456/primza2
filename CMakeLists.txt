cmake_minimum_required(VERSION 3.23)
project(primza2 C)

set(CMAKE_C_STANDARD 99)

add_executable(primza2 main.c input.c input.h determineprime.c determineprime.h output.c output.h)
