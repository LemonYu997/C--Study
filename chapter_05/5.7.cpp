//指针与字符串
#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    char Name[] = "John";           //定义字符数组Name[]，并设置其初值
    char *p_N = "Mary";             //定义字符串指针 *p_N，并设置其初值

    //显示字符数组的内容
    cout << "Name[] Address: " << &Name << " string: " << Name << endl;
    //Name++    Name为指针常数，不可改变其值
    //Name=p_N  Name为指针常数，不可改变其值

    //显示字符串指针的内容
    cout << "p_N Address: " << (int *)p_N << " string: " << p_N << endl;
    p_N = Name;                     //p_N为指针变量，可进行改边其值的运算
    cout << "new p_N string: " << p_N << endl;
    p_N++;                          //p_N为指针变量，可进行改边其值的运算
    cout << "new p_N string: " << p_N << endl;

    system("pause");
    return 0;
}