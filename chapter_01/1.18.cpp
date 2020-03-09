//while循环语句
#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int n, sum = 1, i = 1;
    cout << "Enter how many factorial:" << endl;
    cin >> n;

    while (i <= n)
    {
        sum = i * sum;
        cout << i << "! = " << sum << endl;
        i++;
    }
    
    system("pause");
    return 0;
}