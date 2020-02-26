//goto指令
#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int score;

    cout << "Enter math score:" << endl;
    cin >> score;

    if (score >= 60)
        goto pass;              //找到标号名称为 "pass"的程序语句继续执行
    else
        goto nopass;            //找到标号名称为 "nppass"的程序语句继续执行
    
    pass:
        cout << "Math pass!" << endl;
        goto TheEnd;            //找到标号名称为 "TheEnd"的程序语句继续执行

    nopass:
        cout << "Math file!" << endl;

    TheEnd:
        cout << "------------------------------------------" << endl;
        cout << "Over" << endl;

        system("pause");
        return 0;
}