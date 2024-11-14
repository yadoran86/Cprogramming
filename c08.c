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
void ex_01()
{
    book b;
    printf("å ���� : ");
    gets(b.title);
    printf("å ���� : ");
    scanf("%d",&b.price);

    printf("book.title = %s, book.price = %d",b.title,b.price);
}
void ex_02(){
    book b[3];

    for(int i=0;i<sizeof(b)/sizeof(b[1]);i++){
        printf("%d) å ���� : ",i);
        gets(b[i].title);
        printf("%d) å ���� : ",i);
        scanf("%d",&b[i].price);
        //getchar(); ���Ͱ� �Ѱ��϶�
        while (getchar() != '\n'); //���Ͱ� �������϶�
    }

    for(int i=0;i<sizeof(b)/sizeof(b[1]);i++){
        printf("book[%d].title = %s, book[%d].price = %d\n",i,b[i].title,i,b[i].price);
    }
}
void ex_03(){
    book b[3],*p;
    p = b;

    for(int i=0;i<sizeof(b)/sizeof(b[1]);i++){
        printf("%d) å ���� : ",i);
        gets((p+i)->title);
        printf("%d) å ���� : ",i);
        scanf("%d",&(p+i)->price);
        while (getchar() != '\n');
    }

    for(int i=0;i<3;i++){
        printf("(p+%d)->title = %s, (p+%d)->price = %d\n",i,(p+i)->title,i,(p+i)->price);
    }
}
struct date{
    int year;
    int month;
    int day;
};
typedef struct date date;
struct fruit{
    char name[20];
    int price;
    date expire;
    char throw;
};
typedef struct fruit fruit;
void ex_06(){
    printf("�й� : 20195181 �̸� : ������\n");

    fruit any;
    int yyyymmdd;
    any.throw = 'n';

    printf("�����̸� : ");
    gets(any.name);
    printf("���� : ");
    scanf("%d",&any.price);
    printf("������ : ");
    scanf("%d",&yyyymmdd);

    any.expire.year = yyyymmdd / 10000;
    any.expire.month = yyyymmdd % 10000 / 100;
    any.expire.day = yyyymmdd % 100;

    printf("\nany.name = %s",any.name);
    printf("\nany.price = %d",any.price);
    printf("\nany.expire.year = %d",any.expire.year);
    printf("\nany.expire.month = %d",any.expire.month);
    printf("\nany.expire.day = %d",any.expire.day);
    printf("\nany.throw = %c",any.throw);
}
void ex_08(fruit *p,int size){
    time_t now = time(NULL);
    struct tm *today = localtime(&now);
    printf("�й� : 20195181 �̸� : ������\n");
    printf("���� ��¥�� %d�� %d�� %d�� �Դϴ�.\n",today->tm_year+1900, today->tm_mon+1, today->tm_mday);

    char day[10] = {'\0',};
    sprintf(day, "%04d%02d%02d",today->tm_year+1900, today->tm_mon+1, today->tm_mday);

    for(int i=0;i<size;i++){
        char exp[10] = { '\0', };
        sprintf(exp, "%04d%02d%02d",(p+i)->expire.year,(p+i)->expire.month,(p+i)->expire.day);

        if(atoi(exp) <= atoi(day) ) (p+i)->throw = 'y';
    }
}
void ex_07(){
    fruit store[5] = {
        "apple", 500, 2020, 9 ,1 ,'n',
        "banana", 500, 2023, 7, 3, 'n',
        "orange", 500, 2022, 3, 31, 'n',
        "melon", 500, 2021, 11, 11, 'n',
        "mango", 500, 2021, 5, 30, 'n'};

    fruit *p;
    int size = sizeof(store)/sizeof(store[0]);
    p = store;

    ex_08(p,size);

    for(int i=0; i < size; i++){
        printf("%d) name=%s, price=%d, year=%d, month=%d, day=%d, throw=%c\n",i,(p+i)->name,(p+i)->price,
        (p+i)->expire.year,(p+i)->expire.month,(p+i)->expire.day,(p+i)->throw);
    }

}

struct hexa2binary{
    char hexa[2];//���ڷ� �ٲ�
    char bin[5];
};
typedef struct hexa2binary hexa2binary;
void makebinary(char *in,char *rst,hexa2binary *h2b,int size)
{
    int i=0,j=0;
    char temp[2];
    while(*(in+i)){
        if (*(in+i) < '0' || *(in+i) > '9' || *(in+i) < 'A' || *(in+i) > 'F'){
            *(rst+0)='x';
            return;
        }
        i++;
    }
    i=0;
    while(*(in+j)){
        for(j=0;j<2;j++){
            *(temp+j) = *(in+i);
            i++;
        }
        temp[j]='\0';

        for(j=0;j<size;j++){
            if(strcmp((h2b+j)->bin, temp)==0 )
                strcat(rst,(h2b+j)->hexa);
        }
    }
}
void ex_12(int argc, char *argv[]){
    char input[50];
    char result[10];
    hexa2binary h2b[16] = {
        "0","0000","1","0001","2","0010","3","0011",
        "4","0100","5","0101","6","0110","7","0111",
        "8","1000","9","1001","A","1010","B","1011",
        "C","1100","D","1101","E","1110","F","1111"};
    
    do{
        result[0] = '\0';
        printf("16���� �Է� : ");
        gets(input);

        makebinary(input, result, h2b, sizeof(h2b)/sizeof(h2b[0]));

        if(result[0]=='x') break;

        printf(" -> 2���� ��ȯ �� = %s\n\n",result);
    }while(1);

    printf("\t16������ �ƴմϴ�. �����մϴ�.");
}
int main(int argc, char *argv[]){
    //ex_06();
    ex_07();
    //ex_12(argc, argv);
    return 0;
}