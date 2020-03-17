/*派生类的构造函数和析构函数
派生类因为具有新的特性，所以不能继承基类的构造函数和析构函数，必须要有自己的版本。
但是针对继承而来的特性，派生类就会调用基类的构造函数和析构函数。

单一继承构造函数与析构函数：
1、先调用基类的构造函数
2、再调用派生类的构造函数
3、程序结束后先调用派生类的析构函数
4、在调用基类的析构函数*/
#include <iostream>
#include <cstdlib>
using namespace std;

//声明类stclass
class stclass
{
    public:
        //构造函数
        stclass()
        {
            cout << "AAAAAAAAAAAAA" << endl;
        }
        //析构函数
        ~stclass()
        {
            cout << "BBBBBBBBBBBBB" << endl;
        }
};

//声明类student，并以public类型从类stclass继承
class student : public stclass
{
    public:
        //构造函数
        student()
        {
            cout << "CCCCCCCCCCCCCCCC" << endl;
        }
        //析构函数
        ~student()
        {
            cout << "DDDDDDDDDDDDDDDD" << endl;
        }
};

void call()
{
    student st1;
}

int main()
{
    call();     //调用声明对象st1的函数

    system("pause");
    return 0;
}