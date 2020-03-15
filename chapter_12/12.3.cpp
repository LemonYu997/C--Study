//二元运算符重载    定义 > -
#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;

//声明Student类
class Student
{
    //将减法运算符函数声明为友元函数
    friend int operator-(int, Student);
    private:
        char Name[20];      //定义字符数组Name[]
        int Score;          //定义整数变量Score
    public:
        Student(const char *N, int s)
        {
            strcpy(Name, N);
            Score = s;
        }
        //大于 (>)运算符函数重载
        bool operator>(Student b)
        {
            if (this->Score > b.Score)
                return true;
            else
                return false;
        }
        void ShowName()
        {
            cout << "Name = " << Name << endl;
        }
        void ShowScore()
        {
            cout << "Score = " << Score << endl;
        }
};

//声明减法运算符重载
int operator-(int p, Student q)
{
    return (p - q.Score);
}

int main()
{
    Student x("Tom", 70);
    Student y("Mary", 85);
    cout << "The data of x: " << endl;
    x.ShowName();
    x.ShowScore();

    cout << "difference: " << (100 - y) << endl;

    cout << "Who is better: " << endl;
    if (x > y)
        x.ShowName();
    else
        y.ShowName();

    system("pause");
    return 0;
}
