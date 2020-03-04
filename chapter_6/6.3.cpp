/*传值调用：
主程序调用函数的实际参数时系统会将实际参数的数值传递
并复制给函数中相对应的形式参数*/
#include <iostream>
#include <cstdlib>

using namespace std;

void fun(int, int);

int main()
{
    int a, b;
    a = 10;
    b = 15;
    //输出主程序中的a、b值
    cout << "In main(): a = " << a << " b = " << b << endl;
    cout << "a's address: " << &a << " b's address: " << &b << endl;

    //调用函数
    fun(a, b);
    cout << "-----------------------------------------------" << endl;
    //输出调用后的a、b值
    cout << "After fun(): a = " << a << " b = " << b << endl;
    cout << "a's address: " << &a << " b's address: " << &b << endl;

    system("pause");
    return 0;
}

void fun(int a, int b)
{
    cout << "--------------------------------------------" << endl;
    cout << "In fun(): a = " << a << " b = " << b << endl;
    cout << "a's address: " << &a << " b's address: " << &b << endl;

    //重置函数内a、b的值
    a = 20;
    b = 30;
    cout << "After the modification: a = " << a << " b = " << b << endl;
}