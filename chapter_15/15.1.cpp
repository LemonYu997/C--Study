/*异常处理结构      try catch
处理程序在运行时(Run Time)所发生的错误
最常见的异常情况就是除数为0、超过数组下标边界、发生溢出、无效的函数参数、使用new时无法获得内存
C++中的异常处理功能，可将程序代码主要执行控制权移至这些负责处理错误的程序代码中，
可增强代码的可读性和可修改性。
一个简单的异常处理结构：
try                             //可能出现错误的程序
{
    if(条件判断式)
        throw 变量或常数值;     //抛出异常情况
}
catch (数据类型 变量名称)       //发生异常的错误类型p1
{
    //异常情况处理区块          //处理异常
}
catch (数据类型 变量名称)       //发生异常的错误类型p2
{
    //异常情况处理区块          //处理异常
}*/
#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    cout << "----example----" << endl;
    //使用try...catch来捕获异常
    try
    {
        int n1;
        cout << "Enter divisor: ";
        cin >> n1;              //输入除数值
        //若除数为0，抛出一个异常
        if (n1 == 0)
            throw 1;

        //当捕获到异常时，下行不会执行
        cout << "no error" << endl;
    }
    //找到符合的catch区块
    catch(int i)                
    {
        cout << "The divisor is zero." << endl;
    }
    //提示已至程序结尾
    cout << "Program end!" << endl;

    system("pause");
    return 0;
}