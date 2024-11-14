#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <stdlib.h>
void ex01(int argc,char *argv[]){
    printf("argc = %d\n",argc);
    for(int i=0;i<argc;i++){
        printf("argv[%d] = %s\n",i,argv[i]);
    }
}
void ex02(char *a){
    printf("입력한 문자열에서 숫자는 -> ");
    while(*a){
        if(*a>='0'&&*a<='9'){
            printf("%c",*a);
        }
        a++;
    }

}
void ex03(int argc,char *argv[]){
    int a,b;
    char c;

    a=atof(argv[1]);//문자를 실수로 변환
    c=*argv[2];
    b=atof(argv[3]);

    if(c == '+'){
        printf("-> %d %c %d = %d",a,c,b,a+b);
    }
    else if(c == '-'){
        printf("-> %d %c %d = %d",a,c,b,a-b);
    }
    else{
        printf("-> 덧셈과 뺄셈만 가능합니다.");
    }
}
void ex04(char *str){
    int number,a,b,c,d;
    
    number = atoi(str);//입력된 문자열 정수로 변환

    a=number/1000;//천의 자리수 
    b=(number%1000)/100;//백의 자리수
    c=(number%100)/10;//십의 자리수
    d=number%10;//일의 자리수 

    printf("입력한 정수는 [");

    switch(a){
        case 0:
        printf("");
        break;
        case 1:
        printf("천 ");
        break;
        case 2:
        printf("이천 ");
        break;
        case 3:
        printf("삼천 ");
        break;
        case 4:
        printf("사천 ");
        break;
        case 5:
        printf("오천 ");
        break;
        case 6:
        printf("육천 ");
        break;
        case 7:
        printf("칠천 ");
        break;
        case 8:
        printf("팔천 ");
        break;
        case 9:
        printf("구천 ");
        break;
    }
    switch(b){
        case 0:
        printf("");
        break;
        case 1:
        printf("백 ");
        break;
        case 2:
        printf("이백 ");
        break;
        case 3:
        printf("삼백 ");
        break;
        case 4:
        printf("사백 ");
        break;
        case 5:
        printf("오백 ");
        break;
        case 6:
        printf("육백 ");
        break;
        case 7:
        printf("칠백 ");
        break;
        case 8:
        printf("팔백 ");
        break;
        case 9:
        printf("구백 ");
        break;
    }
    switch(c){
        case 0:
        printf("");
        break;
        case 1:
        printf("십 ");
        break;
        case 2:
        printf("이십 ");
        break;
        case 3:
        printf("삼십 ");
        break;
        case 4:
        printf("사십 ");
        break;
        case 5:
        printf("오십 ");
        break;
        case 6:
        printf("육십 ");
        break;
        case 7:
        printf("칠십 ");
        break;
        case 8:
        printf("팔십 ");
        break;
        case 9:
        printf("구십 ");
        break;
    }
    switch(d){
        case 0:
        printf("");
        break;
        case 1:
        printf("일");
        break;
        case 2:
        printf("이");
        break;
        case 3:
        printf("삼");
        break;
        case 4:
        printf("사");
        break;
        case 5:
        printf("오");
        break;
        case 6:
        printf("육");
        break;
        case 7:
        printf("칠");
        break;
        case 8:
        printf("팔");
        break;
        case 9:
        printf("구");
        break;
    }
    printf("] 입니다.");
}
int max(int *n,int size){
    int i,max_val = n[0];

    for(i=0;i<size;i++){
        if(max_val < n[i]){
            max_val = n[i];
        }
    }
    return max_val;
}
void ex05(){
    int num[3],i,result;
    for(i=0;i<sizeof(num)/sizeof(int);i++){
        printf("정수입력 : ");
        scanf("%d",num+i);
    }

    result = max(num,sizeof(num)/sizeof(int));

    printf("max()에서 전달 받은 최댓값 = %d",result);
}
void ex06(int argc,char *argv[]){
    int num[3],i,result;
    for(i=0;i<argc;i++){
        num[i] = atof(argv[i+1]);
    }
    result = max(num,sizeof(num)/sizeof(int));

    printf("max()에서 전달 받은 최댓값 = %d",result);

}
void mystrcat(char *a,char *b,char *p){
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
}
void ex07(){
    char stra[50],strb[50],plus[100];
    printf("문자열입력 : ");
    gets(stra);
    printf("문자열입력 : ");
    gets(strb);

    mystrcat(stra,strb,plus);

    printf("plus = %s",plus);
}
void ex08(char *argv[]){
    char plus[100];
    mystrcat(argv[1],argv[2],plus);

    printf("plus = %s",plus);
}
double myabs(double n){
    if(n<0){
        n = -(n);
    }
    return n;
}
void ex09(){
    double num;
    printf("실수 입력 : ");
    scanf("%lf",&num);

    printf("입력받은 실수의 절댓값 = %.2lf",myabs(num));
}
int isprime(int n){
    int i,cnt=0;

    for(i=2;i<n;i++){
        if(n%i==0){
            cnt++;
        }
    }
    if(cnt == 0){
        return 1;
    }
    else {
        return 0;
    }
}
void ex10(){
    int num;
    printf("양의 정수 입력 : ");
    scanf("%d",&num);

    (isprime(num)) ? printf("소수입니다."):printf("소수가 아닙니다.");

}
int mystrlen(char *a){
    int count = 0;
    while(*a){
        count++;
        a++;
    }
    return count;
}
void ex11(){
    int len;
    char str[50];
    printf("문자열 입력 : ");
    gets(str);

    len = mystrlen(str);

    printf("입력한 문자열의 길이 = %d",len);
}
int mystrchcnt(char *s,char c){
    int count=0;
    while(*s){
        if(*s==c){
            count++;
        }
        s++;
    }
    return count;
}
void ex12(){
    char str[50],ch;
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
        t++;
        s++;
    }
    *t = '\0';
}
void ex13(){
    char source[50],target[50];
    printf("소문자 문자열 입력 : ");
    gets(source);
    mystrupper(source,target);
    printf("source = %s\ntarget = %s",source,target);
}
int strcmp2dim(char *s,char *c){
    while(*s && *c){
        if(*s != *c) break;
        s++;
        c++;
    }
    if(*s == '\0' && *c == '\0'){
        return 0;
    }
    else
        return -1;
}
void ex14(){
    char str[2][50];
    int result;
    printf("문자열 입력 : ");
    gets(str[0]);
    printf("문자열 입력 : ");
    gets(str[1]);

    result = strcmp2dim(str[0],str[1]);

    if(result == 0 ){
        printf("두 문자열이 같음");
    }
    else
        printf("두 문자열이 다름");
}
#define SIZE 5
void mysort(int *a,int *s){
    int temp;
    for(int i=0;i<SIZE;i++){
        s[i] = a[i];
    }
    for(int i=SIZE-1;i>=0;i--){
        for(int j=1;j<=i;j++){
            if(s[j-1]>s[j]){//앞 수가 뒤보다 크면 자리 바꾸기
                temp = s[j-1];
                s[j-1] = s[j];
                s[j] = temp;
            }
        }
    }
}
void ex15(char *argv[]){
    int ary[SIZE],sortary[SIZE];
    for (int i=0;i<SIZE;i++){
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
    //ex04(argv[1]);
    //ex05();
    //ex06(argc,argv);
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