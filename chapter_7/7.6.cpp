//外部变量
#include <iostream>
#include <cstdlib>
#include "7.6_o.cpp"

using namespace std;

//声明x为全局变量
int x = 0;

int main()
{
    //调用另一个程序文件中的函数
    foo();
    //此时x的值为7.6_o.cpp中调用foo()后x的值 1
    cout << "x = " << x << endl;

    system("pause");
    return 0;
}
