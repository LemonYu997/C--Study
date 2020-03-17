/*多重继承构造函数与析构函数
根据基类的继承顺序先后调用相关构造函数和析构函数*/
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

//声明类score
class score
{
    public:
        //构造函数
        score()
        {
            cout << "CCCCCC" << endl;
        }
        //析构函数
        ~score()
        {
            cout << "DDDDDD" << endl;
        }
};

//声明类student，并以public类型从类stclass和score继承
class student : public stclass, public score
{
    public:
        //构造函数
        student()
        {
            cout << "EE" << endl;
        }
        //析构函数
        ~student()
        {
            cout << "FF" << endl;
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