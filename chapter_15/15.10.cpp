//非类型参数类模板
#include <iostream>
#include <cstdlib>
using namespace std;

//声明模板形式参数T、数据类型固定参数N
template <class T, int N>
//声明类模板
class CalAdd
{
    private:
        //声明模板形式参数T的变量Total
        T Total;
        //声明模板形式参数T的数组Num[]
        T Num[N];
    public:
        //构造函数
        CalAdd()
        {
            Total = 0;
        }
        void InNum();
        void AddNum();
        void ShowResult();
};

//成员函数InNum()
template <class T, int N>
void CalAdd<T, N>::InNum()
{
    //将输入数据存入数组Num[]中
    for (int count = 0; count < N; count++)
    {
        cout << "Enter number: ";
        cin >> Num[count];
    }
}

//成员函数AddNum()
template <class T, int N>
void CalAdd<T, N>::AddNum()
{
    //计算数组Num[]元素值总和
    for (int count = 0; count < N; count++)
        Total += Num[count];
}

//成员函数ShowResult()
template <class T, int N>
void CalAdd<T, N>::ShowResult()
{
    //显示计算结果
    AddNum();
    for (int count = 0; count < N; count++)
    {
        cout << Num[count];
        if (count < (N-1))
            cout << " + ";
    }
    cout << " = " << Total << endl;
}

int main()
{   
    //使用类模板声明CalAdd声明int数据类型对象iCal
    CalAdd<int, 4> iCal;
    //使用类模板声明CalAdd声明double数据类型对象dCal
    CalAdd<double, 5> dCal;

    cout << "sum of 4 int number" << endl;
    iCal.InNum();
    iCal.ShowResult();      //显示计算结果

    cout << "sum of 5 double number" << endl;
    dCal.InNum();
    dCal.ShowResult();      //显示计算结果

    system("pause");
    return 0; 
}