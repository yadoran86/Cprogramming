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
    printf("�Է��� ���ڿ����� ���ڴ� -> ");
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

    a=atof(argv[1]);//���ڸ� �Ǽ��� ��ȯ
    c=*argv[2];
    b=atof(argv[3]);

    if(c == '+'){
        printf("-> %d %c %d = %d",a,c,b,a+b);
    }
    else if(c == '-'){
        printf("-> %d %c %d = %d",a,c,b,a-b);
    }
    else{
        printf("-> ������ ������ �����մϴ�.");
    }
}
void ex04(char *str){
    int number,a,b,c,d;
    
    number = atoi(str);//�Էµ� ���ڿ� ������ ��ȯ

    a=number/1000;//õ�� �ڸ��� 
    b=(number%1000)/100;//���� �ڸ���
    c=(number%100)/10;//���� �ڸ���
    d=number%10;//���� �ڸ��� 

    printf("�Է��� ������ [");

    switch(a){
        case 0:
        printf("");
        break;
        case 1:
        printf("õ ");
        break;
        case 2:
        printf("��õ ");
        break;
        case 3:
        printf("��õ ");
        break;
        case 4:
        printf("��õ ");
        break;
        case 5:
        printf("��õ ");
        break;
        case 6:
        printf("��õ ");
        break;
        case 7:
        printf("ĥõ ");
        break;
        case 8:
        printf("��õ ");
        break;
        case 9:
        printf("��õ ");
        break;
    }
    switch(b){
        case 0:
        printf("");
        break;
        case 1:
        printf("�� ");
        break;
        case 2:
        printf("�̹� ");
        break;
        case 3:
        printf("��� ");
        break;
        case 4:
        printf("��� ");
        break;
        case 5:
        printf("���� ");
        break;
        case 6:
        printf("���� ");
        break;
        case 7:
        printf("ĥ�� ");
        break;
        case 8:
        printf("�ȹ� ");
        break;
        case 9:
        printf("���� ");
        break;
    }
    switch(c){
        case 0:
        printf("");
        break;
        case 1:
        printf("�� ");
        break;
        case 2:
        printf("�̽� ");
        break;
        case 3:
        printf("��� ");
        break;
        case 4:
        printf("��� ");
        break;
        case 5:
        printf("���� ");
        break;
        case 6:
        printf("���� ");
        break;
        case 7:
        printf("ĥ�� ");
        break;
        case 8:
        printf("�Ƚ� ");
        break;
        case 9:
        printf("���� ");
        break;
    }
    switch(d){
        case 0:
        printf("");
        break;
        case 1:
        printf("��");
        break;
        case 2:
        printf("��");
        break;
        case 3:
        printf("��");
        break;
        case 4:
        printf("��");
        break;
        case 5:
        printf("��");
        break;
        case 6:
        printf("��");
        break;
        case 7:
        printf("ĥ");
        break;
        case 8:
        printf("��");
        break;
        case 9:
        printf("��");
        break;
    }
    printf("] �Դϴ�.");
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
        printf("�����Է� : ");
        scanf("%d",num+i);
    }

    result = max(num,sizeof(num)/sizeof(int));

    printf("max()���� ���� ���� �ִ� = %d",result);
}
void ex06(int argc,char *argv[]){
    int num[3],i,result;
    for(i=0;i<argc;i++){
        num[i] = atof(argv[i+1]);
    }
    result = max(num,sizeof(num)/sizeof(int));

    printf("max()���� ���� ���� �ִ� = %d",result);

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
    printf("���ڿ��Է� : ");
    gets(stra);
    printf("���ڿ��Է� : ");
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
    printf("�Ǽ� �Է� : ");
    scanf("%lf",&num);

    printf("�Է¹��� �Ǽ��� ���� = %.2lf",myabs(num));
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
    printf("���� ���� �Է� : ");
    scanf("%d",&num);

    (isprime(num)) ? printf("�Ҽ��Դϴ�."):printf("�Ҽ��� �ƴմϴ�.");

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
    printf("���ڿ� �Է� : ");
    gets(str);

    len = mystrlen(str);

    printf("�Է��� ���ڿ��� ���� = %d",len);
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

    printf("���ڿ� �Է� : ");
    gets(str);
    printf("���� �Է� : ");
    ch = getche();

    result = mystrchcnt(str,ch);

    printf("\n%s���� %c�� %d��",str,ch,result);
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
    printf("�ҹ��� ���ڿ� �Է� : ");
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
    printf("���ڿ� �Է� : ");
    gets(str[0]);
    printf("���ڿ� �Է� : ");
    gets(str[1]);

    result = strcmp2dim(str[0],str[1]);

    if(result == 0 ){
        printf("�� ���ڿ��� ����");
    }
    else
        printf("�� ���ڿ��� �ٸ�");
}
#define SIZE 5
void mysort(int *a,int *s){
    int temp;
    for(int i=0;i<SIZE;i++){
        s[i] = a[i];
    }
    for(int i=SIZE-1;i>=0;i--){
        for(int j=1;j<=i;j++){
            if(s[j-1]>s[j]){//�� ���� �ں��� ũ�� �ڸ� �ٲٱ�
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