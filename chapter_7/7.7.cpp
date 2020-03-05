//静态外部变量
//只能在同一文件中使用，相当于外部的static变量
#include <iostream>
#include <cstdlib>

using namespace std;

int Factorial(int);         //阶乘运算函数
static int fact_no;         //声明静态外部变量

int main()
{
    int number, answer;
    cout << "Enter a number: " << endl;
    cin >> number;
    answer = Factorial(number);

    cout << number << "! = " << answer << endl;
    //打印出当前的count值
    cout << "fact_no = " << fact_no << endl;        

    system("pause");
    return 0;
}

//参数：number指定数值进行阶乘运算
//返回值：阶乘运算结果
int Factorial(int number)
{
    int i;
    fact_no = 1;
    for (i = 1; i <= number; i++)
        fact_no = fact_no * i;
    return fact_no;
}