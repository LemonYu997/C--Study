//指针与多维数组
#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    //声明二维数组
    int arr[4][3] = {{1, 2, 3},
                     {4, 5, 6},
                     {7, 8, 9},
                     {10, 11, 12}};
    int i, j;

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
        {   
            //打印arr[i][j]内容
            cout << "arr[" << i << "][" << j << "] = " << arr[i][j] << '\t'; 
            //打印arr[i][j]的地址
            cout << "*(arr+" << i << "+" << j << ") = " << *(arr + i) + j << '\t';
            //打印arr[i][j]的地址
            cout << "*(*(arr+" << i << ")+" << j << ") = " << *(*(arr + i) + j) << endl;
        }
    }
    
    system("pause");
    return 0;
}