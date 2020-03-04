//数组
#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{  
    int score[8] = {7, 22, 36};
    int Temp[] = {1, 2, 3, 4, 5};
    int i;

    //循环打印数组元素值
    for (i = 0; i < 8; i++)
    {
        cout << "score[" << i << "]=" << score[i] << endl;
    }

    cout << "Temp size = " << sizeof(Temp) / sizeof(Temp[0]) << endl;

    system("pause");
    return 0;
}