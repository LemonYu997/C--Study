//基本数据类型转换为类类型
#include <iostream>
#include <cstdlib>
using namespace std;

float Exchange_Rate;

class Dollar
{
    float RMB_Yuan;

    public:
        Dollar()            //Dollar类的构造函数
        {
            RMB_Yuan = 1;
            Exchange_Rate = 7;
        }
        Dollar(float Money, float Rate)
        {
            RMB_Yuan = Money;
            Exchange_Rate = Rate;
        }
        Dollar(float Money)
        {
            RMB_Yuan = Money * Exchange_Rate;
        }
    friend ostream &operator<<(ostream &out, Dollar &Tmp_Money);
    Dollar operator=(float Money);
};

ostream &operator<<(ostream &out, Dollar &Tmp_Money)
{
    out << Tmp_Money.RMB_Yuan;
    return (out);
}

Dollar Dollar::operator=(float Money)
{
    RMB_Yuan = Money * Exchange_Rate;
    return (*this);
}

int main()
{
    Dollar RMB;
    float USD, Rate;
    cout << "Enter rate(Dollar to Yuan): ";
    cin >> Rate;
    cout << "How many Dollar do you want to exchange: ";
    cin >> USD;
    Exchange_Rate = Rate;
    RMB = USD;              //调用重载运算符函数，将浮点数转换成类类型

    cout << endl;
    cout << "Rate(Dollar to Yuan) = 1 : " << Exchange_Rate << endl;
    cout << "How many USD do you want to exchange: " << USD << endl;
    cout << "You can get " << RMB << " Yuan" << endl;

    system("pause");
    return 0;
}

