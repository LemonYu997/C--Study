/*嵌套try...catch区块
通常当异常发生时，在try区块内所抛出的异常是由最靠近的catch异常处理程序区块来捕获的，
当异常被抛出之后会发生以下操作：
首先会创建一份抛出异常的对象副本，并给它设置初值，接着此对象会给异常处理区块内的参数
设置初值，当异常处理区块执行完毕后，系统就将此对象副本清除。
异常被抛出时程序的控制权会从当前的try区块离开，然后将控制权交给在try区块之后某一个
符合类型的catch异常处理程序区块。
嵌套try..catch就是在try区块内再定义一个try区块，至少一个try区块对应一个catch区块*/
#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int num;
    //最外层的try...catch区块
    try
    {   
        //最内层的try...catch区块
        try
        {
            cout << "Enter a number: ";
            cin >> num;
             //判断变量值num是否大于0且小于8
            if ((num > 0 ) && (num < 8))
            {
                throw 1;            //如果是，抛出一个类型为整数的异常
            }
            //判断变量值num的平方和是否大于100
            if (num * num > 100)
            {
                throw "is error";   //如果是，抛出一个类型为字符串的异常
            }
        }
        //捕获类型为整数的异常，执行最内层的catch区块
        catch (int ex1)
        {
            cout << "in catch" << endl;
        }
    }
    //捕获类型为字符串的异常，执行最外层的catch区块
    catch (const char *)
    {
        cout << "out catch" << endl;
    }

    //提示已至程序结尾
    cout << "Program end!" << endl;

    system("pause");
    return 0;
}