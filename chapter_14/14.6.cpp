/*随机存取模式
ifstream成员函数        说明
seekp(pos)              定位文件的写入(put)位置为文件起始处后第pos字节
seekp(pos, seek_dir)    定位文件的写入(put)位置为特定位置seek_dir后第pos字节
pos = tellp()           获取文件当前的写入位置

ofstream成员函数        说明
seekg(pos)              定位文件的读取(get)位置为文件起始处后第pos字节
seekg(pos, seek_dir)    定位文件的读取(get)位置为特定位置seek_dir后第pos字节
pos = tellg()           获取文件当前的读取位置

seek_dir特定位置(Seeking Direction)
特定位置常数        说明
beg                 文件起始(beginning)位置
cur                 文件当前(current)位置
end                 文件结束(end)位置       */
#include <fstream>       
#include <iostream>
#include <cstdlib>
using namespace std;

//定义NOTE类
class NOTE
{
    protected:                  //私有数据区
        char str[8];            //存储姓名
        int num;                //存储电话
    public:                     //公有数据区
        void ShowNote()         //类公有函数
        {
            cout << "name: " << str << endl;
            cout << "number: " << num << endl;
        }
};

int main()
{
    int n;
    ifstream fileInput;       //新建只读文件对象
    //以只读二进制模式打开文件
    fileInput.open("test.txt", ios::binary | ios::in);
    if (!fileInput.is_open())
    {
        cout << "open file error!" << endl;
        return 1;
    }
    else
    {
        NOTE myNote;            //新建类对象myNote
        //获取myNote对象数据长度
        int notelength = sizeof(myNote);
        //移动只读文件指针至文件末尾处
        fileInput.seekg(0, ios::end);
        cout << "Enter a number: " << endl;
        cin >> n;
        //移动到第n项的数据位置
        fileInput.seekg((n - 1) * notelength, ios::beg);
        //读取第n项数据
        fileInput.read((char *)&myNote, notelength);
        cout << "No." << n << " data is: " << endl;
        myNote.ShowNote();      //显示读取的数据
        cout << "Over." << endl;
    }

    //关闭文件
    fileInput.close();

    system("pause");
    return 0;
}