/*文件的输入/输出管理
1、可供文件存取的类：
    类          说明
    fstream     创建文件输入与输出对象，既可以输入数据到文件内，也可以从文件读取数据
    ofstream    创建文件输出对象，只可以将数据输出到文件中，不能从文件读取数据
    ifstream    创建文件输入对象，只能从文件读取数据，不能输出数据到文件里
2、创建文件对象后，使用<fstream>中的open成员函数打开文件：
open("文件名或完整路径", ios::打开模式)         
打开模式如下：
    打开模式    说明
    in          以只读模式打开，若文件不存在则会发生错误
    out         以唯写模式打开，若文件以存在则删除其内容，反之新建一个文件
    app         以附加模式打开，从文件尾处开始写入，若文件不存在则新建一个
    ate         打开文件并移动文件指针指至文件末尾处
    trunc       以唯写模式打开文件，若文件已存在则删除该文件再新建一个
    binary      以二进制模式打开文件
3、如果打开的文件与程序不在同一个目录中，open函数的第一个参数就要写上详细的文件路径，
路径中的所有"\"都要改成"\\"，如下所示：
fileIO.open("C:\\temp\\fileIO.txt", ios::in | ios:: out);
4、程序打开文件时可能遇到错误，例如文件不存在或磁盘空间不足，这时可以调用is_open()函数检查，
若文件成功打开，则会返回一个非零值，负责返回0
5、执行完文件操作后一定要关闭文件：
文件对象名称.close();                   */
#include <fstream>          //处理文件输入/输出的头文件
#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    ifstream fin;           //创建只读文件对象
    //打开只读文件对象并打开test,txt
    fin.open("test.txt", ios::in);
    if (!fin.is_open())
        cout << "file can't open!" << endl;
    else
    {
        cout << "open file..." << endl;
        cout << "close file..." << endl;
        fin.close();        //调用函数close()以关闭文件
    }

    system("pause");
    return 0;
}
