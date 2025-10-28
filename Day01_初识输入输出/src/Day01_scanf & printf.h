//
// Created by 梁俊可 on 2025/10/28.
//
//1. 防止重复包含的保护
#ifndef LJK_CWORKSPACE_DAY01_SCANF_H
#define LJK_CWORKSPACE_DAY01_SCANF_H
void test_scanf(void);//函数声明
#endif //LJK_CWORKSPACE_DAY01_SCANF_H

/*
   1. 防止重复包含的保护
   2. 函数声明
        函数原型声明（不包含函数体）
        例如：void test_scanf(void);
    3. 宏定义
        常量定义：#define MAX_SIZE 100
        条件编译宏：#ifdef DEBUG
    4. 类型定义
        结构体声明：struct Student;
        typedef别名：typedef int BOOL;
        枚举类型：enum Color;
    5. 全局变量声明
        使用extern关键字：extern int global_var;
    6. 其他头文件包含
        系统头文件：#include <stdio.h>
        用户自定义头文件：#include "my_header.h"
    7. 内联函数声明
        使用inline关键字的函数
 */