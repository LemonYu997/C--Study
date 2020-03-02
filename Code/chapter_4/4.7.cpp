//String的Find()函数
//寻找字符串，找到符合的字符串就返回起始位置，找不到就返回-1
#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

int main()
{   
    //字符串声明
    string str1 = "Years go by will I still be waiting";
    string str2 = "For somebody else to understand";

    cout << "str1 = " << str1 << endl;
    cout << "str2 = " << str2 << endl;

    //寻找字符串
    cout << "-------------------------------------" << endl;
    cout << "find 'will' place:" << str1.find("will") << endl;
    cout << "find 'else' place:" << str2.find("else") << endl;
    cout << "-------------------------------------" << endl;

    system("pause");
    return 0;
}