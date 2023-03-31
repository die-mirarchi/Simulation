cmake_minimum_required(VERSION 3.24)
project(Simulation C)

set(CMAKE_C_STANDARD 90)

add_executable(Simulation main.c wave_fun.h wave_fun.c)
