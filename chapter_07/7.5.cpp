//静态局部变量 static
//在函数或程序区段中声明成static的变量在函数执行完毕后内存地址并不会被清除，
//而是一直保留到程序全部结束时才被清楚，所以再次调用时会保留之前的值
#include <iostream>
#include <cstdlib>

using namespace std;

int sum(int);
int sum1(int);

int main()
{
    cout << "First call" << endl;
    cout << "General  variable function: " << sum(5) << endl;
    cout << "Static variable function: " << sum1(5) << endl;
    cout << "------------------------------------------" << endl;
    cout << "Second call" << endl;
    cout << "General  variable function: " << sum(10) << endl;
    cout << "Static variable function: " << sum1(10) << endl;
    cout << "------------------------------------------" << endl;
    cout << "Third call" << endl;
    cout << "General  variable function: " << sum(15) << endl;
    cout << "Static variable function: " << sum1(15) << endl;
    cout << "------------------------------------------" << endl;

    system("pause");
    return 0;
}

//一般的变量函数
int sum(int n)
{
    int sum = 0;        //初值设置为0
    sum += n;
    return sum;
}

//静态变量的函数
//每次调用时都会保留之前的值
int sum1(int n)
{
    //声明静态变量sum
    static int sum;

    sum += n;
    return sum;
}