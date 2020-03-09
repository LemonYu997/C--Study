//定义函数
#include <iostream>
#include <cstdlib>

using namespace std;

#define NEWLINE cout << endl;
#define COPYRIGHT owner();

//输出所有者信息的函数
void owner();

int main()
{   
    //调用宏
    COPYRIGHT;
    NEWLINE;
    COPYRIGHT;

    system("pause");
    return 0;
}

void owner()
{
    cout << "You are nor an alien" << endl;
    cout << "Altered.Carbon" << endl;
    cout << "2020/3/6" << endl;
}