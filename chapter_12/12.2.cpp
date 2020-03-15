//一元运算符重载    定义 !
#include <iostream>
#include <cstdlib>
using namespace std;

//声明一个IsZero类，主要作用是判断成员值是否大于等于0
class IsZero            
{
    int Num;            //声明类数据成员
    public:
        IsZero(int n)   //声明类构造函数
        {
            Num = n;    //若创建对象时设置初值，就将初值赋给成员Num
        }
        IsZero()
        {
            Num = -1;   //若创建对象时没有设置初值，就设Num为-1
        }
        //重载一元运算符 !
        bool operator ! ();
};

//实现运算符函数
bool IsZero::operator ! ()
{
    if (Num >= 0)
        return true;    //如果数据成员值大于等于0，返回true
    else
        return false;   //否则返回false
}

int main()
{
    IsZero Num1(3);     //创建IsZero类的对象

    if (! Num1)         //调用重载运算符
        cout << "Num1 >= 0" << endl;
    else
        cout << "Num1 < 0" << endl;

    system("pause");
    return 0;
}