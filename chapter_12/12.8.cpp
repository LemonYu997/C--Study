/*类型转换运算符重载
将类类型转换为基本数据类型，只能在类中重载类型转换运算符符号*/
#include <iostream>
#include <cstdlib>
using namespace std;

//计算汇率转换的自定义类
class Dollar
{
    int RMB_Yuan;           //拥有的人民币(元)
    float Exchange_Rate;    //1美元可以兑换的人民币
    public:
        Dollar()            //Dollar类的构造函数
        {
            RMB_Yuan = 1;
            Exchange_Rate = 7;
        }
        //Dollar类的构造函数
        Dollar(int Money, float Rate)
        {
            RMB_Yuan = Money;
            Exchange_Rate = Rate;
        }
    friend istream &operator>>(istream &in, Dollar &Tmp_Money);
    friend ostream &operator<<(ostream &out, Dollar &Tmp_Money);
    //重载类型转换运算符号的函数原型声明
    operator float();
    float Get_Rate()
    {   
        //返回汇率比
        return (Exchange_Rate);
    }
};

istream &operator>>(istream &in, Dollar &Tmp_Money)
{
    cout << "Enter rate(Dollar to Yuan): ";
    in >> Tmp_Money.Exchange_Rate;      //获取汇率比
    cout << "How many RMB do you want to exchange: ";
    in >> Tmp_Money.RMB_Yuan;           //取得要兑换的人民币金额

    return (in);
}

ostream &operator<<(ostream &out, Dollar &Tmp_Money)
{
    out << Tmp_Money.RMB_Yuan << " Yuan";
    return (out);
}

Dollar::operator float()
{
    float US_Dollar;
    US_Dollar = (float)RMB_Yuan / Exchange_Rate;
    return (US_Dollar);
}

int main()
{
    Dollar RMB;
    float USD;
    cin >> RMB;             //调用重载运算符>>设置对象内容
    USD = (float)RMB;       //调用重载类型转换运算符号

    cout << "Rate(Dollar to Yuan) = 1 : " << RMB.Get_Rate() << endl;
    cout << "How many RMB do you want to exchange: " << RMB << endl;
    cout << "You can get " << USD << "$" << endl;

    system("pause");
    return 0;
}