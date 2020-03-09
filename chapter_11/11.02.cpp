/*友元函数
友元函数不是类中的成员，但是可以直接使用类的任何数据与函数，
就好像把此函数当成是类的成员函数一样，赋予了存取类内私有成员的权利。
在类内使用 "friend"关键字声明友元函数。
特点：
1、友元函数不是类的成员，没有存取类型限制，可以在类内任何位置声明
2、声明位置必须在类的内部，通常在首行
3、在public、private、protected任何区块内都可以声明该类的友元函数*/
#include <iostream>
#include <cstdlib>
using namespace std;

class Student
{   
    //声明add_score函数为友元函数
    friend float add_score(Student);
    private:
        int StuID;
        float Score_E, Score_M, Score_T;
    public:
        //声明构造函数
        Student(int id, float E, float M)
        {
            StuID = id;
            Score_E = E;
            Score_M = M;
            Score_T = Score_E + Score_M;

            cout << "Student ID: " << StuID << endl;
            cout << "Total scole: " << Score_T << endl;
        }
};

//定义add_score函数，友元函数可调用类中成员
float add_score(Student a)
{
    a.Score_T += 30;
    return a.Score_T;
}

int main()
{   
    //设置stud1对象初值
    Student stud1(920101, 80, 90);

    //调用add_score函数
    cout << "Add 30 score, total score is: " << add_score(stud1) << endl;

    system("pause");
    return 0;
}
