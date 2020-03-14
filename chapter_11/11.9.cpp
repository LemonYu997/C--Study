//习题2：将以a对象调用sum函数，并将b对象当作参数传给sum函数
#include <iostream>
#include <cstdlib>
using namespace std;

class Addsum
{
    int x;
public:
    //声明构造函数的函数原型
    Addsum(int);
    //声明函数原型
    void sum(Addsum);       //传入类参数
    void show();
};

//实现构造函数并传入值
Addsum::Addsum(int s)
{
    x = s;
}

//实现sum函数成员传入对象参数
void Addsum::sum(Addsum obj)
{
    //对象数据成员值加上传入对象的数据成员值
    x += obj.x;             
}

void Addsum::show()
{
    cout << x;
}

int main()
{
    Addsum a(1000), b(1500);
    a.show();
    cout << " + ";
    b.show();
    cout << " = ";
    //调用对象a的函数成员，并将对象b传入
    a.sum(b);
    a.show();
    cout << endl;

    system("pause");
    return 0;
}