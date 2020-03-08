/*构造函数
是一种初始化类对象的成员函数，可用于为对象内部的私有数据成员设置初值
每个类至少有一个构造函数，声明类时，如果我们没有定义构造函数，
C++会自动提供一个没有任何程序语句和参数的默认构造函数
构造函数的特性：
1、构造函数的名称必须与类名称相同，例如class名称为MyClass，则构造函数为MyClass()
2、不需要指定返回类型，没有返回值
3、当对象被创建时自动产生默认的构造函数，默认的构造函数并不提供参数行
4、构造函数可以用重载功能，即一个类内可以存在多个相同名称但参数行不同的构造函数
*/
#include <iostream>
#include <cstdlib>

using namespace std;

//类声明
class Student {
    //私有数据成员
    private:               
        int StuID;      
        float English, Math, Total, Average;
    //公有函数成员
    public:                
        //默认构造函数，也可以省略
        Student();

        //声明构造函数
        Student(int id, float E, float M)
        {
            StuID = id;     //设置StuID = 参数id
            English = E;
            Math = M;

            Total = E + M;
            Average = (E + M) / 2;

            cout << "--------------------" << endl;
            cout << "Student ID: " << StuID << endl;
            cout << "English score: " << E << endl;
            cout << "Math score: " << M << endl;
            cout << "Total score: " << Total << "\nAverage score: " << Average << endl;
        }
};

int main()
{   
    //设置stud1对象初值
    Student stud1(920101, 80, 90);
    //设置stud2对象初值
    Student stud2(920102, 60, 70);

    cout << "--------------------" << endl;

    system("pause");
    return 0;
}

