//联合类型 union
//同struct相比，struct各成员拥有自己的内存空间，union各成员公用同一块内存空间，
//并以占最大内存空间的成员作为联合类型的内存空间大小
#include <iostream>
#include <cstdlib>

using namespace std;

int encode(int);        //加密函数
int decode(int);        //解密函数

int main()
{
    int pwd;
    cout << "Enter password: ";
    cin >> pwd;

    pwd = encode(pwd);
    cout << "After encode: " << pwd << endl;
    pwd = decode(pwd);
    cout << "After decode: " << pwd << endl;

    system("pause");
    return 0;
}

int encode(int pwd)
{
    int i;
    union {
        int num;
        char c[sizeof(int)];
    } u1;

    u1.num = pwd;
    for (i = 0; i < sizeof(int); i++)
        u1.c[i] += 32;

    return u1.num;
}

int decode(int pwd)
{
    int i;
    union {
        int num;
        char c[sizeof(int)];
    } u1;

    u1.num = pwd;
    for (i = 0; i < sizeof(int); i++)
        u1.c[i] -= 32;

    return u1.num;
}
