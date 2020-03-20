//catch区块重载     一个try跟多个catch
#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int num;            //声明一个整数变量num

    //最内层的try...catch区块
    try
    {
        cout << "Enter a number: ";
        cin >> num;
        //判断变量值num是否大于0且小于10
        if ((num > 0 ) && (num < 10))
        {
            throw 1;    //如果是，抛出一个类型为整数的异常
        }
        //判断变量值num是否大于10且小于20
        if ((num >10) && (num < 20))
        {
            throw 0.99; //如果是，抛出一个类型为实数的异常
        }
    }
    //捕获类型为整数的异常
    catch (int ex1)
    {
        cout << "error is int" << endl;
    }
    //捕获类型为实数的异常
    catch (double ex2)
    {
        cout << "error is double" << endl;
    }
    //提示已至程序结尾
    cout << "Program end!" << endl;

    system("pause");
    return 0;
}