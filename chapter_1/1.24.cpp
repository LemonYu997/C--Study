//字符数组
#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{   
    //定义字符数组
    char Str_1[] = {'W', 'o', 'r', 'l', 'd', '!'};
    char Str_2[] = "World!";

    //显示Str_1占用的内存空间
    cout << "Sizeof Str_1 = " << sizeof(Str_1) << endl;
    //显示Str_1的内容
    cout << "Str_1 : " << Str_1 << endl;
    //显示Str_2占用的内存空间
    cout << "Sizeof Str_2 = " << sizeof(Str_2) << endl;
    //显示Str_2的内容
    cout << "Str_2 : " << Str_2 << endl;

    system("pause");
    return 0;
}