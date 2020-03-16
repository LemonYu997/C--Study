//输入/输出运算符重载       <<  >>
#include <iostream>
#include <cstdlib>
using namespace std;

//声明类Score
class Score
{
    private:
        int var1;

    friend istream &operator>>(istream &inputvar, Score &s1);
    friend ostream &operator<<(ostream &outputvar, Score &s1);
};

//声明>>运算符重载
istream &operator>>(istream &inputvar, Score &s1)
{
    cout << "Enter a number: ";
    inputvar >> s1.var1;
    return inputvar;
}

//声明<<运算符重载
ostream &operator<<(ostream &outputvar, Score &s1)
{
    cout << "The value is: ";
    outputvar << s1.var1 << endl;
    return outputvar;
}

int main()
{
    Score st1;

    //使用重载>>运算符来输入一个变量值
    cin >> st1;
    //使用重载<<运算符来显示一个变量值
    cout << st1;

    system("pause");
    return 0;
}