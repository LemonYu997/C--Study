//字符和转义字符
#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    char ch = 042;              //双引号的八进制ASCII码
    //打印出字符和它的ASCII码
    cout << "The octal 042 mean = " << ch << endl;
    cout << " use \"\" -> " << ch << "YUJIAN" << ch << endl;
    cout << '\a';               //发出 "嘟" 一声，蜂鸣

    system("pause");
    return 0;
}