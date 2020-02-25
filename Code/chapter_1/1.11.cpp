//自动类型转换
#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int i = 26;
    float f = 1115.2;
    double d;

    //打印出个数据类型变量的初值
    cout << "i = " << i << ", f = " << f << endl;
    d = i + f;              //数据类型转换：浮点数与整数的加法
    cout << "---------------------------------------------" << endl;
    cout << "d = " << d << endl;
    cout << "---------------------------------------------" << endl;

    system("pause");
    return 0;
}