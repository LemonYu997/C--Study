//结构数组
#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{   
    //声明student结构
    struct student {
        char name[10];
        int score[3];
    };

    //设置5个成员的初始值
    struct student class1[5] = {
        {"Justin", {90, 76, 54}},
        {"momor", {95, 88, 54}},
        {"Becky", {98, 69, 90}},
        {"Bush", {75, 54, 100}},
        {"Snoopy", {80, 88, 97}},
    };

    int i;
    //打印student结构数组的成员元素
    cout << "----------Print student struct-------------" << endl;
    for (i = 0; i < 5; i++)
        cout << "Name: " << class1[i].name << "\t Score: " << class1[i].score[0] << " " 
            << class1[i].score[1] << " "
            << class1[i].score[2] << endl;

    //使用指针的概念存取student结构成员
    cout << "-----Print student struct with pointer-----" << endl;
    for (i = 0; i < 5; i++)
        cout << "Name: " << (class1 + i)->name << "\t Score: " << (class1 + i)->score[0] << " " 
        << (class1 + i)->score[1] << " "
        << (class1 + i)->score[2] << endl;

    system("pause");
    return 0;
}