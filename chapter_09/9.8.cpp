//枚举类型 enum
#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{   
    //声明与定义Drink枚举类型
    enum Drink
    {
        coffee = 25,    //如果未定义，默认第一个元素值为0
        milk = 20,
        tea = 15,
        water           //未定义的元素默认值为上一个元素值+1，此处为16
    };

    //定义Drink枚举类型变量c_drink
    enum Drink c_drink;

    c_drink = coffee;   //设置变量c_drink值为coffee
    cout << "The value of coffee in enum is : " << c_drink << endl;

    c_drink = milk; //设置变量c_drink值为milk
    cout << "The value of milk in enum is : " << c_drink << endl;

    c_drink = water;   //设置变量c_drink值为coffee
    cout << "The value of water in enum is : " << c_drink << endl;

    system("pause");
    return 0;
}
