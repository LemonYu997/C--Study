//动态分配指针内存空间
#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{   
    //定义 *ptr_1，*ptr_2 指针，并由new分配内存
    int *ptr_1 = new int;
    int *ptr_2 = new int;

    cout << "Enter a number: " << endl;
    cin >> *ptr_1;
    cout << "Enter another number: " << endl;
    cin >> *ptr_2;

    //计算和
    cout << *ptr_1 << " + " << *ptr_2 << " = " << *ptr_1 + *ptr_2 << endl;

    //释放分配内存空间
    delete ptr_1;
    delete ptr_2;

    system("pause");
    return 0;
}