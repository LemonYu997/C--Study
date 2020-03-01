//二维字符数组
#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    char name[4][10] = {"Justinian", "Momo", "Becky", "Bush"};
    int i, j;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 10; j++)
        {
            if (name[i][j] == '\0')
                cout << "0";            //是空字符就打印出0
            else
                cout << name[i][j];
        }
        cout << endl;                   //换行
    }

    system("pause");
    return 0;
}