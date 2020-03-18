/*声明虚拟函数
虚拟函数就是多态的实现，可以调用同名的函数执行不同的功能，因为这个成员函数所属的类可以被
动态链接，这些派生类又具有相同的基类。
要创建虚拟函数，用关键字virtual声明，一旦函数被声明为虚拟函数，必须在派生类中重载该虚拟函数。
派生类虚拟函数的参数与返回值还必须与基类中声明的虚拟函数相同。声明方式如下：
virtual 返回类型 函数名称(参数)
一旦函数声明为虚拟函数，编译程序就会给予这些函数不同的指针，在执行时则根据这些指针
来存取适当的函数。所以声明对象时必须同时声明指针变量。*/
#include <iostream>
#include <cstdlib>
using namespace std;

//声明基类vehicle       (交通工具)
class vehicle
{
    public:
        //成员函数start     虚拟函数
        virtual void start()
        {
            cout << "vehicle start" << endl;
        }
        //成员函数stop      虚拟函数
        virtual void stop()
        {
            cout << "vehicle stop" << endl;
        }
};

//声明派生类aircraft
class aircraft: public vehicle
{
    public:
        //具有和基类相同名称的成员函数start
        virtual void start()
        {
            cout << "aircraft start" << endl;
        }
        //具有和基类相同名称的成员函数stop
        virtual void stop()
        {
            cout << "aircraft stop" << endl;
        }
};

//声明派生类car
class car: public vehicle
{
    public:
        //具有和基类相同名称的成员函数start
        virtual void start()
        {
            cout << "car start" << endl;
        }
        //具有和基类相同名称的成员函数stop
        virtual void stop()
        {
            cout << "car stop" << endl;
        }
};

int main()
{
    vehicle *ve = new vehicle();       //基类的指针
    aircraft af;
    car cr;

    ve->start();        //调用其成员函数start
    ve->stop();         //调用其成员函数stop

    ve = &af;           //将基类指针指向派生类aircraft
    af.start();         //调用其成员函数start
    af.stop();          //调用其成员函数stop

    ve = &cr;           //将基类指针指向派生类car
    cr.start();         //调用其成员函数start
    cr.stop();          //调用其成员函数stop

    system("pause");
    return 0;
}