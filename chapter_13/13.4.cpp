/*多重继承
一种直接继承的类直接继承了两个或多个基类，这些被继承的基类之间因为并无任何继承或
友元关系存在，所以无法互相存取*/
#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;

//声明基类Math
class Math
{
    private:
        int Math_Score;
    public:
        //函数Math_make()：设置数学成绩
        void Math_make(int a)
        {
            Math_Score = a;
        }
        //函数Math_take()：设置返回数学成绩便于派生类调用
        int Math_take()
        {
            return Math_Score;
        }
};

//声明基类Chinese
class Chinese
{
    private:
        int Chinese_Score;
    public:
        //函数Chinese_make()：设置数学成绩
        void Chinese_make(int b)
        {
            Chinese_Score = b;
        }
        //函数Chinese_take()：设置返回数学成绩便于派生类调用
        int Chinese_take()
        {
            return Chinese_Score;
        }
};

//声明基类History
class History
{
    private:
        int History_Score;
    public:
        //函数History_make()：设置数学成绩
        void History_make(int c)
        {
            History_Score = c;
        }
        //函数History_take()：设置返回数学成绩便于派生类调用
        int History_take()
        {
            return History_Score;
        }
};

//声明类Student并以三种继承关键字分别继承三个基类
class Student:public Math, protected Chinese, private History
{
    private:
        int Student_Number;     //学号
    protected:
        char Student_Name[20];  //姓名
    public:
        //函数Student()：设置学号和姓名
        Student(int d, char *N)
        {
            Student_Number = d;
            strcpy(Student_Name, N);
        }
        //函数Student_C_make()：简介存取Chinese_make()
        void Student_C_make(int e)
        {
            Chinese_make(e);
        }
        //函数Student_H_make()：简介存取History_make()
         void Student_H_make(int f)
        {
            History_make(f);
        }
        //在屏幕显示结果
        void Student_Show()
        {
            cout << endl;
            cout << "ID: " << Student_Number << endl;
            cout << "Name: " << Student_Name << endl;
            cout << "Math: " << Math_take() << endl;
            cout << "Chinese: " << Chinese_take() << endl;
            cout << "History: " << History_take() << endl;
            cout << "Total: " << Math_take() + Chinese_take() + History_take() << endl;
        }
};

int main()
{
    //类Student：对象object1
    Student object1(31232, "Alex");

    object1.Math_make(65);
    object1.Student_C_make(78);
    object1.Student_H_make(34);
    object1.Student_Show();

    system("pause");
    return 0;
}