#include <stdio.h>
#include <conio.h>
#include <ctype.h>
void ex01()
{
    double source[] = {1.21, 3.43, 5.65, 7.87, 8.98}, *ps;
    double target[5] = {0.0}, *pt;
    ps = source;
    pt = target;

    for (int i = 0; i < sizeof(source) / sizeof(double); i++)
    {
        *pt = *ps;
        pt++;
        ps++;
    }

    ps = source; // pt,ps가 ++ 되었으니 다시 치환
    pt = target;
    printf("source = ");
    for (int i = 0; i < sizeof(source) / sizeof(double); i++)
    {
        printf("%.2lf, ", *(ps + i));
    }
    printf("\ntarget = ");
    for (int i = 0; i < sizeof(source) / sizeof(double); i++)
    {
        printf("%.2lf, ", *(pt + i));
    }
}
void ex02()
{
    double source[] = {1.21, 3.43, 5.65, 7.87, 8.98}, *ps;
    double d, *pd;
    ps = source;
    pd = &d;

    printf("각 원소에 더할 값 입력 : ");
    scanf("%lf", pd);

    printf("target = ");
    for (int i = 0; i < sizeof(source) / sizeof(double); i++)
    {
        printf("%.2lf, ", *(ps + i) + *pd);
    }
}
void ex03()
{
    char str[50], *ps;
    int i = 0;
    ps = str;

    printf("문자열입력 : ");
    gets(ps);

    while (*ps)
    {
        ps++;
        i++;
    }

    printf("\t입력된 문자열 길이 = %d", i);
}
void ex04()
{
    while (1)
    {
        char str[50], *ps;
        int i = 0;
        ps = str;

        printf("문자열입력 : ");
        gets(ps);

    if(!(*ps)){
            printf("<Enter>키");
            break;
    }
    while(*ps){
            ps++;
            i++;
    }

    printf("\t입력된 문자열 길이 = %d",i);
    printf("\n");
    }
}
void ex05(){
    char str[50],*ps,ch,*pc;
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
            if(*ps == *pc){
                count++;
            }
            ps++;
        }
        printf("\n\t%s에서 %c는 %d개\n",str,ch,count);
    }


}
void ex06(){
    char sa[50],sb[50],*pa,*pb;
    int i=0;
    printf("문자열입력 : ");
    gets(sa);
    pa = sa;

    printf("문자열입력 : ");
    gets(sb);
    pb = sb;

    printf("sa=%s, sb=%s",pa,pb);
    
    while(*pa){
        pa++;
    }
    while(*pb){
        *pa = *pb;
        pa++;
        pb++;
    }
    printf("\nsa=sa+sb=%s, sb=%s",sa,sb);   
}
void ex07(){
    char sa[50],sb[50],*pa,*pb;
    printf("문자열입력 : ");
    gets(sa);
    pa = sa;
    pb = sb;

    while(*pa){
        *pb = toupper(*pa);
        pa++;
        pb++;
    }
    printf("stra=%s , strb=%s",sa,sb);
    
}
void ex08(){
    char sa[2][50],*pa,*pb;
    printf("문자열입력 : ");
    gets(sa[0]);
    pa = sa[0];
    pb = sa[1];

    while(*pa){
        *pb = toupper(*pa);
        pa++;
        pb++;
    }
    printf("str[0]=%s , str[1]=%s",sa[0],sa[1]); 
}
void ex09(){
    char stra[50],strb[50],*pa,*pb;

    printf("문자열입력 : ");
    gets(stra);
    pa=stra;

    printf("문자열입력 : ");
    gets(strb);
    pb=strb;

    while(*pa && *pb){
        if(*pa != *pb) break; //둘다 null이 아닌데 두 값이 다르면 break
        pa++;
        pb++;
    }
    if(*pa == '\0' && *pb == '\0'){//위 반복문에서 탈출해서 널 위치가 같으면 같음.
        printf("%s, %s, 같음.",stra,strb);
    }
    else {
        printf("%s, %s, 다름.",stra,strb);
    }
}
void ex10(){
    char stra[2][50],*pa,*pb;

    while(1){
    printf("문자열입력 : ");
    gets(stra[0]);
    pa=stra[0];
    
    if(!(*pa)) {
        printf("<Enter>키");
        break;
    }
    printf("문자열입력 : ");
    gets(stra[1]);
    pb=stra[1];

    while(*pa && *pb){
        if(*pa != *pb) break; //둘다 null이 아닌데 두 값이 다르면 break
        pa++;
        pb++;
    }
    if(*pa == '\0' && *pb == '\0'){//위 반복문에서 탈출해서 널 위치가 같으면 같음.
        printf("\t%s, %s, 같음.\n",stra[0],stra[1]);
    }
    else {
        printf("\t%s, %s, 다름.\n",stra[0],stra[1]);
    }
    }
}
void ex11(){
    int from[4],*pf;
    int sum=0,maxnb,minnb;

    pf = from;

    for(int i=0;i<4;i++){
        printf("정수입력 : ");
        scanf("%d",(pf+i));
    }
    maxnb = *pf;
    minnb = *pf;

    for(int i=0;i<4;i++){
        sum = sum + *(pf+i);
        if(*(pf+i)>maxnb){
            maxnb=*(pf+i);
        }
        if(*(pf+i)<minnb){
            minnb=*(pf+i);
        }
    }

    printf("합=%d\n가장 큰 수=%d\n가장 작은 수=%d",sum,maxnb,minnb);
}
void ex12(){
    int from[4],to[4],*pf,*pt;

    pf = from;
    pt = to;

    for(int i=0;i<4;i++){
        printf("정수입력 : ");
        scanf("%d",(pf+i));
    }

    for(int i=0;i<4;i++){
        *(pt+i) = *(pf+i);

        printf("from배열: %d, to배열: %d\n",*(pf+i),*(pf+i));
    }
    
}
void ex13(){
    char s[50],*ps;
    int i=0;
    printf("한 단어를 입력하세요 : ");
    gets(s);
    ps = s; 

    printf("입력한 단어를 반대로 출력합니다 : ");
    while(*ps){
        i++;
        ps++;
    }
    ps = s;
    for(i;i>=0;i--){
        printf("%c",*(ps+i));
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