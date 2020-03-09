/*静态数据成员
当类中的数据成员被声明成静态类型后，该成员的值会被保留到，
程序结束或下一次该数据成员的值要被改变时。
一般类中的数据成员不能设置初值，都是在构造函数中设置，
但是声明static的数据成员一定要设置初值，在类的外部进行，且该操作只能有一次*/
#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;

class Dog
{
    private:
        char *pName;
        char *pColor;
        static int counter;         //声明为静态数据成员
    public:
        Dog(const char *pN, const char *pC)
        {
            pName = new char[strlen(pN) + 1];
            strcpy(pName, pN);      //设置字符串
            pColor = new char[strlen(pC) + 1];
            strcpy(pColor, pC);     //设置字符串
            counter++;
        }
        int getCounter()
        {
            return counter;
        }
};

//类外部设置静态数据成员初值
int Dog::counter = 0;

int main()
{
    Dog d1("AAA", "white");     //声明对象d1
    Dog d2("BBB", "yellow");    //声明对象d2
    Dog d3("CCC", "red");       //声明对象d3

    //计算产生对象的总数
    cout << d1.getCounter() << endl;

    system("pause");
    return 0;
}
