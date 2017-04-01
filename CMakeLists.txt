cmake_minimum_required(VERSION 3.5)
project(c)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp ex3.c ex6.c ex7.c ex8.c ex9.c ex10.c ex11.c ex12.c ex13.c ex14.c test1.c ex15.c ex16.c ex17.c ex18.c object.h object.c ex20.c dbg.h Makefile ex19.h ex19.c)
add_executable(c ${SOURCE_FILES})