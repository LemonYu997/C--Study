//循环语句for
#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int i, sum = 0;

    for (i = 1; i <= 10; i++)
        sum += i;

    cout << "1 + 2 + ... + 10 = " << sum << endl;

    system("pause");
    return 0;
}