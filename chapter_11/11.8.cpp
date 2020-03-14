//习题1：定义square类与该类的成员函数，并以传值调用方式接收
#include <iostream>
#include <cstdlib>
using namespace std;

class Square
{
    int a;
public:
    Square(int n)
    {
      a=n*n;
    }
    void squ_sum(Square);
};

void Square::squ_sum(Square b)  
{
    a=a+b.a;
    cout<<"-----------------------------------"<<endl;
    cout<<"两数的平方和: "<<a<<endl;
    cout<<"-----------------------------------"<<endl;
}

int main()
{
    Square first(8),second(6);
    first.squ_sum(second);
      
    system("pause");
    return 0;
}