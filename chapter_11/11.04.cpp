/*友元类
友元类可以直接存取该类中设为private或protected的数据成员。
如果在类A中使用friend关键字声明类B的原型，那么类B成为类A的 "友元类" */
#include <iostream>
#include <cstring>
using namespace std;

class teacher
{
    friend class Student;                   //声明Student类为teacher的友元类
    private:
        char tName[10];
    public:
        void teach(int ID)
        {   
            if (ID == 1)
                strcpy(tName, "John");      //设置tName的值
            else
                strcpy(tName, "Andy");      //设置tName的值
        }
};

class Student
{
    private:
        int StuID, Select_C;
    public:
        Student(int id, int C)
        {
            StuID = id;
            Select_C = C;
            cout << "Student ID: " << StuID << endl;
            cout << "Class ID: " << Select_C << endl;

            teacher t;                      //声明teacher类对象
            t.teach(Select_C);              //调用teacher类的teach函数

            //调用teacher类的tName数据成员
            cout << "Teacher: " << t.tName << endl;
        }
};

int main()
{   
    //设置stud1对象初值
    Student stud1(920101, 2);
    //设置stud2对象初值
    Student stud2(920102, 1);

    system("pause");
    return 0;
}
