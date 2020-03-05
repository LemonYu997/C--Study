//参数型函数指针
#include <iostream>
#include <cstdlib>

using namespace std;

int add(int, int);
int sub(int, int);
//具有参数型函数指针的函数原型声明
int Math(int, int, int (*pfunc)(int, int));

int main()
{
    int x, y;

    cout << "x = ";
    cin >> x;
    cout << "y = ";
    cin >> y;

    cout << "-----------------------------------" << endl;

    //调用add()，并打印出其值
    cout << x << " + " << y << " = " << Math(x, y, add) << endl;
    //调用sub()，并打印出其值
    cout << x << " - " << y << " = " << Math(x, y, sub) << endl;
    
    system("pause");
    return 0;
}

//具有参数型函数指针的函数定义
int Math(int a, int b, int (*pfunc)(int, int))
{
    return (*pfunc)(a, b);
}

int add(int a, int b)
{
    return a + b;
}

int sub(int a, int b)
{
    return a - b;
}