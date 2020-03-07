//结构指针
#include <iostream>
#include <cstdlib>

using namespace std;

//声明circle结构
struct circle {
    float r;
    float pi;
    float area;
};

int main()
{
    struct circle myCircle;
    struct circle *getData;

    //getData指向myCircle
    getData = &myCircle;

    //设置圆半径
    myCircle.r = 5;
    //设置圆周率
    myCircle.pi = 3.14159;
    
    //计算圆面积
    myCircle.area = myCircle.r * myCircle.r * myCircle.pi;

    //第一种结构指针的存取方式
    cout << "getData->r = " << getData->r << endl;
    cout << "getData->pi = " << getData->pi << endl;
    cout << "getData->area = " << getData->area << endl;
    cout << "-----------------------------" << endl;

    //第二种结构指针的存取方式
    cout << "(*getData).r = " << (*getData).r << endl;
    cout << "(*getData).pi = " << (*getData).pi << endl;
    cout << "(*getData).area = " << (*getData).area << endl;

    system("pause");
    return 0;
}