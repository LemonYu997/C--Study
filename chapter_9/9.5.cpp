//嵌套结构
#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{   
    //省略内层结构的名称定义，直接使用grade结构来定义
    struct grade {
        struct {
            const char *name;
            int height;
            int weight;
        } std[3];
        const char *teacher;
    } g1 = {{{"John", 174, 65}, {"Justin", 168, 56}, {"Bush", 177, 80}}, "Mary"};
    //设置结构变量g1的初值

    int i;

    cout << "Teacher: " << g1.teacher << endl;
    cout << "------------------------------------" << endl;
    cout << "Student, Height, Weight: " << endl;

    //嵌套结构存取与一般结构一样，多一层结构就要多一个小数点
    for (i = 0; i < 3; i++)
    {
        cout << g1.std[i].name << " " << g1.std[i].height << " " << g1.std[i].weight << endl;
    }

    system("pause");
    return 0;
}
