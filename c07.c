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
        printf("정수입력 : ");
        scanf("%d",num+i);
    }

    result = max(num,sizeof(num)/sizeof(int));

    printf("max()에서 전달 받은 최대값 = %d",result);
}
void mystrcat(char *a,char *b,char *p) //리턴하라는 말 없으니 void
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

    printf("문자열 입력 : ");
    gets(stra);
    printf("문자열 입력 : ");
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

    printf("실수입력 : ");
    scanf("%lf",&num);

    printf("실수의 절댓값 = %.2lf",myabs(num));
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

    printf("문자열 입력 : ");
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
    printf("문자열 입력 : ");
    gets(str);

    printf("문자 입력 : ");
    ch = getche();

    result = mystrchcnt(str,ch);

    printf("\n%s에서 %c의 개수는 %d개",str,ch,result);
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