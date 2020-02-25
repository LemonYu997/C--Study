//按位运算符
#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int a = 13, b = 57;

    //标示a与b的二进制数表示法
    cout << "a = 13, binary = 00001101" << endl;
    cout << "b = 57, binary = 00111001" << endl;
    cout << "----------------------------------------------" << endl;

    cout << "13 & 57 = " << (a & b) << endl;        //&位运算符，与
    cout << "13 | 57 = " << (a | b) << endl;        //|位运算符，或
    cout << "13 ^ 57 = " << (a ^ b) << endl;        //^位运算符，异或
    cout << "~57 = " << (~b) << endl;               //~位运算符，非
    cout << "13 >> 2 = " << (a >> 2) << endl;       //>>位运算符，右移
    cout << "13 << 2 = " << (a << 2) << endl;       //<<位运算符，右移

    system("pause");
    return 0;
}