//面向对象程序设计 OOP(Object-Oriented Programming)
/*类的基本概念：
和结构类型相比只能包含数据变量，而类 Class可扩充到包含处理数据的函数*/
#include <iostream>
#include <cstdlib>

using namespace std;

//类声明
class Student {
    //存取权限关键字 private、protected、public
    //声明私有数据成员
    private:                //不被外界所存取，都未定义默认值，最高保护级别
        //定义数据成员时，不能设置初值
        char StuID[8];      //数据成员（属性）
        float Score_E, Score_M, Score_T, Score_A;
    // protected:           //只被继承的类所引用，第二高保护界别
        //     void;
    //声明公有成员函数
    public:                 //无存取限制，可任意存取
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
    //声明Student类的对象
    Student stud1;

    //调用input_data成员函数
    stud1.input_data();

    //调用show_data成员函数
    stud1.show_data();

    system("pause");
    return 0;
}