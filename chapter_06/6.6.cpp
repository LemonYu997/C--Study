//参数默认值
//参数多的时候调用起来很麻烦，可以设置参数默认值
#include <iostream>
#include <cstdlib>

using namespace std;

//函数默认参数值
double salary(double pay, double hours = 220);
//220为每月工作时长，这里即默认参数

int main()
{
    cout << "wage/h of A: " << 95 << "$, The wage of month is: " << salary(95) << endl;
    cout << "wage/h of A: " << 115 << "$, The wage of month is: " << salary(115, 240) << endl;

    system("pause");
    return 0;
}

double salary(double pay, double hours)
{
    return pay * hours;
}