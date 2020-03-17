/*继承关系  protected派生类
派生类以protected声明继承基类时，继承而来的所有成员除了private，
protected和public类型都会变成protected类型的成员。
派生类内的其他成员函数可以直接存取基类中位于protected与public存取区块内的成员，
但是不可以存取基类内位于private存取区块内的成员。
其继承后的存取设置会将原本是public的类成员改为protected

以protected声明继承类
基类            派生类
public          protected
protected       protected
private         private         */
#include <iostream>
#include <cstdlib>
using namespace std;

class Student
{
    private:
        int age;
    protected:
        int lang;
    public:
        int math;
        Student()
        {
            age = 0;
            lang = 0;
            math = 0;
        }
        void set_age(int a1)
        {
            age = a1;
        }
        void show_age()
        {
            cout << "age = " << age << endl;
        }
};

//以protected类型从类Student继承成为新的类S1
class S1:protected Student
{
    public:
        void set_lang(int v3)
        {   
            //可直接设置类型微软protected的数据成员lang
            lang = v3;
        }
        void set_math(int v4)
        {
            //可直接设置类型为public的数据成员math
            math = v4;
        }
        void setage(int v5)
        {
            //无法直接存取private类型的数据成员age
            //必须通过调用set_age成员来设置数据成员age
            set_age(v5);
        }
        void show_data()
        {
            //无法直接存取private类型的数据成员age
            //必须通过调用show_age成员来设置数据成员age
            show_age();
            cout << "lang = " << lang << endl;
            cout << "math = " << math << endl;
        }
};

int main()
{
    //声明对象obj1
    S1 obj1;
    //可通过调用setage成员函数来调用类Student内的public类型的成员函数set_gae()
    obj1.setage(10);
    //可直接存取类Student内的protected类型的数据成员lang
    obj1.set_lang(90);
    //可直接存取类Student内的public类型的数据成员math
    obj1.set_math(88);

    obj1.show_data();

    system("pause");
    return 0;
}