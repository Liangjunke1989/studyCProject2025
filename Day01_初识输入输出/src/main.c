#include <stdio.h>
#include "Day01_scanf & printf.h"

void print_hello(void) {
    //基本数据类型的字面量和局部变量：存储在栈中
    int a;//变量 a，存储在**栈(stack)**中,编译时分配了内存空间,随机初始化
    a=10 ;//字面量 10：作为编译时常量，通常存储在**栈(stack)**中，或者直接嵌入到指令中
    printf("a=%d\n",a);
    //c语言字符串字面量：存储在**栈(stack)**中,char *: 字符串指针
    /*
        1、char* b 这个指针变量：存储在**栈(stack)**中
            作为局部变量，它在函数调用时创建，在函数结束时销毁。
        2、指向的字符串字面量 "hello world"：存储在静态存储区
            C语言中的字符串字面量通常存储在程序的只读数据段中
     */
    char* b="hello world";//字面量 "hello world"：作为编译时常量，通常存储在**栈(stack)**中,char*: 字符串指针,存储在**栈(stack)**中
    printf("%s!\n",b);
    printf("Hello, World!\n");
}
int main(void)
{
    print_hello();
    //调用Day01_scanf.c中的函数
    test_scanf();
    return 0;
}
