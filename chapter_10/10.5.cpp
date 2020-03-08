//构造函数的重载
#include <iostream>
#include <cstdlib>

using namespace std;

//类声明
class MyClass {
    public:
        //无任何参数传入的构造函数
        MyClass()
        {
            cout << "AAAAAAAAAAAAAA" << endl;
        }
        //传入一个参数值的构造函数
        MyClass(int a)
        {
            cout << "BBBBBBBBBBBBBB" << endl;
            cout << "a = " << a << endl;
        }
        //传入两个参数值的构造函数
        MyClass(int a, int b)
        {
            cout << "CCCCCCCCCCCCCC" << endl;
            cout << "a = " << a << " b = " << b << endl;
        }

    //MyClass()若重复定义，编译时将产生错误
    private:
};

int main()
{
    int a, b;
    a = 100, b = 88;

    MyClass MyClass1;
    cout << "--------------------------" << endl;
    MyClass MyClass2(a);
    cout << "--------------------------" << endl;
    MyClass MyClass3(a, b);
    cout << "--------------------------" << endl;

    system("pause");
    return 0;
}