cmake_minimum_required(VERSION 3.29)
project(LJK_CWorkspace C)

set(CMAKE_C_STANDARD 11)

add_executable(LJK_CWorkspace Day01_初识输入输出/src/main.c
        Day01_初识输入输出/include/public_header.h
        Day01_初识输入输出/src/private_header.h
        "Day01_初识输入输出/src/Day01_scanf & printf.h"
        "Day01_初识输入输出/src/Day01_scanf & printf.c")
