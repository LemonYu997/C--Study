//指针与数组
#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int arr[] = {10, 20, 30, 40, 50};       //声明数组arr及其元素

    int i;

    //打印数组与指针常数的替代运算
    for (i = 0; i < 5; i++)
        cout << "arr[" << i << "] = " << arr[i] << " *(arr+" << i << ") = " << *(arr + i)
             << " *(arr[" << i << "]) = " << *(&arr[i]) << endl;


    system("pause");
    return 0;
}