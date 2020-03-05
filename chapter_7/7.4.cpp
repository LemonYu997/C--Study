//命令行参数
//通过终端运行，先编译生成7.4.exe文件
//再在终端中输入： .\7.4.exe hello
//输出显示结果为：hello
#include <iostream>
#include <cstdlib>

using namespace std;

int main(int argc, char *argv[])    //命令行参数
{
    int i;
    if (argc == 1)                  //只有程序名称，没有其他参数
        cout << "No parameter!" << endl;
    else
    {
        cout << "The parameter is :" << endl;
        //打印argv数组的内容
        for (i = 0; i < argc; i++)
            cout << argv[i] << endl;    
    }

    system("pause");
    return 0;
}

