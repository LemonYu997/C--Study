/*运算符重载
将运算符原有的功能加以扩充，使其能够根据操作数的数据类型来实现不同的功能
C++中，运算符就是一种函数，声明运算符函数方法是在运算符符号前加上operator关键字
特点：
1、运算符重载不会产生新的运算符，只是将原有功能进行扩充
2、声明运算符函数时，参数行内的个数必须符合原运算符的个数
3、假设运算符本身拥有一元和二元运算符的特性，要分别定义，以 "+" 为例
    int operator+(Student&);              一元运算符
    int operator+(Student&, Student&);    二元运算符
4、运算符重载只是用来扩充基本运算符的功能，即使定义新的运算符也无法更改原先的优先级
5、以下运算符不可更改
    .   ::  ?:  .*  sizeof  #
6、运算符函数可以声明成一般的函数，也可以声明成成员函数*/
#include <iostream>
#include <cstdlib>
using namespace std;

class Student
{   
    //声明友元operator+()运算符函数
    friend int operator+(Student &, Student &);
    private: 
        int Score;
    public:
        //Student的构造函数
        Student(int S_Score)
        {
            Score = S_Score;
        }
};

//加号函数
int operator+(Student &a, Student &b)
{
    return (a.Score + b.Score);
}

int main()
{
    Student x(90);      //定义Student的对象x
    Student y(75);      //定义Student的对象y

    cout << "x + y = " << x + y << endl;

    system("pause");
    return 0;
}