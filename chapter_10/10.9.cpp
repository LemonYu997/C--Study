//习题2
//创建五个学生成绩的单向链表，并遍历每一个节点来打印成绩
#include <iostream>
#include <cstdlib>
using namespace std;

//声明链表结构
class list
{
    public:
        int num;            //学号
        char name[10];       //姓名
        int score;          //成绩
        class list *next;   //指针，指向下一个节点
};

typedef class list node;
typedef node *link;

int main()
{   
    //声明三个链表结构指针
    link newnode, ptr, delptr;
    cout << "Enter 5 students data: " << endl;
    delptr = new node;          //delptr暂时当表首

    if (!delptr)
    {
        cout << "error" << endl;
        exit(1);
    }

    cout << "Enter student ID: ";
    cin >> delptr->num;
    cout << "Enter name: ";
    cin >> delptr->name;
    cout << "Enter score: ";
    cin >> delptr->score;

    ptr = delptr;               //保留链表首，以ptr为当前节点指针
    for (int i = 1; i < 5; i++)
    {
        newnode = new node;     //创建新节点
        if (!delptr)
        {
            cout << "error" << endl;
            exit(1);
        }
        cout << "Enter student ID: ";
        cin >> delptr->num;
        cout << "Enter name: ";
        cin >> delptr->name;
        cout << "Enter score: ";
        cin >> delptr->score;

        newnode->next = NULL;
        ptr->next = newnode;    //把新节点加在链表后面
        ptr = ptr->next;        //让ptr保持在链表的最后面
    }

    cout << "\n Student Score" << endl;
    cout << "ID\tName\tScore\n-------------------------" << endl;
    ptr = delptr;               //让ptr回到链表首
    while(ptr != NULL)
    {
        cout << ptr->num << "\t" << ptr->name << "\t" << ptr->score << endl;
        delptr = ptr;
        ptr = ptr->next;        //ptr按序往后遍历链表
        delete delptr;          //释放内存空间
    }
    system("pause");
    return 0;
}

