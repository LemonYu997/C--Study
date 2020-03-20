/*模板功能      函数模板
模板(Trmplate)主要提供了参数化类型(Parameterized Type)的功能，此功能的最大作用在于
将函数或类中通用的类型视为一种参数，当使用模板创建函数或类时，只需将特定的数据类型
(如int或float)带入，即可产生该特定类型的函数或类，所以模板的设计概念也被称为
"通用程序设计"(Generic Programming)。
C++中模板分为：函数模板(Function Template)和类模板(Class Template)

函数模板可以用来创建通用的函数，先使用通用的类型定义此函数，再根据需要给定不同的类型，
例如int、char、double等。函数模板把具有相同程序代码的函数集中写成一个函数，
并且把各个函数不同数据类型的部分改以模板形式参数来替代，即可通过传递不同数据类型的
部分改以模板形式参数来替代，即可通过传递不同数据类型的参数来创建实例函数。

函数模板声明：
template <class 模板形式参数1, class 模板形式参数2, ...>
返回数据类型 函数名称(参数1, 参数2, ...)
{
    //函数内的语句区块
}

说明：
1、template是C++语言的关键字，用来声明该函数为函数模板
2、关键字class在这里不是定义类的意思，而是用来声明模板形式参数
3、模板形式参数可以自行命名，命名规则遵循变量的命名规则
4、要在函数模板中设置多个模板形式参数时，只需以逗号(,)隔开          */
#include <iostream>
#include <cstdlib>
using namespace std;

//定义与声明func模板函数
template <class T>      

T func(T n)
{   
    //声明result为T类型变量
    T result;
    //执行n * n + 3 * n + 5运算，并将结果赋值给result
    result = n * n + 3 * n + 5;
    //返回result
    return result;      
}

int main()
{   
    //输出func(10)的运算结果
    cout << "func(10) = " << func(10) << endl;

    //输出func(12.5f)的运算结果
    cout << "func(12.5f) = " << func(12.5f) << endl;

    system("pause");
    return 0;
}