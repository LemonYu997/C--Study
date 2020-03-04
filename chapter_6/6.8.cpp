//指针返回值
#include <iostream>
#include <cstdlib>

using namespace std;

//字符串串接函数原型的声明
char *Strcat(char *, char *);

int main()
{
    char str1[80];
    char str2[80];

    printf("Enter a words: ");
    scanf("%s", str1);
    printf("Enter another words: ");
    scanf("%s", str2);
    printf("After: %s\n", Strcat(str1, str2));

    system("pause");
    return 0;
}

//参数：str1和str2串接
//返回值：返回串接结果str1
//返回值为字符串指针
char * Strcat(char * str1, char * str2)
{
    int i = 0;
    int j = 0;

    //寻找str1的结束符'\0'的位置
    while (*(str1 + i) != '\0')
        i++;
    while (*(str2 + j) != '\0')
    {   
        //str1字符串开始逐字符串接
        *(str1 + i + j) = *(str2 + j);
        j++;
    }

    //记得加上空字符
    *(str1 + i + j) = '\0';

    return str1;
}