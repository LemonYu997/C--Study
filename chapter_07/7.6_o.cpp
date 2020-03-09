//7.6.cpp的外部变量
//外部变量是在函数或程序区块外所声明的变量，即全局变量。可省略extern修饰词。
//extern修饰词可以将声明在函数或程序区块后面的外部变量引用到函数内使用。
#include <iostream>

//此处必须加上extern修饰词
extern int x;

void foo(void)
{
    x = 1;
}