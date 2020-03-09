//宏函数
//把常用的简单函数用宏定义，提高运行效率
#include <iostream>
#include <cstdlib>

using namespace std;

//定义宏函数
#define RESULT(r1, r2, h) (r1 + r2) * h / 2.0

int main()
{
    int r1, r2, h;
    cout << "-------------------------------" << endl;

    //输入梯形的各个数值
    cout << "upper line r1 = ";
    cin >> r1;
    cout << "upper line r2 = ";
    cin >> r2;
    cout << "high h = ";
    cin >> h;

    //使用宏函数
    cout << "Area of trapezoid S1 = " << RESULT(r1, r2, h) << endl;

    cout << "Each of the parameters + 2:" << endl;
    cout << "Area of trapezoid S2 = " << RESULT(r1 + 2, r2 + 2, h + 2) << endl;

    system("pause");
    return 0;
}