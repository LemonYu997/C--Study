//动态分配数组
#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{   
    //定义整数变量count与Total
    int no, count = 0, Total = 0;

    cout << "Enter number: " << endl;
    cin >> no;

    int *ptr = new int[no];         //动态分配数组为no个元素

    for (count = 0; count < no; count++)
    {
        cout << "Enter ptr[" << count << "]: " << endl;
        cin >> ptr[count];          //采用数组下标来输入数组元素
    }
    for (count = 0; count < no; count++)
        Total += *(ptr + count);    //采用指针变量运算来存取数组元素值

    cout << "--------------------------------------" << endl;

    cout << no << "sum of number = " << Total << endl;
    
    //释放分配给ptr的内存
    delete[] ptr;
    ptr = NULL;

    system("pause");
    return 0;
}