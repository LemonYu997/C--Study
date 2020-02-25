//布尔类型  bool
#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    bool Num1 = true;                   //声明布尔变量，设置值为true
    bool Num2 = 0;                      //声明布尔变量，设置值为0
    bool Num3 = -43;                    //-43为非0值，结果为真
    bool Num4 = Num1 > Num2;            //设置值为布尔判断式，结果为真

    cout << "Num1 = " << Num1 << " Num2 = " << Num2 << endl;
    cout << "Num3 = " << Num3 << " Num4 = " << Num4 << endl;

    system("pause");
    return 0;
}