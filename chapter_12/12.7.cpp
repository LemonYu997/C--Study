//++运算符重载      前置和后置
#include <iostream>
#include <cstdlib>
using namespace std;

//计算矩阵相加的自定义类
class Matrix
{
    int Matrix_Num[2][2];       //设置2*2的矩阵
    public:
        //构造函数，初始化为0
        Matrix()
        {
            int i, j;
            for (i = 0; i < 2; i++)
                for (j = 0; j < 2; j++)
                    Matrix_Num[i][j] = 0;
        }
        Matrix(int Tmp_a1, int Tmp_a2, int Tmp_b1, int Tmp_b2)
        {
            Matrix_Num[0][0] = Tmp_a1;      //Matrix矩阵的构造函数
            Matrix_Num[0][1] = Tmp_a2;      //初始化格式
            Matrix_Num[1][0] = Tmp_b1;      // |a1 a2|
            Matrix_Num[1][1] = Tmp_b2;      // |b1 b2|
        }

    //>>运算符的重载函数原型声明，in是由instream类生成的输入对象
    friend istream &operator>>(istream &in, Matrix &Tmp_Mat);
    //<<运算符的重载函数原型声明，out是由ostream类生成的输出对象
    friend ostream &operator<<(ostream &out, Matrix &Tmp_Mat);
    //++前置运算符的重载函数原型声明
    Matrix operator++();
    //++后置运算符的重载函数原型声明
    Matrix operator++(int);
};

istream &operator>>(istream &in, Matrix &Tmp_Mat)
{
    int i, j;
    for (i = 0; i < 2; i++)
        for (j = 0; j < 2; j++)
            in >> Tmp_Mat.Matrix_Num[i][j];

    //返回输入对象
    return (in);
}

ostream &operator<<(ostream &out, Matrix &Tmp_Mat)
{
    int i, j;
    for (i = 0; i < 2; i++)
        for (j = 0; j < 2; j++)
            out << Tmp_Mat.Matrix_Num[i][j] << '\t';
    cout << endl;
    //返回输出对象
    return (out);
}

//前置运算
Matrix Matrix::operator++()
{
    int i, j;
    for (i = 0; i < 2; i++)
        for (j = 0; j < 2; j++)
            ++Matrix_Num[i][j];
    return (*this);
}

//后置运算
Matrix Matrix::operator++(int)
{
    Matrix Tmp;
    int i, j;
    for (i = 0; i < 2; i++)
        for (j = 0; j < 2; j++)
            Tmp.Matrix_Num[i][j] = Matrix_Num[i][j]++;
    return (Tmp);
}

int main()
{
    Matrix M1, M2, Prefix, Postfix;

    cout << "Enter M1 value: ";
    cin >> M1;          //调用重载运算符>>设置对象内容

    cout << "Enter M2 value: ";
    cin >> M2;

    //调用重载运算符++，执行前置运算
    Prefix = ++M1;
    //调用重载运算符++，执行后置运算
    Postfix = M2++;

    cout << endl;
    cout << "After Prefix = ++M1, then the value of Prefix: " << endl;
    cout << Prefix << endl;     //调用重载运算符<<输出对象内容
    cout << "After Postfix = M2++, then the value of Postfix: " << endl;
    cout << Postfix << endl;

    system("pause");
    return 0;
}