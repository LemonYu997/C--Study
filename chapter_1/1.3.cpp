//整数
#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    //声明短整数变量，并以八进制数设置其值
    short int number1 = 0200;
    //声明整数变量，并以十六进制数设置其值
    int number2 = 0x33f;
    //声明长整数变量，并以十进制数设置其值
    long int number3 = 1234567890;
    //声明无符号长整数变量，并以十进制数设置其值
    unsigned long int number4 = 987654321;

    //输出各种整数数据类型值与所占内存空间字节数
    cout << "short int = " << number1 << " size = " << sizeof(number1) << " Bytes" << endl;
    cout << "int = " << number2 << " size = " << sizeof(number2) << " Bytes" << endl;
    cout << "long int = " << number3 << " size = " << sizeof(number3) << " Bytes" << endl;
    cout << "unsigned long int = " << number4 << " size = " << sizeof(number4) << " Bytes" << endl;
    
    system("pause");
    return 0;
}
