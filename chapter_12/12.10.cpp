//类类型转换为其他类类型
#include <iostream>
#include <cstdlib>
using namespace std;

class USD;
class RMB
{
    float RMB_Exchange_Rate;
    public:
        RMB()
        {
            RMB_Exchange_Rate = 7;
        }
        RMB(float Rate)
        {
            RMB_Exchange_Rate = Rate;
        }
    friend istream &operator>>(istream &in, RMB &Tmp_Money);
    //声明类类型转换函数
    operator USD();        
};

class USD
{
    float US_Exchange_Rate;
    public:
        USD()
        {
            US_Exchange_Rate = 7;
        }
        USD(float Rate)
        {
            US_Exchange_Rate = Rate;
        }
        friend ostream &operator<<(ostream &out, USD &Tmp_Money);
};

istream &operator>>(istream &in, RMB &Tmp_Money)
{
    cout << "Enter rate(Yuan to Dollar): ";
    in >> Tmp_Money.RMB_Exchange_Rate;
    return (in);
}

ostream &operator<<(ostream &out, USD &Tmp_Money)
{
    out << Tmp_Money.US_Exchange_Rate << " Yuan" << endl;
    return (out);
}

RMB::operator USD()
{
    float US_Exchange_Rate = 1 / RMB_Exchange_Rate;
    return (USD(US_Exchange_Rate));     //返回USD类
}

int main()
{
    RMB RMB_Yuan;
    USD US_Dollar;
    cin >> RMB_Yuan;

    //执行USD()转换函数
    US_Dollar = RMB_Yuan;

    cout << endl;
    //输出转换结果
    cout << "Rate(Dollar to RMB)" << endl
         << "1$: " << US_Dollar;

    system("pause");
    return 0;
}
