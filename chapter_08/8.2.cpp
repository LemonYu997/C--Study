//定义指令 #define 定义宏
#include <iostream>
#include <cstdlib>

using namespace std;

//定义各种宏名称
#define PI 3.14159
#define SHOW "Area of circle = "
#define RESULT r * r * PI


int main()
{
    int r;

    cout << "Enter of circle: ";
    cin >> r;
    cout << SHOW << RESULT << endl;
    
    #undef PI                           //解除宏定义

    system("pause");
    return 0;
}
