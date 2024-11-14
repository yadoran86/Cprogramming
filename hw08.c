#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
struct book
{
    char title[20];
    int price;
};
typedef struct book book;
void ex01()
{
    book b;
    printf("책 제목 : ");
    gets(b.title);
    printf("책 가격 : ");
    scanf("%d", &b.price);

    printf("%s %d", b.title, b.price);
}
void ex02()
{
    book b[3];
    for (int i = 0; i < 3; i++)
    {
        printf("책 제목 : ");
        gets(b[i].title);
        printf("책 가격 : ");
        scanf("%d", &b[i].price);
        while (getchar() != '\n')
            ;
    }
    for (int i = 0; i < 3; i++)
    {
        printf("%s %d\n", b[i].title, b[i].price);
    }
}
void ex03()
{
    book b[3], *p;
    p = b;
    for (int i = 0; i < 3; i++)
    {
        printf("책 제목 : ");
        gets((p + i)->title);
        printf("책 가격 : ");
        scanf("%d", &(p + i)->price);
        while (getchar() != '\n')
            ;
    }
    for (int i = 0; i < 3; i++)
    {
        printf("%s %d\n", (p + i)->title, (p + i)->price);
    }
}
struct date
{
    int year;
    int month;
    int day;
};
typedef struct date date;
struct fruit
{
    char name[20];
    int price;
    date expire;
    char throw;
};
typedef struct fruit fruit;
void ex06()
{
    fruit any;
    int yyyymmdd;
    printf("과일이름 :");
    gets(any.name);
    printf("가격 : ");
    scanf("%d", &any.price);
    printf("만기일 : ");
    scanf("%d", &yyyymmdd);

    any.expire.year = yyyymmdd / 10000;
    any.expire.month = yyyymmdd % 10000 / 100;
    any.expire.day = yyyymmdd % 100;

    any.throw = 'n';
    printf("%s\n", any.name);
    printf("%d\n", any.price);
    printf("%d\n", any.expire.year);
    printf("%d\n", any.expire.month);
    printf("%d\n", any.expire.day);
    printf("%c\n", any.throw);
}
void ex07()
{
    fruit store[5] = {
        "apple", 500, 2020, 9, 1, 'n',
        "banana", 500, 2020, 7, 3, 'n',
        "orange", 500, 2020, 8, 1, 'n',
        "melon", 500, 2020, 11, 11, 'n',
        "mango", 500, 2020, 12, 25, 'n'},
          *p;
    p = store;
    for (int i = 0; i < sizeof(store) / sizeof(store[0]); i++)
    {
        printf("%s  %d  %d  %d  %d  %c\n",
               (p + i)->name, (p + i)->price, (p + i)->expire.year, (p + i)->expire.month, (p + i)->expire.day, (p + i)->throw);
    }
}
void ex08()
{
    time_t now = time(NULL);
    struct tm *today;
    today = localtime(&now);

    fruit store[5] = {
        "apple", 500, 2022, 9, 1, 'n',
        "banana", 500, 2022, 6, 3, 'n',
        "orange", 500, 2022, 5, 1, 'n',
        "melon", 500, 2022, 6, 11, 'n',
        "mango", 500, 2022, 12, 25, 'n'},
          *p;
    p = store;

    printf("오늘의 날짜는 %d년 %d월 %d일\n", today->tm_year + 1900, today->tm_mon + 1, today->tm_mday);
    char day[10] = {
        '\0',
    };
    sprintf(day, "%04d%02d%02d", today->tm_year + 1900, today->tm_mon + 1, today->tm_mday);

    for (int i = 0; i < sizeof(store) / sizeof(store[0]); i++)
    {
        char exp[10] = {
            '\0',
        };
        sprintf(exp, "%04d%02d%02d", (p + i)->expire.year, (p + i)->expire.month, (p + i)->expire.day);

        if (atoi(exp) <= atoi(day))
        {
            store[i].throw = 'y';
        }
    }
    for (int i = 0; i < sizeof(store) / sizeof(store[0]); i++)
    {
        printf("%s  %d  %d  %d  %d  %c\n",
               (p + i)->name, (p + i)->price, (p + i)->expire.year, (p + i)->expire.month, (p + i)->expire.day, (p + i)->throw);
    }
}
void ex09()
{
    time_t now = time(NULL);
    struct tm *today;
    today = localtime(&now);

    fruit store[5] = {
        "apple", 500, 2022, 9, 1, 'n',
        "banana", 500, 2022, 6, 3, 'n',
        "orange", 500, 2022, 5, 1, 'n',
        "melon", 500, 2022, 6, 11, 'n',
        "mango", 500, 2022, 12, 25, 'n'},
          *p;
    p = store;

    printf("오늘의 날짜는 %d년 %d월 %d일\n", today->tm_year + 1900, today->tm_mon + 1, today->tm_mday);

    char day[10] = {
        '\0',
    };
    sprintf(day, "%04d%02d%02d", today->tm_year + 1900, today->tm_mon + 1, today->tm_mday);

    for (int i = 0; i < sizeof(store) / sizeof(store[0]); i++)
    {
        char exp[10] = {
            '\0',
        };
        sprintf(exp, "%04d%02d%02d", (p + i)->expire.year, (p + i)->expire.month, (p + i)->expire.day);

        if (atoi(exp) <= atoi(day))
        {
            (p + i)->throw = 'y';
        }
    }

    for (int i = 0; i < sizeof(store) / sizeof(store[0]); i++)
    {
        if ((p + i)->throw == 'y')
        {
            printf("%s  %d  %d  %d  %d  %c\n",
                   (p + i)->name, (p + i)->price, (p + i)->expire.year, (p + i)->expire.month, (p + i)->expire.day, (p + i)->throw);
        }
    }
}
void ex10(){
    time_t now = time(NULL);
    struct tm *today;
    today = localtime(&now);

    fruit store[5] = {
        "apple", 500, 2022, 9, 1, 'n',
        "banana", 500, 2022, 6, 3, 'n',
        "orange", 500, 2022, 5, 1, 'n',
        "melon", 500, 2022, 6, 11, 'n',
        "mango", 500, 2022, 12, 25, 'n'},
          *p;
    p = store;

    printf("오늘의 날짜는 %d년 %d월 %d일\n", today->tm_year + 1900, today->tm_mon + 1, today->tm_mday);

    char day[10] = {
        '\0',
    };
    sprintf(day, "%04d%02d%02d", today->tm_year + 1900, today->tm_mon + 1, today->tm_mday);

    for (int i = 0; i < sizeof(store) / sizeof(store[0]); i++)
    {
        char exp[10] = {
            '\0',
        };
        sprintf(exp, "%04d%02d%02d", (p + i)->expire.year, (p + i)->expire.month, (p + i)->expire.day);

        if (atoi(exp) <= atoi(day))
        {
            (p + i)->throw = 'y';
        }
    }

    int cost = 0;
    for (int i = 0; i < sizeof(store) / sizeof(store[0]); i++)
    {
        if ((p + i)->throw == 'y')
        {
           cost += (p+i)->price;
        }
    }
    printf("폐기항목 총액 = %d",cost);

}
void print_all(fruit *f,int size){
    for (int i = 0; i < size; i++)
    {
        printf("%s  %d  %d  %d  %d  %c\n",
               (f + i)->name, (f + i)->price, (f + i)->expire.year, (f + i)->expire.month, (f + i)->expire.day, (f + i)->throw);
    }
}
fruit find(fruit *f, char *name){
    fruit tmp = {"NULL",0,0,0,0,'n'};
    for(int i=0;i<5;i++){
        if(!strcmp((f+i)->name,name))
            return (f[i]);
    }
    return tmp;
}
void ex11(){
    fruit store[5] = {
        "apple", 500, 2022, 9, 1, 'n',
        "banana", 500, 2022, 6, 3, 'n',
        "orange", 500, 2022, 5, 1, 'n',
        "melon", 500, 2022, 6, 11, 'n',
        "mango", 500, 2022, 12, 25, 'n'},
          *p,findres;
    p = store;
    char ch[20];
    printf("이름 입력 : ");
    gets(ch);
    //int size = sizeof(store)/sizeof(store[0]);
    //print_all(store,size);
    findres = find(store,ch);
    if(!strcmp(findres.name,"NULL"))
        printf("정보 없음");
    else
        printf("%s  %d  %d  %d  %d  %c",
        findres.name,findres.price,findres.expire.year,findres.expire.month,findres.expire.day,findres.throw);
}
void ex12(){
    
}
int main(void)
{
    // ex01();
    // ex02();
    // ex03();
    // ex06();
    // ex07();
    // ex08();
    // ex09();
    // ex10();
    //ex11();
    ex12();
    return 0;
}