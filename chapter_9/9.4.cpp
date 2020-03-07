//结构指针数组
#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{   
    //声明student结构
    struct student {
        char name[10];
        int score;
    };

    //设置5个成员的初始值
    struct student s1[5] = {
        {"Justin", 90},
        {"momor", 95},
        {"Becky", 98},
        {"Bush", 75},
        {"Snoopy", 80},
    };

    //声明成结构指针数组
    struct student *s2[5];

    int i;

    //复制结构成员
    for (i = 0; i < 5; i++)
        s2[i] = &s1[i];

    //显示结构成员
    for (i = 0; i < 5; i++)
    {
        cout << "Name: " << s2[i]->name << '\t';
        cout << "Score: " << s2[i]->score << endl;
    }

    system("pause");
    return 0;
}