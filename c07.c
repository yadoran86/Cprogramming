#include <stdio.h>
#include <conio.h>
#include <ctype.h>
int max(int *n,int size)
{
    int i,max_value = n[0];
    for(i=0;i<size;i++)
    {
        if(max_value < n[i]){
            max_value = n[i];
        }
    }
    return max_value;
}
void ex_05()
{
    int num[3],i,result;

    for(i=0;i<sizeof(num)/sizeof(int);i++)
    {
        printf("�����Է� : ");
        scanf("%d",num+i);
    }

    result = max(num,sizeof(num)/sizeof(int));

    printf("max()���� ���� ���� �ִ밪 = %d",result);
}
void mystrcat(char *a,char *b,char *p) //�����϶�� �� ������ void
{
    while(*a){
        *p = *a;
        p++;
        a++;
    }
    while(*b){
        *p = *b;
        p++;
        b++;
    }
    *p='\0';
    /* int i,j;
    for(i=0;a[i];i++){
        p[i] = a[i];
    }
    for(j=0;b[j];i++,j++){
        p[i] = b[j];
    }
    p[i]='\0'; */
}
void ex_07()
{
    char stra[50],strb[50],plus[100];

    printf("���ڿ� �Է� : ");
    gets(stra);
    printf("���ڿ� �Է� : ");
    gets(strb);

    mystrcat(stra,strb,plus);
    printf("plus = %s",plus);
}
double myabs(double n)
{
    if(n<0) {n = -(n);}
    return n;
}
void ex_09()
{
    double num;

    printf("�Ǽ��Է� : ");
    scanf("%lf",&num);

    printf("�Ǽ��� ���� = %.2lf",myabs(num));
}
int mystrlen(char *a){
    int count = 0;
    while(*a){
        a++;
        count++;
    }
    return count;
}
void ex_11()
{
    int length;
    char stra[50];

    printf("���ڿ� �Է� : ");
    gets(stra);

    length = mystrlen(stra);

    printf("length = %d",length);
}
int mystrchcnt(char *s,char c)
{
    int count = 0 ;
    while(*s){
        if(*s == c) count++;
        s++;
    }
    return count;
}
void ex_12()
{
    char str[50],ch;
    int result;
    printf("���ڿ� �Է� : ");
    gets(str);

    printf("���� �Է� : ");
    ch = getche();

    result = mystrchcnt(str,ch);

    printf("\n%s���� %c�� ������ %d��",str,ch,result);
}
int main(void)
{
    //ex_05(); //max()
    //ex_07(); //mystrcat()
    ex_09(); //myabs()
    //ex_11(); //mystrlen
    //ex_12(); //mystrchcnt
    return 0;
}