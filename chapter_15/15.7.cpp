/*非类型参数的模板函数
非类型参数(nontype parameter)表示在模板函数的参数行中含有基本数据类型，如int、float等。
定义如下：
template <class 模板参数1, 基本数据类型 模板参数2, ...>
函数类型 函数名称(函数参数)
{
    //程序语句
}                               */
#include <iostream>
#include <cstdlib>
using namespace std;

//声明非类型参数模板函数
template <class arrayType, int array_size>

void showArray(arrayType (&array)[array_size])      //不用加数据类型
{
    int i;
    cout << "template nontype parameter: " << endl;
    cout << "array_size = " << array_size << endl;

    //打印数组元素内容
    for (i = 0; i < array_size; i++)
    {
        cout << "array[" << i << "] = " << array[i] << endl;
    }
    cout << endl;
}

int main()
{   
    //声明整数数组
    int a[] = {20, 23, 56, 77, 88};
    //调用模板函数
    showArray(a);   
    
    system("pause");
    return 0;   
}