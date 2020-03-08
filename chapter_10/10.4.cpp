//构造函数使用范围解析运算符 ::
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

        //声明构造函数的原型
        Student(int id, float E, float M);
};

//使用范围解析运算符
Student::Student(int id, float E, float M)
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