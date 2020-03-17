/*继承关系  public派生类
继承之前原先创建好的类叫做"基类"(base class)，父类
由继承所产生的新类称为"派生类"(derived class)，子类
基类中的数据成员和成员函数可被派生类阶乘，但是以下基类特性无法继承：
1、构造函数
2、析构函数
3、重载赋值运算符(=)
4、友元类
继承关系也有三种：public、private、protected
public继承声明:派生类完全继承基类中的public和protected数据成员，
并供成员函数直接存取，而基类中的private数据成员则被隐藏，无法直接存取，
必须依靠基类的public和protected成员函数来执行间接存取的操作

以public声明继承类
基类            派生类
public          public
protected       protected
private         private

单一继承：派生类只继承单独一个基类*/
#include <iostream>
#include <cstdlib>
using namespace std;

class car 
{   
    //基类中的成员函数声明为public
    public:
        //car类的成员函数
        void go()
        {
            cout << "car start!" << endl;
        }
        void stop()
        {
            cout << "car stop!" << endl;
        }
};
//派生类将其存取设置字符声明为public
class freighter : public car{};

int main()
{
    freighter ft;

    //ft是freighter类的一个对象，因为继承关系，所以可以使用go()与stop()函数
    ft.stop();
    cout << "-------------------" << endl;
    ft.go();
    cout << "-------------------" << endl;

    system("pause");
    return 0;
}
