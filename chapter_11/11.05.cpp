/*this指针
在创建类对象的同时，对象会自动创建属于它自己的指针，在引用时可以用"this"指令来表示。
this指针代表了当前这个对象的指针
使用方法：
this->数据成员              间接选择运算符
(*this).数据成员            .的优先级高于*，所以要加() */
#include <iostream>
#include <cstdlib>
using namespace std;

//定义Square类，平方和
class Square
{
    int a;
    public:
        //构造函数
        Square(int n)
        {
            a = n * n;
        }
        //返回值为对象，通过this指针返回Square类对象
        Square squ_sum(Square b)
        {
            this->a = this->a + b.a;
            return *this;
        }
        int show_data()
        {   
            //打印私有数据成员a的值
            cout << (*this).a << endl;
            return 0;
        }
};

int main()
{
    int n1, n2;

    cout << "Enter first number: ";
    cin >> n1;
    cout << "Enter second number: ";
    cin >> n2;

    //对象声明和初始化
    Square first(n1), second(n2), third(0);
    //调用first的成员函数，并返回Square对象
    third = first.squ_sum(second);
    //直接用成员函数打印结果
    third.show_data();

    system("pause");
    return 0;
}