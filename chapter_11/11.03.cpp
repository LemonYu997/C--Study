//类的友元函数也可以是其他类的成员函数
#include <iostream>
#include <cstdlib>
using namespace std;

class Share;
class Friend
{
    public:
        //在类Friend中声明Access成员函数
        void Access(Share *s);
};
class Share
{   
    //声明成员函数Access为友元函数
    friend void Friend::Access(Share *s);
    private:
        int a;
        void printA()
        {
            cout << "Use private of Share" << endl;
        }
    protected:
        int b;
        void printB()
        {
            cout << "Use protected of Share" << endl;
        }
    public:
        int c;
        Share()                         //构造函数
        {
            a = 1;
            b = 2;
            c = 3;
        }
        void printC()
        {
            cout << "Use public of Share" << endl;
        }
};

//定义类Friend的成员函数Access，同时也是Share的友元函数
void Friend::Access(Share *s)
{
    s->a = s->b = s->c = 5;
    cout << "a = " << s->a << " b = " << s->b << " c = " << s->c << endl;

    cout << "-----------------------------------" << endl;
    s->printA();
    s->printB();
    s->printC();
}

int main()
{
    Share sh;
    Friend fr;

    //因为参数是Share类型的对象指针，所以必须传入&sh
    fr.Access(&sh);

    system("pause");
    return 0;
}

