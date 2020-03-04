//字符串String
#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

int main()
{
    char ch[] = ", ";
    string firstname;
    string lastname;
    string input1("Enter firstname: ");
    string input2 = "Enter lastname: ";

    cout << input1 << endl;
    cin >> lastname;        //输入字符串
    cout << input2 << endl;
    cin >> firstname;       //输入字符串

    //用运算符接字符串
    string fullname = firstname + ch + lastname;
    cout << "Your name:" << fullname << endl;
    
    system("pause");
    return 0;
}