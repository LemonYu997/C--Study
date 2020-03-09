//整数与双精度实数指针变量的地址、数据内容及指针变量所占用的内存空间
#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int iVal = 10;              //整数变量
    double dVal = 123.45;       //双精度实数变量

    int *piVal = NULL;          //声明为空指针
    piVal = &iVal;              //整数类型的指针变量，指向iVal变量的地址

    double *pdVal = &dVal;      //实数类型的指针变量，指向dVal变量的地址

    cout << "piVal变量地址为：" << piVal << endl;
    cout << "piVal变量所指向地址的数据内容为：" << *piVal << endl;

    *piVal = 20;                //重新设置piVal指针变量的数据内容为20
    cout << "piVal指针变量重新设置后，iVal的数据内容同步更改为：" << iVal << endl;
    cout << "整数iVal所占用的内存空间为：" << sizeof(iVal) << "位" << endl;
    cout << "整数指针变量piVal所占用的内存空间为：" << sizeof(piVal) << "位" << endl;

    cout << "-------------------------------------------------------" << endl;
    cout << "pdVal变量地址为：" << pdVal << endl;
    cout << "pdVal变量所指向地址的数据内容为：" << *pdVal << endl;

    *pdVal = 67.1234;           //重新设置pdVal指针变量的数据内容为67.1234
    cout << "pdVal指针变量重新设置后，dVal的数据内容同步更改为：" << dVal << endl;
    cout << "双精度实数dVal所占用的内存空间为：" << sizeof(dVal) << "位" << endl;
    cout << "双精度实数指针变量pdVal所占用的内存空间为：" << sizeof(pdVal) << endl;

    system("pause");
    return 0;
}