/*传引用调用：
形式参数不会另外分配内存来存放实际参数传入的地址，
而是直接把形式参数作为实际参数的一个别名(alias).
比地址调用更方便*/
#include <iostream>
#include <cstdlib>

using namespace std;

//传引用调用的函数原型
void add(int &, int &);

int main()
{
    int a = 5, b = 10;

    cout << "Before add(), a = " << a << " b = " << b << endl;

    add(a, b);
    cout << "After add(), a = " << a << " b = " << b << endl;

    system("pause");
    return 0;
}

void add(int &p1, int &p2)
{
    p1 = p1 + p2;
}