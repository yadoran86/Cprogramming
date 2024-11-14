#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
struct book{
    char title[50];
    int price;
};
typedef struct book book;
void ex01(){
    book b;
    printf("책 제목 : ");
    gets(b.title);
    printf("책 가격 : ");
    scanf("%d",&b.price);

    printf("book.title = %s, book.price : %d",b.title,b.price);
}
void ex02(){
    book b[3];
    for(int i=0;i<sizeof(b)/sizeof(b[1]);i++){
        printf("책 제목 : ");
        gets(b[i].title);
        printf("책 가격 : ");
        scanf("%d",&b[i].price);
        while(getchar() != '\n');
    }
    for(int i=0;i<sizeof(b)/sizeof(b[1]);i++){
        printf("book[%d].title = %s, book[%d].price : %d\n",i,b[i].title,i,b[i].price);
    }
}
void ex03(){
    book b[3],*p;
    p=b;
    for(int i=0;i<sizeof(b)/sizeof(b[1]);i++){
        printf("책 제목 : ");
        gets((p+i)->title);
        printf("책 가격 : ");
        scanf("%d",&(p+i)->price);
        while(getchar() != '\n');
    }
    for(int i=0;i<sizeof(b)/sizeof(b[1]);i++){
        printf("(p+%d)->title = %s, (p+%d)->price : %d\n",i,(p+i)->title,i,(p+i)->price);
    }
}
struct date{//ex04
    int year;
    int month;
    int day;
};
typedef struct date date;
struct fruit{//ex05
    char name[20];
    int price;
    date expire;
    char throw;
};
typedef struct fruit fruit;
void ex06(){
    fruit any;
    int yyyymmdd;

    printf("과일이름 : ");
    gets(any.name);
    printf("가격 : ");
    scanf("%d",&any.price);
    printf("만기일 : ");
    scanf("%d",&yyyymmdd);

    any.expire.year = yyyymmdd/10000;
    any.expire.month = yyyymmdd%10000/100;
    any.expire.day = yyyymmdd%100;
    any.throw = 'n';

    printf("any.name = %s",any.name);
    printf("\nany.price = %d",any.price);
    printf("\nany.expire.year = %d",any.expire.year);
    printf("\nany.expire.month = %d",any.expire.month);
    printf("\nany.expire.day = %d",any.expire.day);
    printf("\nany.throw = %c",any.throw);

}
void ex07(){
    fruit *p,store[5] = {
        "apple",500,2020,9,1,'n',
        "banana",500,2023,7,3,'n',
        "orange",500,2022,3,31,'n',
        "melon",500,2021,11,11,'n',
        "mango",500,2021,5,30,'n'};
    p = store;

    for(int i=0;i<sizeof(store)/sizeof(store[0]);i++){
        printf("%d) name = %s, price = %d, year = %d, month = %d, day = %d, throw = %c\n",i,(p+i)->name,(p+i)->price,(p+i)->expire.year,
        (p+i)->expire.month,(p+i)->expire.day,(p+i)->throw);
    }
}
void set_throw(fruit *p,int size){
    time_t now = time(NULL);
    struct tm *today = localtime(&now);

    printf("\n오늘의 날짜: %d년 %d월 %d일\n\n",today->tm_year+1900,today->tm_mon+1,today->tm_mday);

    char day[10] = { '\0',};
    sprintf(day, "%04d%02d%02d",today->tm_year+1900,today->tm_mon+1,today->tm_mday);

    for(int i=0;i <size; i++) {
        char exp[10] = {'\0',};
        sprintf(exp,"%04d%02d%02d",(p+i)->expire.year,(p+i)->expire.month,(p+i)->expire.day);

        if( atoi(exp) <= atoi(day) ) (p+i)->throw = 'y';
    }
}
void ex08(){
    fruit *p,store[5] = {
        "apple",500,2020,9,1,'n',
        "banana",500,2023,7,3,'n',
        "orange",500,2022,3,31,'n',
        "melon",500,2021,11,11,'n',
        "mango",500,2021,5,30,'n'};
    p = store;

    set_throw(p,sizeof(store)/sizeof(store[0]));

    for(int i=0;i<sizeof(store)/sizeof(store[0]);i++){
        printf("%d) name = %s, price = %d, year = %d, month = %d, day = %d, throw = %c\n",i,(p+i)->name,(p+i)->price,(p+i)->expire.year,
        (p+i)->expire.month,(p+i)->expire.day,(p+i)->throw);
    }
}
void ex09(){//print_throw
    fruit *p,store[5] = {
        "apple",500,2020,9,1,'n',
        "banana",500,2023,7,3,'n',
        "orange",500,2022,3,31,'n',
        "melon",500,2021,11,11,'n',
        "mango",500,2021,5,30,'n'};
    p = store;

    set_throw(p,sizeof(store)/sizeof(store[0]));

    for(int i=0;i<sizeof(store)/sizeof(store[0]);i++){
        if((p+i)->throw == 'y'){
            printf("name = %s, price = %d, year = %d, month = %d, day = %d, throw = %c\n",(p+i)->name,(p+i)->price,(p+i)->expire.year,
        (p+i)->expire.month,(p+i)->expire.day,(p+i)->throw);
        }
    }
}
void ex10(){//total_throw_cost
    int allprice = 0;
    fruit *p,store[5] = {
        "apple",500,2020,9,1,'n',
        "banana",500,2023,7,3,'n',
        "orange",500,2022,3,31,'n',
        "melon",500,2021,11,11,'n',
        "mango",500,2021,5,30,'n'};
    p = store;

    set_throw(p,sizeof(store)/sizeof(store[0]));

    for(int i=0;i<sizeof(store)/sizeof(store[0]);i++){
        if((p+i)->throw == 'y'){
            allprice += (p+i)->price;
        }
    }
    printf("폐기 되는 항목들의 총액은 %d원입니다.",allprice);
}
fruit find(fruit *f, char *name){
    fruit tmp = {"NULL",0,0,0,0,'n'};
    for(int i=0;i<5;i++){
        if(!strcmp((f+i)->name,name))
            return (f[i]);
    }
    return tmp;
}

