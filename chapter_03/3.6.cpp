//do-while循环语句
#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int sum = 0, n, i = 0;
    cout << "Enter n:" << endl;
    cin >> n;

    do {
        sum += i;
        cout << "i = " << i << " sum = " << sum << endl;

        i++;
    } while (n <= 10 && i <= n);

    system("pause");
    return 0;
}