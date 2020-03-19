/*二进制文件的写入
不能用<<直接输出，要要用以下方式：
文件对象.write((char*) &写入变量, sizeof(写入变量))     
文件打开模式必须设置为binary:
open("filename", ios::binary)       */
#include <fstream>       
#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    ofstream fileOutput;        //新建文件唯写对象
    char str1[8] = "Tom";
    char str2[8] = "Jerry";
    char str3[8] = "John";
    int num1 = 123456;
    int num2 = 321456;
    int num3 = 987654321;

    //以唯写二进制模式打开文件
    fileOutput.open("test.txt", ios::binary | ios::out);

    if (!fileOutput.is_open())
    {
        cout << "open file error!" << endl;
        return 1;
    }
    else
    {
        fileOutput.write(str1, sizeof(str1));               //写入str1
        fileOutput.write((char *)&num1, sizeof(int));       //写入num1
        fileOutput.write(str2, sizeof(str2));               //写入str2
        fileOutput.write((char *)&num2, sizeof(int));       //写入num2
        fileOutput.write(str3, sizeof(str3));               //写入str3
        fileOutput.write((char *)&num3, sizeof(int));       //写入num3
    }

    //关闭文件
    fileOutput.close();

    system("pause");
    return 0;
}