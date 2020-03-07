//类型定义 typedef
#include <iostream>
#include <cstdlib>

using namespace std;

typedef int INTEGER;                //INTEGER被定义成int类型
typedef char STRING[20];            //STRING被定义成长度为20的字符数组

//以typedef指令将hotel结构重新定义成hotel_Info
typedef struct hotel {
    INTEGER roomNumber;
    STRING hotelName;
} hotel_Info;

int main()
{   
    //重新定义结构，不必加上struct保留字
    hotel_Info myhotel;

    cout << "Hotel name: ";
    cin >> myhotel.hotelName;
    cout << "Room number: ";
    cin >> myhotel.roomNumber;
    cout << "---------------------------" << endl;

    cout << "Hotel name: " << myhotel.hotelName << endl;
    cout << "Room number: " << myhotel.roomNumber << endl;

    system("pause");
    return 0;
}
