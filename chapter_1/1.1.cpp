//第一个C++程序
//旧版头文件带 ".h"
#include <iostream>
#include <cstdlib>

//命名空间
using namespace std;

int main()
{
    //打印字符串
    cout << "My first c++ program" << endl;
    //如果前边没有声明命名空间std，就要用下边的方法 
    //std::cout << "My first c++ program" << endl;
    //"<<"为输出运算符， ">>"为输入运算符
    
    system("pause");
    return 0;
}