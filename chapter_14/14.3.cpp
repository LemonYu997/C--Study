/*文本文件的读取函数
cin >> 读取数据            
函数                            功能
get(char ch)                    从文件中一次读取一个字符存入ch中
getline(char*str,int size)      从文件中一次读取一行字符串，直到遇到换行字符'\n'为止，
                                然后存储在字符串str中，size为字符串str的大小    */
#include <fstream>       
#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    //读文件
    string str;
    char data[100];
    char oneChar;
    ifstream fin;

    //使用对象fin的函数open()打开文件数据流，打开模式可省略
    fin.open("test.txt");
    //读取一个字符
    for (int i = 0; i < 12; i++)
    {   
        //使用get函数读取字符
        fin.get(oneChar);
        //在屏幕上输出读取到的字符
        cout << oneChar;    
    }
    //读取一项数据
    //使用getline函数读取整行数据
    fin.getline(data, sizeof(data));
    cout << data << endl;
    //使用 ">>" 读取数据
    fin >> str;

    //使用eof()来判断是否读到文件末尾
    while (!fin.eof())
    {
        cout << str << endl;
        fin >> str;
    }

    //关闭文件
    fin.close();

    system("pause");
    return 0;
}