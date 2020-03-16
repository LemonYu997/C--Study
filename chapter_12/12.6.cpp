//相等运算符重载        ==
#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;

//声明类Student
class Student
{
    public:
        char Student_Num[10];           //学号
        int Student_Score;              //总分
        //构造函数
        Student(){}
        //Student函数：设置学生编号和总分
        Student(char *a, int b)
        {
            strcpy(Student_Num, a);
            Student_Score = b;
        }
        //重载比较运算符 ">" "=="
        bool operator>(Student b)
        {
            if (this->Student_Score > b.Student_Score)
                return true;
            else
                return false;
        }
        bool operator==(Student c)
        {
            if (this->Student_Score == c.Student_Score)
                return true;
            else
                return false;
        }
        //声明>>运算符重载函数为友元关系
        friend istream &operator>>(istream &input, Student &obj);
};

//>>运算符重载声明
istream &operator>>(istream &input, Student &obj)
{
    cout << "Enter student ID: ";
    input >> obj.Student_Num;
    cout << "Enter score: ";
    input >> obj.Student_Score;
    return input;
}

int main()
{
    //声明对象x与y
    Student x, y;
    //使用刚声明的>>运算符重载输入对象x与y的数据
    cout << "First student" << endl;
    cin >> x;
    cout << "\nSecond student" << endl;
    cin >> y;

    if (x == y)
        cout << "ID: " << x.Student_Num << " and ID: " << y.Student_Num << " the same scole" << endl;
    else if (x > y)
        cout << "ID: " << x.Student_Num << " and ID: " << y.Student_Num << " before > after" << endl;
    else
        cout << "ID: " << x.Student_Num << " and ID: " << y.Student_Num << " before < after" << endl;

    system("pause");
    return 0;
}