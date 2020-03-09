//函数
#include <iostream>
#include <cstdlib>

using namespace std;

//函数定义声明
int Add_Fun(int a, int b)   //参数为a, b，返回值为整数
{   
    //返回两整数之和
    return a + b;
}

int main()
{
    int x;
    int y;

    cout << "Enter int x = " << endl;
    cin >> x;
    cout << "Enter int y = " << endl;
    cin >> y;
    cout << "x + y = " << Add_Fun(x, y) << endl;

    system("pause");
    return 0;
}