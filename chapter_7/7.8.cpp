//递归函数
#include <iostream>
#include <cstdlib>

using namespace std;

double rec_factorial(int);      //递归函数的原型声明
double factorial(int);          //一般的循环函数原型声明

int main()
{
    int n;
    cout << "Enter a number: " << endl;
    cin >> n;
    cout << "Recursive function: " << n << "! = " << rec_factorial(n) << endl;
    cout << "General function: " << n << "! = " << factorial(n) << endl;

    system("pause");
    return 0;
}

//递归函数
double rec_factorial(int n)
{
    if (n == 1)
        return 1;       //跳出
    else
        return n * rec_factorial(n - 1);    //递归
}

//一般循环函数
double factorial(int n)
{
    int i;
    double sum = 1;
    for (i = 1; i <= n; i++)
        sum *= i;
    return sum;
}