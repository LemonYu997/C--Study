/*二进制文件的读取
文件对象.read((char*) &写入变量, sizeof(写入变量))    */
#include <fstream>       
#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    ifstream fileInput;             //新建只读文件对象
    char str[8];
    int num;

    //以只读二进制模式打开文件
    fileInput.open("test.txt", ios::binary | ios::in);
    if (!fileInput.is_open())
    {
        cout << "open file error!" << endl;
        return 1;
    }
    else
    {
        cout << "name       phone" << endl;
        cout << "---------------------" << endl;
        fileInput.read(str, sizeof(str));               //读取第一组姓名
        fileInput.read((char *)&num, sizeof(int));      //读取第一组电话
        //检查是否读到文件末尾
        while (!fileInput.eof())
        {
            cout << str << "        " << num << endl;
            fileInput.read(str, sizeof(str));               //读取下一组姓名
            fileInput.read((char *)&num, sizeof(int));      //读取下一组电话
        }
    }
    
    //关闭文件
    fileInput.close();

    system("pause");
    return 0;
}