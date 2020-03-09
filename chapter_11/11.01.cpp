//对象数组
//使用对象数组声明和循环的方式输入三个打击者的数据
#include <iostream>
#include <cstdlib>
using namespace std;

//定义一个Baseball的类
class Baseball
{
    //定义私有数据及函数成员
    private:
        char player[20];            //姓名
        int fires;                  //打击次数
        int safes;                  //安打次数
        //声明私有的函数成员countsafe的原型，用以计算打击者的打击率
        float countsafe();

    public:
        //声明公有函数inputplayer的原型，用以输入打击者的数据
        void inputplayer();
        //声明公有函数showplayer的原型，用以显示打击者的数据
        void showplayer();
};

//类外实现
void Baseball::inputplayer()
{
    cout << "Player name: ";
    cin >> player;                  //输入打击者的姓名

    cout << "Fire times: ";
    cin >> fires;                   //输入打击次数

    cout << "Safe times: ";
    cin >> safes;                   //输入安打次数
}

void Baseball::showplayer()
{
    float rates;
    rates = countsafe();            //通过coutsafe函数成员计算并返回打击率

    cout << "------------------------" << endl;

    cout << "Player: " << player << endl;
    cout << "Fire times: " << fires << endl;
    cout << "Safe times: " << safes << endl;
    cout << "Fire rate: " << rates << endl;
}

float Baseball::countsafe()
{   
    //声明打击率变量
    float rate;

    //计算打击率
    rate = (float(safes) / float(fires));

    return rate;
}

int main()
{   
    //声明对象数组，数组大小就是对象个数
    Baseball b[3];
    int i;
    cout << "Enter data: " << endl;
    cout << "-----------------" << endl;
    for (i = 0; i < 3; i++)
    {
        b[i].inputplayer();
    }

    cout << "Show data: " << endl;
    cout << "-----------------" << endl;
    for (i = 0; i < 3; i++)
    {
        b[i].showplayer();
    }

    system("pause");
    return 0;
}