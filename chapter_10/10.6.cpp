/*析构函数
对象被创建时，会在构造函数动态分配内存空间，程序结束或对象被释放时，
内存空间不会自动释放，需要析构函数执行内存释放的操作。
析构函数是在对象生命周期结束后在内存中执行清除与释放对象的操作，
它的名称和类名称相同，必须在前面加上 "~"，不能有任何参数行
析构函数的特性：
1、析构函数不能重载，一个类只能有一个析构函数
2、析构函数的第一个字符必须是~，其余则与该类的名称相同
3、析构函数不含任何参数，也没有返回值
4、当对象生命期结束时或是以delete语句将new语句分配的对象释放时，
   编译程序会自动调用析构函数。在程序区块结束前，所有曾经在区块中声明的对象都会
   按照先构造后解析的顺序执行*/
#include <iostream>
#include <cstdlib>

using namespace std;

//声明类
class testN
{
    int no[20];
    int i;

    public:
        //构造函数
        testN()
        {
            int i;
            for (i = 0; i < 10; i++)
                no[i] = i;
            cout << "Mission Complete." << endl;
        }
        //析构函数声明
        ~testN()
        {
            cout << "Call function." << endl;
            for (i = 0; i < 10; i++)
                cout << no[i] << " ";
            cout << "\n"
                 << "Function complete." << endl;
        }
};

int show_result()
{   
    //对象离开程序区块前会自动调用析构函数
    testN test1;
    return 0;
}

int main()
{   
    //调用testN类对象的函数
    show_result();

    system("pause");
    return 0;
}