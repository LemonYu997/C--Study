//指针 &取址运算符
#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{   
    int num1 = 10;
    char ch1[2] = "A";

    cout << "Name \tValue \tAddress" << endl;
    cout << "------------------------" << endl;
    //使用&运算符打印变量num1、ch1的数值与地址
    cout << "num1 " << '\t' << num1 << '\t' << &num1 << endl;
    cout << "ch1  " << '\t' << ch1 << '\t' << &ch1 << endl;

    system("pause");
    return 0;
}