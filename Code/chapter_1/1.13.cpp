//转型运算符(C++独占)
#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int one = 9;
    double two = 7.6;
    one = one + static_cast<int>(two);          //转型运算符的应用
    cout << "one = " << one << endl;

    system("pause");
    return 0;
}

//static_cast <数据类型>(表达式或变量)           转换数据类型
//const_cast                                    转换指针或引用的常数类型
//dynamic_cast                                  转换类继承体系中的对象指针或引用
//reinterpret_cast                              转换无关联的数据类型