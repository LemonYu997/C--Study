//预处理指令 #include
#include <iostream>
#include <cstdlib>
#include "8.1_1.cpp"        //非标准库文件用 ""

using namespace std;

//只声明函数的原型
double factorial(int);
double Cnk(int, int);

//主程序部分
int main()
{
    int n, k;
    cout << "Calculate C(n, k) = n! / (k! (n - k)! )" << endl;
    cout << "--------------------------------------------" << endl;
    
    cout << "Enter n = ";
    cin >> n;
    cout << "Enter k = ";
    cin >> k;

    cout << n << "! "
         << "/ ( " << k << "! * (" << n << " - " << k << ")! ) = " << Cnk(n, k) << endl;
    

    system("pause");
    return 0;
}
