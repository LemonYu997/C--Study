/*标准预处理宏
C++编译程序内置的宏

宏名称      说明                                                   输出类型
__LINE__    定义一个整数，存储程序文件正在被编辑的行数              整数
__FILE__    定义一个字符串，存储正在被编译的文件路径与名称          字符串
__DATE__    定义一个字符串，存储文件被编译的系统日期                字符串
__TIME__    定义一个字符串，存储文件被编译的系统时间                字符串
__STDC__    如果此数值为1，代表编译程序符合ANSL标准                 整数               
*/
#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{   
    //注意：前后都是两个下划线
    cout << "__LINE__ : " << __LINE__ << endl;
    cout << "__FILE__ : " << __FILE__ << endl;
    cout << "__DATE__ : " << __DATE__ << endl;
    
    system("pause");
    return 0;
}