/*赋值运算符重载        =
使用重载赋值运算符函数时，有以下注意事项：
1、"="运算符函数必须为非静态的成员函数，不能以非成员函数声明
2、"="运算符函数不能被派生类所继承
3、即使没有任何类存在，默认的"="运算符函数依然可以被C++编译程序接受*/
#include <iostream>
#include <cstdlib>
using namespace std;

class MyClass
{
    char *m_Name;
    int m_English;
    int m_Math;
    int m_Chinese;

    public:
        MyClass(char * cName, int iEng = 0, int iMath = 0, int iCh = 0)
        {
            m_Name = cName;
            m_English = iEng;
            m_Math = iMath;
            m_Chinese = iCh;
        }

        //=运算符重载
        MyClass &operator=(const MyClass &myClass)
        {
            m_English = myClass.m_English;
            m_Math = myClass.m_Math;
            m_Chinese = myClass.m_Chinese;
            return *this;       //返回对象
        }

        friend ostream &operator<<(ostream &, MyClass &);
};

//定义输出串行数据流
ostream &operator<<(ostream &out, MyClass &myClass)
{
    out << "\nName: " << myClass.m_Name
        << "\nEnglish: " << myClass.m_English
        << "\nMath: " << myClass.m_Math
        << "\nChinese: " << myClass.m_Chinese << endl;
    return out;
}

int main()
{
    char cName[10];         //定义长度为10的数组
    int iEng, iMath, iCh;   //记录英语、数学、语文

    cout << "What's name of student?" << endl;
    cin >> cName;
    cout << "Enter score of English: ";
    cin >> iEng;
    cout << "Enter score of Math: ";
    cin >> iMath;
    cout << "Enter score of Chinese: ";
    cin >> iCh;

    MyClass *myClass = new MyClass(cName, iEng, iMath, iCh);
    cout << (*myClass);

    //赋值运算符重载
    MyClass *myClass1 = new MyClass(cName);
    *myClass1 = *myClass;
    cout << (*myClass1);

    delete myClass1;
    delete myClass;

    system("pause");
    return 0;
}