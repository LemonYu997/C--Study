//条件编译指令 #if #endif #else #elif #endif
#include <iostream>
#include <cstdlib>

using namespace std;

//定义标识符CHOICE
#define CHOICE 2
//如果CHOICE == 1，定义标识符START为11，END为20
#if CHOICE == 1
    #define START 11
    #define END 20
//如果CHOICE == 2，定义标识符START为21，END为30
#elif CHOICE == 2
    #define START 21
    #define END 30
//如果前边都不成立，定义标识符START为1，END为10
#else
    #define START 1
    #define END 10
//结束预处理指令 #if
#endif


int main()
{
    int Total = 0, count;

    //循环加法
    for (count = START; count <= END; count++)
    {
        cout << count;
        //如果整数变量(count < END显示+符号)
        if (count < END)
            cout << " + ";
        Total += count;
    }
    cout << " = " << Total << endl;

    system("pause");
    return 0;
}