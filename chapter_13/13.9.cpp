/*抽象基类
纯虚拟函数：在表达式尾端加入语句 "=0"，不加入任何定义该函数功能的语句。纯虚拟函数的作用
是在起始声明时不定义而形成一种保留的函数接口。这样之后声明的各个派生类可以直接使用该函数
并加以定义、执行。声明如下：
virtual 返回类型 函数名称 (参数) = 0;           
纯虚拟函数无法在单一类或派生类中声明，只能声明在有继承关系的基类中，这种基类叫做抽象基类。
抽象基类包含最少一个或多个纯虚拟函数，当派生类继承了抽象基类之后，必须在派生类中
"重新定义"及"实现"所继承的纯虚拟函数。*/
#include <iostream>
#include <cstdlib>
using namespace std;

//声明基类vehicle       (交通工具)
class vehicle
{
    public:
        //成员函数start     纯虚拟函数
        virtual void start() = 0;
        //成员函数stop      纯虚拟函数
        virtual void stop() = 0;
};

//声明派生类aircraft
class aircraft: public vehicle
{
    public:
        //具有和基类相同名称的成员函数start     virtual关键字可省略，下同
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
    vehicle *ve;        //声明基类vehicle指针，抽象基类不可实例化
    aircraft af;
    car cr;
    
    ve = &af;           //将基类指针指向派生类aircraft
    af.start();         //调用其成员函数start
    af.stop();          //调用其成员函数stop

    ve = &cr;           //将基类指针指向派生类car
    cr.start();         //调用其成员函数start
    cr.stop();          //调用其成员函数stop

    system("pause");
    return 0;
}