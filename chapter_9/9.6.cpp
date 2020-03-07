//函数与结构 结构传值调用
#include <iostream>
#include <cstdlib>

using namespace std;

//在全局范围内进行声明
struct product {
    char name[20];
    int price;
    int number;
};     

//传值调用的原型声明
int calculate(struct product);

int main()
{
    struct product book;

    cout << "Book name: ";
    cin >> book.name;
    cout << "Price: ";
    cin >> book.price;
    cout << "Number: ";
    cin >> book.number;
    cout << "------------------------------" << endl;

    cout << "Book name: " << book.name << endl;
    cout << "Price = " << book.price << endl;
    cout << "Number = " << book.number << endl;
    //调用时，直接将结构变量名称传入函数即可
    cout << "Total pay = " << calculate(book) << endl;

    system("pause");
    return 0;
}

int calculate(struct product inbook)
{
    int money;
    //计算订购金额
    money = inbook.price * inbook.number;

    return money;
}
