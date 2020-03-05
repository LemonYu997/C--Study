//函数指针
#include <iostream>
#include <cstdlib>

using namespace std;

//函数声明
void print_word1(char *);
void print_word2(char *);

int main()
{   
    void (*ptr)(char *);        //函数指针声明

    //将print_word1的内存地址赋给ptr函数指针
    ptr = print_word1;          
    //使用ptr()执行print_word1()的功能
    ptr((char *)"Hello");

    cout << "------------------------------------" << endl;

    //将print_word2的内存地址赋给ptr函数指针
    ptr = print_word2;       
    //使用ptr()执行print_word2()的功能
    ptr((char *)"Good bye!");

    system("pause");
    return 0;
}

void print_word1(char *str)
{
    cout << "This is function 1." << endl;
    cout << str << endl;
}

void  print_word2(char *str)
{
    cout << "This is function 2." << endl;
    cout << str << endl;
}

//如果出现提示：
//warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
//要在字符串"****"前加上(char *)强制转换