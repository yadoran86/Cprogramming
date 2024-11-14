#include <stdio.h>
#include <conio.h>
#include <ctype.h>
void ex_A()
{
    int num, *p;

    printf("정수입력 : ");
    scanf("%d",&num);

    p = &num;

    printf("%d",*p);
}
void ex_B()
{
    char str[50], *p;

    printf("문자열 입력 : ");
    gets(str);

    p = str;

    printf("%s",p);
}
void ex_C()
{
    int num[5], *p;
    //p=num;
    for(int i=0;i<sizeof(num)/sizeof(int);i++){
        printf("정수 입력 : ");
        scanf("%d",num+i);
        //scanf("%d",p+i);
    }
    
    p=num;

    for(int i=0;i<sizeof(num)/sizeof(int);i++){
        printf("%d",*(p+i));
        //printf("%d",p[i]);
    }
}
void ex_01()
{
    double source[] = {1.21, 3.43, 5.65, 7.87, 8.98},*ps;
    double target[5] = {0.0,},*pt;
    ps=source;
    pt=target;

    for(int i=0;i<sizeof(source)/sizeof(double);i++){
        *(pt+i) = *(ps+i);
        /*
        *pt = *ps;
        pt++;
        ps++;
        */
    }
    /*
    ps=source;
    pt=target; 위 주석의 소스로 하면 주소를 다시 치환해줘야함
    */
    printf("source = ");
    for(int i=0;i<sizeof(source)/sizeof(double);i++){
        printf(" %.2f,",*(ps+i));
    }
    printf("\ntarget = ");
    for(int i=0;i<sizeof(source)/sizeof(double);i++){
        printf(" %.2f,",*(pt+i));
    }
}
void ex_03()
{
    char str[50],*p;
    int i;

    printf("문자열입력 : ");
    gets(str);

    p = str;

    /* i=0;
    while(*p){
        p++;
        i++;
    } */
    for(i=0;*p;i++,p++);

    printf("\t입력된 문자열 길이 = %d",i);

}
void ex_05()
{
    char str[50],ch,*ps,*pc;
    int count;

    while(1){
        printf("문자열입력 : ");
        gets(str);
        ps=str;
        if(!(*ps)){
            printf("<Enter>키");
            break;
        }
        printf("문자입력 : ");
        pc = &ch;
        *pc = getche();

        count = 0;
        while(*ps){
            if(*ps==*pc){
                count++;
            }
            ps++;
        }
        printf("\n\t%s에서 %c는 %d개\n",str,*pc,count);
    }
}
void ex_07()
{
    char stra[50],strb[50],*psa,*psb;
    int i;

    printf("문자열입력 : ");
    gets(stra);

    psa = stra;
    psb = strb;

    for(i=0 ; *(psa+i); i++){ 
        *(psb+i) = toupper(*(psa+i));
    }
    *(psb+i) = '\0';

    printf("stra = %s, strb = %s",psa,psb); 
}
void ex_09()
{
    printf("학번 : 20195181 이름 : 서태현\n");
    char stra[50], strb[50],*pa,*pb;
    int i = 0;

    printf("문자열입력 ");
    gets(stra);
    pa = stra; 

    printf("문자열입력 ");
    gets(strb);
    pb = strb; 

    while (*(pa+i) != '\0' && *(pb+i) != '\0' && *(pa+i) == *(pb+i))
    {
        i++;
    }
    printf("%s,%s,", pa, pb);
    printf("%s", *(pa+i) ==  *(pb+i) ? "같음" : "다름");

}
int main(void)
{
    //ex_A();
    //ex_B();
    //ex_C();
    //ex_01();
    //ex_03();
    ex_05();
    //ex_07();
    //ex_09();
    return 0;
}