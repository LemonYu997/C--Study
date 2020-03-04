//指针引用应用
#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int Arr1[5] = {9, 8, 7, 6, 5};
    int Arr2[5] = {0, 1, 2, 3, 4};
    //Ptr1指向数组Arr1的起始地址
    int* Ptr1 = Arr1;
    //Ptr2指向数组Arr2的起始地址
    int* Ptr2 = Arr2;
    int i = 0;

    //声明指针引用refArr指向Ptr
    int* &refArr1 = Ptr1;
    int* &refArr2 = Ptr2;

    //以指针引用打印数组Arr1与Arr2的元素
    for (i = 0; i < 5; i++)
        cout << "Arr1[" << i << "] = " << *(refArr1 + i) << '\t' 
             << "Arr2[" << i << "] = " << *(refArr2 + i) << endl;

    //使用指针引用refArr1指向另一个指针引用refArr2
    refArr1 = refArr2;

    cout << "refArr1 = refArr2 after......" << endl;
    for (i = 0; i < 5; i++)
        cout << "*(refArr1+" << i << ") = " << *(refArr1 + i) << endl;

    system("pause");
    return 0;
}