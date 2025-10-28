//
// Created by 梁俊可 on 2025/10/28.
//
#include "stdio.h"
#include "Day01_scanf & printf.h"
void test_scanf(void) {
    int a;
    printf("请输入数字：");
    scanf("%d", &a);//&:取内存地址运算符,&a表示a的内存地址
    printf("输入的数字是：%d\n", a);
}
