//������
#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{   
    float Num1 = 1.742f;                    
    double Num2 = 4.159;                   
    long double Num3 = 3.144E10;

    cout << "3.5678��ռ�ڴ���ֽ��� = " << sizeof(3.5678) << endl;
    cout << "3.5678f��ռ�ڴ���ֽ��� = " << sizeof(3.5678f) << endl;
    cout << "3.5678L��ռ�ڴ���ֽ��� = " << sizeof(3.5678L) << endl;

    cout << "---------------------------------------------------" << endl;

    cout << "Num1 ��ֵ:" << Num1 << endl
         << "��ռ�ڴ�Ĵ�С:" << sizeof(Num1) << "�ֽ�" << endl;
    cout << "Num2 ��ֵ:" << Num2 << endl
         << "��ռ�ڴ�Ĵ�С:" << sizeof(Num2) << "�ֽ�" << endl;
    cout << "Num3 ��ֵ:" << Num3 << endl
         << "��ռ�ڴ�Ĵ�С:" << sizeof(Num3) << "�ֽ�" << endl;

    system("pause");
    return 0;
}