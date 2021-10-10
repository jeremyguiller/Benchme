cmake_minimum_required(VERSION 3.20)
project(Benchme C)

set(CMAKE_C_STANDARD 99)

add_executable(Benchme main.c Tri_bulle.c Tri_insertion.c Tri_selection.c Tri_tas.c Fonctions.h Bench.c)
