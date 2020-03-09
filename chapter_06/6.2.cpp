//函数声明
#include <iostream>
#include <cstdlib>

using namespace std;

//声明函数原型
int my_pow(int, int);
void show_output(int);

int main()
{
    int x, r;

    cout << "Enter two numbers: " << endl;
    cout << "x = ";
    cin >> x;
    cout << "y = ";
    cin >> r;
    //在程序语句中调用函数
    cout << x << " to the " << r << "th power is :" << my_pow(x, r) << endl;

    system("pause");
    return 0;
}

//函数定义部分
int my_pow(int x, int r)
{
    int i;
    int sum = 1;
    //计算x^r的值
    for (i = 0; i < r; i++)
    {
        sum = sum * x;
    }
    return sum;
}