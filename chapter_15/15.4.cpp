//一次捕获所有异常      catch(...)
#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;

    try
    {
        //变量num大于10小于20时，抛出一个整型异常
        if ((num > 10) && (num < 20))
        {
            throw 1;
        }
        //变量num小于10时，抛出一个字符类型的异常
        if (num < 10)
        {
            throw '*';
        }
    }
    //捕获所有异常
    catch(...)
    {
        cout << "use catch(...)" << endl;
    }

    system("pause");
    return 0;
}