int total_throw_cost(fruit *p,int size){
    int totalcost=0;
    for(int i=0;i<size;i++){
        if((p+i)->throw == 'y'){
            totalcost += (p+i)->price;
        }
    }
    return totalcost;
}
void print_throw(fruit *p,int size){
    for(int i=0;i<size;i++){
        if((p+i)->throw == 'y'){
            printf("name = %s, price = %d, year = %d, month = %d, day = %d, throw = %c\n",(p+i)->name,(p+i)->price,(p+i)->expire.year,
        (p+i)->expire.month,(p+i)->expire.day,(p+i)->throw);
        }
    }
}
void print_all(fruit *p,int size){
    for(int i=0;i<size;i++){
        printf("%d) name = %s, price = %d, year = %d, month = %d, day = %d, throw = %c\n",i,(p+i)->name,(p+i)->price,(p+i)->expire.year,
        (p+i)->expire.month,(p+i)->expire.day,(p+i)->throw);
    }
}
void ex11(){
    fruit *p,store[5] = {
        "apple",500,2020,9,1,'n',
        "banana",500,2023,7,3,'n',
        "orange",500,2022,3,31,'n',
        "melon",500,2021,11,11,'n',
        "mango",500,2021,5,30,'n'};
    p = store;
    int size = sizeof(store)/sizeof(store[0]);
    char ch[20];
    fruit findres;
    printf("찾을 과일이름 입력 : ");
    gets(ch);
    set_throw(p,size);
    find(store,ch);
    findres = find(store,ch);
    if(!strcmp(findres.name,"NULL"))
        printf("정보 없음");
    else
        printf("%s  %d  %d  %d  %d  %c",
        findres.name,findres.price,findres.expire.year,findres.expire.month,findres.expire.day,findres.throw);
    //print_all(p,size);
    //print_all(p,size);
    //printf("폐기되는 항목의 총액은 %d원입니다.", total_throw_cost(p,size)); //total_throw_cost test
    //print_throw(p,size);
}
int main(){
    //ex01();
    //ex02();
    //ex03();
    //ex06();
    //ex07();
    //ex08();
    //ex09();
    //ex10();
    ex11();
    return 0;
}