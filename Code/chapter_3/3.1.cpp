//if语句
#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int score = 0;

    cout << "Enter Chinese score:" << endl;
    cin >> score;

    if (score >= 60)
        cout << "Pass" << endl;
    else
        cout << "Fail" << endl;

    system("pause");
    return 0;
}