/*继承关系  private派生类
派生类以private声明继承基类时，基类中的所有数据成员与函数会存储到派生类的private区块之中。
非派生类的外部成员无法使用派生类的对象对基类进行调用或存取的操作，必须通过派生类的public成员函数简介存取。
继承后，类成员的存取设置将会全部改为private：

以private声明继承类
基类            派生类
public          private
protected       private
private         private  */
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

//以private类型从student类继承为新的类S1
class S1:private Student
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
    obj1.setage(35);
    //可直接存取类Student内的protected类型的数据成员lang
    obj1.set_lang(100);
    //可直接存取类Student内的public类型的数据成员math
    obj1.set_math(95);

    obj1.show_data();

    system("pause");
    return 0;
}