cmake_minimum_required(VERSION 3.10)
project(PRJ_NAME)

set(EXE "a.out")
set(SOURCE_TYPE "c")

file(GLOB_RECURSE SOURCES "Source/*.${SOURCE_TYPE}")
add_executable(${EXE} ${SOURCES})
