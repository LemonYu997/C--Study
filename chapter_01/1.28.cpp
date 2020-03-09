//字符串使用 "+" 和 ">"
#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

int main()
{
    //声明String字符串
    string st1, st2, st3, st4, st5;
    //小写字母的ASCII码比大写字母大
    st1 = "abcdef";
    st2 = "ABCDEF";
    st3 = "Happy ";
    st4 = "Birthday";

    //进行字符串连接运算
    st5 = st3 + st4;
    cout << "st3 = " << st3 << endl;
    cout << "st4 = " << st4 << endl;
    cout << "st5 = st3 + st4 = " << st5 << endl;
    cout << "------------------------------------" << endl;

    //进行字符串之间的比较
    cout << "st1 = " << st1 << endl;
    cout << "st2 = " << st2 << endl;
    if (st1 > st2)
        cout << "st1 and st2: st1 > st2" << endl;
    else
        cout << "st1 and st2: st1 < st2" << endl;
    
    system("pause");
    return 0;
}