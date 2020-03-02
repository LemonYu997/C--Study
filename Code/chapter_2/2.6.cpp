//强制类型转换
#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int score1 = 78, score2 = 69, score3 = 92;
    int sum = 0;

    sum = score1 + score2 + score3;
    cout << "sum = " << sum << endl;
    cout << "The original average score:" << sum / 3 << endl;       //不强制转换
    cout << "Now average score:" << (float)sum / 3 << endl;         //强制转换

    system("pause");
    return 0;
}