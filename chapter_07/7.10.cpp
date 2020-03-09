//函数重载
//可以用同一个名称定义多个函数主体
//在程序中会根据传递的形式参数和数据类型自动选择调用的函数
#include <iostream>
#include <cstdlib>

using namespace std;

char *getData(char *);      //函数原型重载
int getData(int);
float getData(float);
double getData(double);

int main()
{
    char *cVal = "Hello World";     //定义不同数据类型
    int iVal = 2020;
    float fVal = 2.3f;
    double dVal = 2.123;

    cout << "Call char *getData(char *)  :  " << getData(cVal) << endl;
    cout << "Call int getData(int)  :  " << getData(iVal) << endl;
    cout << "Call float getData(float)  :  " << getData(fVal) << endl;
    cout << "Call double getData(double)  :  " << getData(dVal) << endl;

    system("pause");
    return 0;
}

char *getData(char * cVal)
{
    return cVal;
}

int getData(int iVal)
{
    return iVal;
}

float getData(float fVal)
{
    return fVal;
}

double getData(double dVal)
{
    return dVal;
}