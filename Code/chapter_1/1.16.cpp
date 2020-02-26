//switch条件语句
#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    char select;
    cout << "(A) Italy" << endl;
    cout << "(B) Paris" << endl;
    cout << "(C) Japan" << endl;
    cout << "Enter where do you want to go(A, B or C):" << endl;
    cin >> select;                  //输入字符并存入变量

    switch (select)
    {
        case 'a':
        case 'A':
            cout << "A 5-day tour to Italy    $2000" << endl;
            break;
        case 'b':
        case 'B':
            cout << "A 7-day tour to Paris    $3000" << endl;
            break;
        case 'c':
        case 'C':
            cout << "A 5-day tour to Italy    $1000" << endl;
            break;
        default:
            cout << "Enter Error" << endl;
    }

    system("pause");
    return 0;
}