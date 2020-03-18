/*多态      静态绑定与动态绑定
一般会在基类或派生类中声明相同名称但功能不同的public成员函数。
把这些函数称作同名异式或多态(polymorphism)。
在程序中调用某函数时，编译程序将此函数的调用链接到函数的实体地址，这种链接关系成为绑定(binding)。
静态绑定：绑定在编译时期就已经定义完成，如果基类的指针指向派生类的对象之后再调用其成员函数，
结果仍是调用到基类的成员函数，这是因为函数的绑定在编译时就已经完成而无法改变，所以永远指向基类。
动态绑定：将基类与派生类中的同名异式函数（多态）声明为虚拟函数，程序执行时会按照
所给予的指针不同来存取适当的函数。*/
#include <iostream>
#include <cstdlib>
using namespace std;

//声明基类vehicle       (交通工具)
class vehicle
{
    public:
        //成员函数start
        void start()
        {
            cout << "vehicle start" << endl;
        }
        //成员函数stop
        void stop()
        {
            cout << "vehicle stop" << endl;
        }
};

//声明派生类aircraft
class aircraft: public vehicle
{
    public:
        //具有和基类相同名称的成员函数start
        void start()
        {
            cout << "aircraft start" << endl;
        }
        //具有和基类相同名称的成员函数stop
        void stop()
        {
            cout << "aircraft stop" << endl;
        }
};

//声明派生类car
class car: public vehicle
{
    public:
        //具有和基类相同名称的成员函数start
        void start()
        {
            cout << "car start" << endl;
        }
        //具有和基类相同名称的成员函数stop
        void stop()
        {
            cout << "car stop" << endl;
        }
};

int main()
{
    vehicle *ve1 = new vehicle();       //基类的指针
    vehicle *ve2 = new aircraft();      //基类的指针指向其派生类的对象
    aircraft af;
    car cr;

    ve1->start();        //调用其成员函数start
    ve1->stop();         //调用其成员函数stop
    delete ve1;

    //静态绑定，还是调用基类的成员函数
    ve2->start();        //调用其成员函数start
    ve2->stop();         //调用其成员函数stop
    delete ve2;

    af.start();         //调用其成员函数start
    af.stop();          //调用其成员函数stop

    cr.start();         //调用其成员函数start
    cr.stop();          //调用其成员函数stop

    system("pause");
    return 0;
}
