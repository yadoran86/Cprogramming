#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <stdlib.h>
void ex01(int argc,char *argv[]){
    printf("argc = %d\n",argc);
    for(int i=0;i<argc;i++){
        printf("argc[%d] = %s\n",i,argv[i]);
    }
}
void ex02(char *argv){
    printf("입력한 문자열에서 숫자는 ->");
    while(*argv){
        if(isdigit(*argv)){
            printf("%c",*argv);
        }
        argv++;
    }
}
void ex03(int argc,char *argv[]){
    int a,b;
    char ch;

    a=atof(argv[1]);
    ch = *argv[2];
    b=atof(argv[3]);

    if( ch == '+'){
        printf("%d %c %d = %d",a,ch,b,a+b);
    }
    else if( ch == '-'){
        printf("%d %c %d = %d",a,ch,b,a-b);
    }
    else 
        printf("덧셈과 뺄샘만 가능합니다.");
}
void ex04(char *argv[]){
    char arr[10][20] = {"영","일","이","삼","사","오","육","칠","팔","구"};
    if((*argv[1]-'0')<10000){
        printf("입력한 정수는 [%s천 %s백 %s십 %s] 입니다",
        arr[argv[1][0]-'0'],arr[argv[1][1]-'0'],arr[argv[1][2]-'0'],arr[argv[1][3]-'0']);
    }
}
int max(int *num,int size){
    int max = num[0];

    for(int i=0;i<size;i++){
        if(max < *(num+i)){
            max = *(num+i);
        }
    }
    return max;

}
void ex05(){
    int num[3],result;
    for(int i=0;i<sizeof(num)/sizeof(num[0]);i++){
        printf("정수입력 : ");
        scanf("%d",num+i);
    }
    result = max(num,sizeof(num)/sizeof(num[0]));
    printf("max()에서 전달 받은 값 = %d",result);
    
}
void ex06(char *argv[]){
    int num[3],result;
    for(int i=0;i<sizeof(num)/sizeof(num[0]);i++){
        num[i] = atof(argv[i+1]);
    }
    result = max(num,sizeof(num)/sizeof(num[0]));
    printf("max()에서 전달 받은 값 = %d",result);
}
void mystrcat(char *pa,char *pb,char *pp){
    while(*pa){
        *pp=*pa;
        pp++;
        pa++;
    }
    while(*pb){
        *pp=*pb;
        pp++;
        pb++;
    }
    *pp = '\0';
}
void ex07(){
    char stra[20],strb[20],plus[40];
    printf("문자열 입력 : ");
    gets(stra);
    printf("문자열 입력 : ");
    gets(strb);

    mystrcat(stra,strb,plus);

    printf("plus = %s",plus);
}
void ex08(char *argv[]){
    char plus[40];

    mystrcat(argv[1],argv[2],plus);

    printf("plus = %s",plus);
}
double myabs(double n){
    if(n < 0){
        n = -(n);
    }
    return n;
}
void ex09(){
    double i;
    printf("실수 입력 : ");
    scanf("%lf",&i);

    printf("입력받은 수의 절댓값 = %lf",myabs(i));
}
int isprime(int n){
    int cnt=0;
    for(int i=2;i<n;i++){
        if(n%i==0){
            cnt++;
        }
    }
    if(cnt == 0) {
        return 1;
    }
    else 
        return 0;
}
void ex10(){
    int i;
    printf("양의 정수 입력 : ");
    scanf("%d",&i);

    if(isprime(i)){
        printf("소수입니다.");
    }
    else 
        printf("소수가 아닙니다.");
}
int mystrlen(char *str){
    int i=0;
    while(*str){
        str++;
        i++;
    }
    return i;
}
void ex11(){
    char str[20];
    int result;
    printf("문자열 입력 : ");
    gets(str);

    result = mystrlen(str);

    printf("문자열 길이 = %d",result);
}
int mystrchcnt(char *str,char ch){
    int res=0;
    while(*str){
        if(*str==ch){
            res++;
        }
        str++;
    }
    return res;
}
void ex12(){
    char str[20],ch;
    int result;
    printf("문자열 입력 : ");
    gets(str);
    printf("문자 입력 : ");
    ch = getche();

    result = mystrchcnt(str,ch);

    printf("\n%s에서 %c는 %d개",str,ch,result);
}
void mystrupper(char *s,char *t){
    while(*s){
        *t = toupper(*s);
        s++;
        t++;
    }
}
void ex13(){
    char source[20],target[20];
    printf("문자열 입력 : ");
    gets(source);

    mystrupper(source,target);

    printf("target = %s",target);
}
int strcmp2dim(char *a,char *b){
    while( *a && *b){
        if(*a != *b) break;
        a++;
        b++;
    }
    if(*a == '\0' && *b == '\0'){
        return 0;
    }
    else 
        return 1;

}
void ex14(){
    char str[2][20];
    int result;

    printf("문자열 입력 : ");
    gets(str[0]);
    printf("문자열 입력 : ");
    gets(str[1]);

    result = strcmp2dim(str[0],str[1]);
    
    if(result){
        printf("다름.");
    }
    else {
        printf("같음");
    }
}
#define SIZE 5
void mysort(int *a,int *s){
    int temp;
    for(int i=0;i<SIZE;i++){
        s[i] = a[i];
    }
    for (int i=SIZE-1;i>=0;i--){
        for(int j=1;j<=i;j++){
            if(s[j-1] > s[j]){
                temp = s[j-1];
                s[j-1] = s[j];
                s[j] = temp;
            }
        }
    }
}
void ex15(char *argv[]){
    int ary[SIZE],sortary[SIZE];
    for(int i=0;i<SIZE;i++){
        ary[i] = atoi(argv[i+1]);
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
int main(int argc,char *argv[]){
    //ex01(argc,argv);
    //ex02(argv[1]);
    //ex03(argc,argv);
    //ex04(argv);
    //ex05();
    //ex06(argv);
    //ex07();
    //ex08(argv);
    //ex09();
    //ex10();
    //ex11();
    //ex12();
    //ex13();
    //ex14();
    ex15(argv);
    return 0;
}