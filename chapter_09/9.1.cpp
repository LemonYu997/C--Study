//结构变量 struct
#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{   
    //结构类型的声明与定义
    struct strudent
    {
        char name[10];
        int score;
    } s1, s2;

    cout << "Enter student name: " << endl;
    cin >> s1.name;             //输入s1结构变量的name成员
    cout << "Enter student score: " << endl;
    cin >> s1.score;            //输入s1结构变量的score成员

    //结构变量的赋值
    s2 = s1;

    cout << "s1.name = " << s1.name << endl;
    cout << "s1.score = " << s1.score << endl;
    cout << "s2.name = " << s2.name << endl;
    cout << "s2.score = " << s2.score << endl;

    system("pause");
    return 0;
}
