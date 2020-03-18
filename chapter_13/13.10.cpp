/*虚拟基类
多继承关系中如果发生基类也派生自同一类，会造成混乱，此时要声明虚拟基类：
class 派生类: virtual 继承关键字 基类;               */
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
        void shutdown()
        {
            cout << "vehicle stop" << endl;
        }
};

//声明虚拟基类aircraft
class aircraft: virtual public vehicle
{
    public:
        void fly()
        {
            cout << "aircraft fly" << endl;
        }
        void land()
        {
            cout << "aircraft land" << endl;
        }
};

//声明虚拟基类car
class car: virtual public vehicle
{
    public:
        void go()
        {
            cout << "car go" << endl;
        }
        void stop()
        {
            cout << "car stop" << endl;
        }
};

//声明派生类aircar
class aircar: public aircraft, public car {};

int main()
{
    aircar ac;
    ac.start();         //派生函数调用上两层基类vehicle的成员函数start
    ac.go();
    ac.fly();
    ac.land();
    ac.stop();
    ac.shutdown();      //派生函数调用上两层基类vehicle的成员函数shutdown

    system("pause");
    return 0;
}