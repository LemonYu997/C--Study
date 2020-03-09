//getline()函数
#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{   
    //生命长度为30的字符串变量
    char str[30];
    cout << "Length: 30, Can input: 10" << endl;

    cout << "Enter any string: " << endl;
    //使用getline()函数输入字符串，最多接受10个字符
    cin.getline(str, 10, '\n');
    cout << "Str : " << str << endl;

    system("pause");
    return 0;
}