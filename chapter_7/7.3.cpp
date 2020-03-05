//函数指针数组
#include <iostream>
#include <cstdlib>

using namespace std;

int add(int, int);
int sub(int, int);
int mul(int, int);
//声明函数指针数组，同时设置初值
int (*pfunc[])(int, int) = {add, sub, mul};

int main()
{
    char c[] = {'+', '-', '*'};
    int x, y, i;

    cout << "x = ";
    cin >> x;
    cout << "y = ";
    cin >> y;

    cout << "----------------------------------------" << endl;

    for (i = 0; i < 3; i++)
    {
        cout << x << c[i] << y << " = " << pfunc[i](x, y) << endl;
    }

    system("pause");
    return 0;
}


int add(int a, int b)
{
    return a + b;
}

int sub(int a, int b)
{
    return a - b;
}

int mul(int a, int b)
{
    return a * b;
}