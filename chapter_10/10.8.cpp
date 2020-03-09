//实验1，定义Cube类的对象，并计算三个数据成员的立方和
#include <iostream>
#include <cstdlib>
using namespace std;

//定义Cube类
class Cube
{
    int a;
public:
    Cube(int n)
    {
        a = n * n * n;
    }
    //函数声明原型
    void cub_sum(Cube, Cube);
};

void Cube::cub_sum(Cube b, Cube c)
{
    a = a + b.a + c.a;
    cout << "Sum of cube of three numbers: " << a << endl;
}

int main()
{
    Cube first(8), second(10), third(11);
    first.cub_sum(second, third);
    system("pause");
    return 0;
}
