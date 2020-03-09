//关系运算符
#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int a = 11, b = 15;         //声明两个操作数
    //关系运算符的运算关系
    cout << "a = 11, b = 15" << endl;
    cout << "-------------------------------------------" << endl;
    cout << "true = 1, false = 0" << endl;
    cout << "a > b = " << (a > b) << endl;
    cout << "a < b = " << (a < b) << endl;
    cout << "a == b = " << (a == b) << endl;
    cout << "a != b = " << (a != b) << endl;
    cout << "a >= b = " << (a >= b) << endl;
    cout << "a <= b = " << (a <= b) << endl;

    system("pause");
    return 0;
}