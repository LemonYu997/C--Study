//递增，递减运算符
#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int a, b;

    a = 5;
    cout << "a = " << a << endl;
    b = ++a;                //前置递增
    cout << "b = ++a, a = " << a << " b = " << b << endl;
    cout << "-----------------------------------------------------" << endl;

    a = 5;
    cout << "a = " << a << endl;
    b = a++;                //后置递增
    cout << "b = a++, a = " << a << " b = " << b << endl;
    cout << "-----------------------------------------------------" << endl;

    a = 5;
    cout << "a = " << a << endl;
    b = --a;                //前置递减
    cout << "b = --a, a = " << a << " b = " << b << endl;
    cout << "-----------------------------------------------------" << endl;

    a = 5;
    cout << "a = " << a << endl;
    b = a--;                //后置递减
    cout << "b = a--, a = " << a << " b = " << b << endl;
    cout << "-----------------------------------------------------" << endl;

    system("pause");
    return 0;
}