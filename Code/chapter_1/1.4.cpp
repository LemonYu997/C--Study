//浮点数
#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{   
    float Num1 = 1.742f;                    
    double Num2 = 4.159;                   
    long double Num3 = 3.144E10;

    cout << "3.5678所占内存的字节数 = " << sizeof(3.5678) << endl;
    cout << "3.5678f所占内存的字节数 = " << sizeof(3.5678f) << endl;
    cout << "3.5678L所占内存的字节数 = " << sizeof(3.5678L) << endl;

    cout << "---------------------------------------------------" << endl;

    cout << "Num1 的值:" << Num1 << endl
         << "所占内存的大小:" << sizeof(Num1) << "字节" << endl;
    cout << "Num2 的值:" << Num2 << endl
         << "所占内存的大小:" << sizeof(Num2) << "字节" << endl;
    cout << "Num3 的值:" << Num3 << endl
         << "所占内存的大小:" << sizeof(Num3) << "字节" << endl;

    system("pause");
    return 0;
}