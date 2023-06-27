#include<iostream>  // c++ 标准库的一部分
#include<stdio.h>   // c标准库的一部分

/*
argc: argument count, 表示传入main函数的参数个数;
argv: argument vector,表示传入main函数的参数序列或指针，
并且第一个参数argv[0]一定是程序的名称，并且包含了程序所在的完整路径
*/


int main(int argc, char* argv[]){  //指向字符的指针数组
 
    printf("argc = %d\n", argc);
    printf("argv[0] = %s\n", argv[0]);
    printf("argv[1] = %s\n", argv[1]);
    printf("argv[2] = %s\n", argv[2]);
    
    return 0;

}