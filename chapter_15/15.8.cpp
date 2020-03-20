/*类模板
设计类时，会遇到以相同程序代码处理不同类型数据的问题，此时可以使用类模板。
通常用在容器类(container class)中，例如堆栈、队列、数组、链表等。
声明类模板：
template <class 模板形式参数1, class模板形式参数2, ...>
class 类名称
{   
    //类内的语句区块
    模板参数 函数名称();
}
//成员函数的声明
template <class 模板形式参数, ...>
函数类型 类名称<模板参数>::函数名称()
{
    //程序语句
}
//产生对象的方式
类名称 <数据类型> 对象名称;         //声明对象
类名称 <数据类型> 对象名称();       //对象名称、对象和构造函数的合并声明        */
#include <iostream>
#include <cstdlib>
using namespace std;

template <class type>
//声明类模板
class function
{
    private:
        type y;
    public:
        //代入模板形式参数
        function(type x)
        {
            y = x;
        }
        void show()
        {
            cout << "y = " << y << endl;
        }
};

int main()
{   
    //对象名称、对象和构造函数的合并声明
    function<int> func1(10);
    func1.show();

    function<float> func2(9.8);
    func2.show();

    function<char> func3('z');
    func3.show();

    system("pause");
    return 0;   
}





