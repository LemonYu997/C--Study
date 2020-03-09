//内联函数  inline
//程序使用inline定义的函数时，C++会将调用inline函数的部分直接替换成inline中的代码，
//不会有实际的函数调用过程。这样做可以省下函数调用的时间，对一些比较小的函数比较适用
#include <iostream>
#include <cstdlib>

using namespace std;

//内联函数定义
inline int fun1(int a, int b, int c)
{
    return a + b + c;
}

int main()
{
    int a, b, c;
    cout << "Enter three numbers: " << endl;
    cin >> a >> b >> c;

    if (fun1(a, b, c) % 2 == 0)
        cout << a << " + " << b << " + " << c << " = " << a + b + c << " is even" << endl;
    else
        cout << a << " + " << b << " + " << c << " = " << a + b + c << " is odd" << endl;

    system("pause");
    return 0;
}