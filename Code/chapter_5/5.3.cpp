//指针运算
#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int *int_ptr;                                   //声明整数类型指针
    int iValue = 12345;
    double *double_ptr, dValue = 1234.56;           //声明双精度实数类型指针

    int_ptr = &iValue;
    double_ptr = &dValue;

    //整数指针加法和减法运算

    cout << "int_ptr = " << int_ptr << endl;
    int_ptr++;                      //向右移1个整数基本内存单位偏移量
    cout << "int_ptr++ = " << int_ptr << endl;
    int_ptr--;                      //向左移1个整数基本内存单位偏移量
    cout << "int_ptr-- = " << int_ptr << endl;
    int_ptr = int_ptr + 3;          //向右移3个整数基本内存单位偏移量
    cout << "int_ptr + 3 = " << int_ptr << endl;

    cout << "-------------------------------" << endl;
    cout << "double_ptr = " << double_ptr << endl;
    double_ptr++;                   //向右移1个双精度实数基本内存单位偏移量
    cout << "double_ptr++ = " << double_ptr << endl;
    double_ptr--;                   //向左移1个双精度实数基本内存单位偏移量
    cout << "double_ptr-- = " << double_ptr << endl;
    double_ptr = double_ptr + 3;    //向右移3个双精度实数基本内存单位偏移量
    cout << "double_ptr + 3 = " << double_ptr << endl;

    system("pause");
    return 0;
}