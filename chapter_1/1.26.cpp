//字符串数组初始化
#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{   
    //省略了每个元素之间的大括号
    char Str[6][30] = {"Yujian      Title",
                       "------------------",
                       "AAAAAAAAAAAAAA",
                       "BBBBBBBBBBBBBB",
                       "CCCCCCCCCCCCCC",
                       "DDDDDDDDDDDDDD"};

    int i;
    //输出字符串数组的内容
    for (i = 0; i < 6; i++)
        cout << Str[i] << endl;

    system("pause");
    return 0;
}