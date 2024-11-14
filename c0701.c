#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <stdlib.h>
void ex01(int argc, char *argv[]) 
{
    printf("argc = %d\n", argc);
    for (int i = 0; i < argc; i++){
        printf("argv[%d]=%s\n", i, argv[i]);
    }
}
void ex02(char *a) 
{
    printf("�Է��� ���ڿ����� ���ڴ� -> ");
    while(*a){
        if(*a >= '0' && *a <= '9'){
            printf("%c",*a);
        }
        a++;
    }
    return;
}
void ex03(int argc, char *argv[]) 
{
    printf("�й� : 20195181 �̸� : ������ \n");
    int a, b;
    char op;

    a = atof(argv[1]);
    op = *argv[2];
    b = atof(argv[3]);

    if (op == '+'){
        printf("-> %d %c %d = %d\n",a,op,b,a+b);
    }
    else if (op == '-'){
        printf("-> %d %c %d = %d\n",a,op,b,a-b);
    }
    else{
        printf("-> ������ ������ �����մϴ�.");
    }
}
void mystrupper(char *a,char *t)
{
    while(*a){
        *t = toupper(*a);
        a++;
        t++;
    }
    *t = '\0';
    return;
}
void ex13(char *argv[]) 
{
    char target[50];
    mystrupper(argv[1],target);
    printf("argv = %s, target = %s",argv[1],target);
}
#define SIZE 5
void mysort(int *a,int *s)
{
    int temp;
    for(int i=0;i<SIZE;i++){
        s[i] = a[i];
    }
    for(int i=SIZE-1;i>=0;i--){
        for(int j=1;j<=i;j++){
            if(s[j-1]>s[j]){
                temp = s[j-1];
                s[j-1] = s[j];
                s[j] = temp;
            }
        }
    }
}
void ex15(char *a[]) // a�迭�� ���ڿ�,ary�� ����
{
    int ary[SIZE],sortary[SIZE];
    for(int i=0;i<SIZE;i++){
        ary[i] = atoi(a[i+1]); //atoi - ������ ��ȯ
    }
    mysort(ary,sortary);
    printf("ary = ");
    for(int i=0;i<SIZE;i++){
        printf("%d ",ary[i]);
    }
    printf("\nsortary = ");
    for(int i=0;i<SIZE;i++){
        printf("%d ",sortary[i]);
    }

}
int main(int argc, char *argv[]) // argc = ���� �� argv = 2�����迭
{
    //ex01(argc, argv); 
    // ex02(argv[1]);
    // ex03(argc, argv);
    ex13(argv); //mystrupper
    // ex15(argv); //mysort
    return 0;
}