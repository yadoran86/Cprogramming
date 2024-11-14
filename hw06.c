#include <stdio.h>
#include <conio.h>
#include <ctype.h>
void ex01()
{
    double source[5] = {1.21, 3.43, 5.65, 7.87, 8.98}, *ps;
    double target[5] = {
        0.0,
    },
           *pt;
    ps = source;
    pt = target;

    for (int i = 0; i < sizeof(source) / sizeof(source[0]); i++)
    {
        *pt = *ps;
        ps++;
        pt++;
    }
    ps = source;
    pt = target;
    printf("source = ");
    for (int i = 0; i < sizeof(source) / sizeof(source[0]); i++)
    {
        printf("%.2lf,", *(ps + i));
    }
    printf("\ntarget = ");
    for (int i = 0; i < sizeof(source) / sizeof(source[0]); i++)
    {
        printf("%.2lf,", *(pt + i));
    }
}
void ex02()
{
    double source[5] = {1.21, 3.43, 5.65, 7.87, 8.98}, *ps;
    double doo, *pd;

    ps = source;
    pd = &doo;

    printf("source = ");
    for (int i = 0; i < sizeof(source) / sizeof(source[0]); i++)
    {
        printf("%.2lf,", *(ps + i));
    }

    printf("\n�� ���ҿ� ���� �� �Է� : ");
    scanf("%lf", pd);

    printf("target = ");
    for (int i = 0; i < sizeof(source) / sizeof(source[0]); i++)
    {
        printf("%.2lf,", *(ps + i) + *pd);
    }
}
void ex03()
{
    char str[20], *ps;
    int i = 0;

    ps = str;
    printf("���ڿ� �Է� : ");
    gets(ps);

    while (*ps)
    {
        ps++;
        i++;
    }
    printf("\t�Էµ� ���ڿ� ���� = %d", i);
}
void ex04()
{
    char str[20], *ps;

    while (1)
    {
        int i = 0;

        ps = str;
        printf("���ڿ� �Է� : ");
        gets(ps);

        if (*ps == '\0')
        {
            printf("<EnterŰ>");
            break;
        }
        while (*ps)
        {
            ps++;
            i++;
        }
        printf("\t�Էµ� ���ڿ� ���� = %d\n", i);
    }
}
void ex05()
{
    char str[20], *ps;
    char ch, *pc;

    while (1)
    {
        int i = 0;

        ps = str;
        printf("���ڿ� �Է� : ");
        gets(ps);

        if (*ps == '\0')
        {
            printf("<EnterŰ>");
            break;
        }
        pc = &ch;
        printf("���� �Է� : ");
        *pc = getche();

        while (*ps)
        {
            if (*ps == *pc)
            {
                i++;
            }
            ps++;
        }
        printf("\n\t%s���� %c�� %d��\n", str, ch, i);
    }
}
void ex06()
{
    char stra[20], *pa, strb[20], *pb;

    pa = stra;
    printf("���ڿ� �Է� : ");
    gets(pa);

    pb = strb;
    printf("���ڿ� �Է� : ");
    gets(pb);

    printf("sa = %s, sb = %s", stra, strb);

    while (*pa)
    {
        pa++;
    }
    while (*pb)
    {
        *pa = *pb;
        pa++;
        pb++;
    }
    *pa = '\0';
    printf("\nsa = %s, sb = %s", stra, strb);
}
void ex07()
{
    char stra[20], *pa, strb[20], *pb;

    pa = stra;
    pb = strb;
    printf("���ڿ� �Է� : ");
    gets(pa);

    while (*pa)
    {
        *pb = toupper(*pa);
        pa++;
        pb++;
    }
    *pb = '\0';

    printf("sa = %s, sb = %s", stra, strb);
}
void ex08()
{
    char str[2][20], *pa, *pb;

    pa = str[0];
    pb = str[1];
    printf("���ڿ� �Է� : ");
    gets(pa);

    while (*pa)
    {
        *pb = toupper(*pa);
        pa++;
        pb++;
    }
    *pb = '\0';

    printf("str[0] = %s, str[1] = %s", str[0], str[1]);
}
void ex09()
{
    char stra[20], *pa, strb[20], *pb;

    pa = stra;
    pb = strb;

    printf("���ڿ� �Է� : ");
    gets(pa);
    printf("���ڿ� �Է� : ");
    gets(pb);

    while (*pa && *pb)
    {
        if (*pa != *pb)
        {
            break;
        }
        pa++;
        pb++;
    }
    if (*pa == '\0' && *pb == '\0')
    {
        printf("%s, %s, ����", stra, strb);
    }
    else
        printf("%s, %s, �ٸ�", stra, strb);
}
void ex10()
{
    char stra[2][20], *pa, *pb;

    while (1)
    {
        pa = stra[0];
        pb = stra[1];

        printf("���ڿ� �Է� : ");
        gets(pa);
        if(*pa == '\0') {
            printf("<EnterŰ>");
            break;
        }
        printf("���ڿ� �Է� : ");
        gets(pb);

        while (*pa && *pb)
        {
            if (*pa != *pb)
            {
                break;
            }
            pa++;
            pb++;
        }
        if (*pa == '\0' && *pb == '\0')
        {
            printf("%s, %s, ����\n", stra[0], stra[1]);
        }
        else
            printf("%s, %s, �ٸ�\n", stra[0], stra[1]);
    }
}
void ex11(){
    int from[4],*p;
    int sum=0,max,min;

    p=from;
    for(int i=0;i<sizeof(from)/sizeof(from[0]);i++){
        printf("���� �Է� : ");
        scanf("%d",p+i);
    }
    max=from[0];
    min=from[0];

    for(int i=0;i<sizeof(from)/sizeof(from[0]);i++){
        sum += *(p+i);
        if(max<*(p+i)){
            max = *(p+i);
        }
        if(min>*(p+i)){
            min = *(p+i);
        }
    }
    printf("�� = %d\n",sum);
    printf("���� ū ��  = %d\n",max);
    printf("���� ���� ��  = %d\n",min);
}
void ex12(){
    int from[4],*p;
    int to[4],*pt;
    
    p=from;
    pt = to;
    for(int i=0;i<sizeof(from)/sizeof(from[0]);i++){
        printf("���� �Է� : ");
        scanf("%d",p+i);
    }

    for(int i=0;i<sizeof(from)/sizeof(from[0]);i++){
        *(pt+i) = *(p+i);

        printf("from[%d] = %d, to[%d] = %d\n",i,*(p+i),i,*(pt+i));
    }
}
void ex13(){
    char str[20],*p;
    int i=0;

    p = str;
    printf("�� �ܾ �Է��ϼ��� : ");
    gets(p);

    printf("�Է��� �ܾ �ݴ�� ����մϴ� : ");

    while(*p){
        i++;
        p++;
    }
    p = str;
    for(i;i>=0;i--){
        printf("%c",*(p+i));
    }

}
int main(void)
{
    // ex01();
    // ex02();
    // ex03();
    // ex04();
    // ex05();
    // ex06();
    // ex07();
    // ex08();
    // ex09();
    // ex10();
    // ex11();
    // ex12();
    ex13();
    return 0;
}