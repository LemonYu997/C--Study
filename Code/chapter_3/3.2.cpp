//条件运算符  ?
#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int number;

    //判断数字为偶数还是奇数
    cout << "Enter a number:" << endl;
    cin >> number;

    //条件运算符的使用
    (number % 2 == 0) ? cout << "The number is even number" << endl 
                    : cout << "The number is odd number" << endl;

    system("pause");
    return 0;
}