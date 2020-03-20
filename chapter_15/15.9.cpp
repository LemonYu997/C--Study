//堆栈类模板
#include <iostream>
#include <cstdlib>
using namespace std;

//设置类模板的类型参数Type的默认值为整数int，非类型参数的类型为整数int，默认值为5
template <class Type = int, int size = 5>       //类模板声明
class Stack
{
    private:
        //声明一个数组作为堆栈的存储空间
        Type st[size];
        int top;                    //堆栈数据顶端的索引
    public:
        Stack()
        {
            top = -1;
        }
        void push(Type data);       //将数据压入堆栈
        Type pop();                 //将数据从堆栈中弹出
};

template <class Type, int size>
void Stack<Type, size>::push(Type data)
{
    st[++top] = data;
}

template <class Type, int size>
Type Stack<Type, size>::pop()
{
    return st[top--];
}

int main()
{   
    //声明一个堆栈对象，并使用其默认值
    Stack<> stk_1;
    //声明堆栈对象，其类型为字符串，大小为4
    Stack<const char *, 4> stk_2;
    
    stk_1.push(11);
    stk_1.push(22);
    stk_1.push(33);

    cout << "stack_1 [1] = " << stk_1.pop() << endl;
    cout << "stack_1 [2] = " << stk_1.pop() << endl;
    cout << "stack_1 [3] = " << stk_1.pop() << endl;
    cout << endl;

    stk_2.push("first");
    stk_2.push("second");
    stk_2.push("third");
    
    cout << "stack_2 [1] = " << stk_2.pop() << endl;
    cout << "stack_2 [2] = " << stk_2.pop() << endl;
    cout << "stack_2 [3] = " << stk_2.pop() << endl;
    cout << endl;

    system("pause");
    return 0; 
}