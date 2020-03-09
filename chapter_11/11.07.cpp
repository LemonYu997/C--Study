/*嵌套类
嵌套类是定义在某个类内部的类。如果一个类的内部包含另外一个类的定义就称为嵌套类。
外部的类称为"外围类"，其余称为"嵌套类"，嵌套类可以定义任何存取类型
无论是哪种存取类型，其成员函数定义可定义在嵌套类的内部，也可以是外部，
但不能定义在外围类和嵌套类之间，其静态数据成员初值设置也是在外围类外部进行*/
#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;

//定义外围类BookShelf
class BookShelf
{
    private:
        static int MAX_BOOKS;
        int count;
        char *name;
        //定义嵌套类Book
        class Book
        {
            private:
                char *title;
                int price;
            public:
                Book(const char *t, int p)
                {
                    title = new char[strlen(t) + 1];
                    strcpy(title, t);
                    price = p;
                }
                char * getTitle()
                {
                    return title;
                }
                int getPrice()
                {
                    return price;
                }
        };
        Book *book[10];
    public:
        BookShelf(const char *n)
        {
            name = new char[strlen(n) + 1];
            strcpy(name, n);
            count = 0;
        }
        void InsertBook(const char * t, int p)
        {
            if (count == MAX_BOOKS)
                cout << "is full" << endl;
            book[count++] = new Book(t, p);
        }
        void ListAllBooks()
        {
            cout << "[" << name << "]" << endl;
            cout << "-----------------------" << endl;
            for (int i = 0; i < count; i++)
                cout << book[i]->getTitle() << " " << book[i]->getPrice() << endl;
        }
};

int BookShelf::MAX_BOOKS = 10;

int main()
{
    BookShelf bks("My bookshelf");
    bks.InsertBook("AAAAAAAAAAA", 40);      //插入书1
    bks.InsertBook("BBBBBBBBBBB", 30);      //插入书2
    bks.InsertBook("DDDDDDDDDDD", 50);      //插入书3

    bks.ListAllBooks();                     //列出所有书

    system("pause");
    return 0;
}

















