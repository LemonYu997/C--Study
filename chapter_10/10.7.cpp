//创建指针对象 new 和 delete
#include <iostream>
#include <cstdlib>

using namespace std;

//类声明
class Student {
    private:                
        char StuID[8];      
        float Score_E, Score_M, Score_T, Score_A;
    public: 
        //执行构造函数              
        Student()
        {   
            cout << "-------AAAA-------" << endl;
        }
        //执行析构函数
        ~Student()
        {
            cout << "-------BBBB-------" << endl;
        }
        void input_data()
        {
            //实现input_data函数
            cout << "**Input student ID and Score**" << endl;
            cout << "Student ID:" << endl;
            cin >> StuID;
            cout << "Enter English score: ";
            cin >> Score_E;
            cout << "Enter Math score: ";
            cin >> Score_M;
            Score_T = Score_E + Score_M;
            Score_A = (Score_E + Score_M) / 2;
        }
        void show_data()
        {   
            //实现show_data函数
            cout << "-------------------------------" << endl;
            cout << "Student ID: " << StuID << " " << endl;
            cout << "Total score: " << Score_T << " Average score: " << Score_A << endl;
            cout << "-------------------------------" << endl;
        }
};

int main()
{   
    //声明Student类的指针对象，并调用构造函数
    Student *stud1 = new Student;

    //调用input_data成员函数
    stud1->input_data();

    //调用show_data成员函数
    stud1->show_data();

    //调用析构函数
    delete stud1;

    system("pause");
    return 0;
}