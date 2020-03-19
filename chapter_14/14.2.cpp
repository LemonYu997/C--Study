/*文本文件的写入
文件对象 << 写入数据    
一次写入一个字符的成员函数put():
文件对象.put(char ch)                */
#include <iostream>         //包含<iostream>头文件
#include <fstream>          //包含<fstream>头文件
#include <cstdlib>
using namespace std;

int main()
{
    ofstream fileOutput;    //新建只读文件对象

    //以只读模式打开
    fileOutput.open("test.txt", ios::out);
    if (!fileOutput.is_open())
    {
        cout << "open file error" << endl;
        return 1;           //异常结束程序
    }
    else
    {
        fileOutput << "AAAAAAAAAAAAAAAA" << endl;
        fileOutput << "BBBBBBBBBBBBBBBB" << endl;
        fileOutput << "CCCCCCCCCCCCCCCCCC" << endl;
    }

    //关闭文件
    fileOutput.close();

    system("pause");
    return 0;
}