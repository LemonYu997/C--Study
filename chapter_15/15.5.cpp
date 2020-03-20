/*重新抛出异常      throw;
需要将某些资源释放给其他人处理异常，或者是某个catch区块无法处理所捕获到的异常时，必须
重新抛出异常。此时只需要下达一个不带参数 throw 语句：
throw;      */
#include <iostream>
#include <cstdlib>
using namespace std;

void throwex()
{
    //外层的try区块
    try
    {   
        //内层的try区块
        try
        {
            throw exception();      //抛出一个异常
        }
        //捕获异常
        catch(exception e)
        {
            cout << "in throwex() second try" << endl;
            throw;                  //重新抛出一个异常
        }
    }
    //捕获所有的异常
    catch(...)
    {   
        //在这里捕获了内层catch重新抛出的异常
        cout << "first try , catch all" << endl;
    }
}

int main()
{
    try
    {
        throwex();      //调用函数
        cout << "in main() try" << endl;
    }
    //捕获异常
    catch (exception e)
    {
        cout << "in main() catch" << endl;
    }

    //提示已至程序结尾
    cout << "Program end!" << endl;

    system("pause");
    return 0;
}