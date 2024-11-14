#include <stdio.h>
#include <conio.h>

void ex_01(){
    int x;
    int y;
    int coffee;
    int change;

    printf("10000이하의 금액을 입력해 주세요 : ");
    scanf("%d",&x);

    printf("커피 몇 잔 드릴까요 : ");
    scanf("%d",&y);

    coffee = 1200*y;
    change = x - coffee;

    printf("거스름 돈 입니다.");
    printf("\n5000원 권 %d개",change / 5000);
    printf("\n1000원 권 %d개",(change % 5000) / 1000);
    printf("\n500원 동전 %d개",(change % 1000) / 500);
    printf("\n100원 동전 %d개",(change % 500) / 100);
}
void ex_02(){
    int a, b;

    printf("정수 두 개를 입력하세요 : ");
    scanf("%d %d",&a,&b);

    (a > b) ? printf("큰수 = %d\n작은수 = %d",a,b):printf("큰수 = %d\n작은수 = %d",b,a);
    (a > b) ? printf("\n큰수를 작은수로 나눈 몫과 나머지 = %d,%d",a/b,a%b):printf("\n큰수를 작은수로 나눈 몫과 나머지 = %d,%d",b/a,b%a);
}
void ex_03(){
    char ch;

    printf("문자를 입력하세요 : ");
    ch = getche();

    (ch >= 'a' && ch <='z') || (ch >= 'A' && ch<='Z') ? printf("-> Y"):printf("-> N");  
}
void ex_04(){
    char num1, num2 , num3, num4;

    printf("숫자를 입력하세요 : ");
    num1 = getche();
    printf("\n숫자를 입력하세요 : ");
    num2 = getche();

    num3 = (num1 >= '0' && num1 <= '9') ? num1 - '0' : 1;
    num4 = (num2 >= '0' && num2 <= '9') ? num2 - '0' : 1;

    printf("\n두 수의 곱은 : %d",num3*num4);
}
void ex_05(){
    int num;

    printf("정수를 입력하세요 : ");
    scanf("%d",&num);

    printf("2배 = %d\n4배 = %d\n8배 = %d\n",num<<1,num<<2,num<<3);
}
void ex_06(){
    int num;

    printf("정수를 입력하세요 : ");
    scanf("%d",&num);

    ((num>>1) > 10) ? printf("OK") : printf("NOK");
}
#define A 31
void ex_07(){
    int num;

    printf("정수를 입력하세요 : ");
    scanf("%d",&num);

    (num>>A)? printf("음수입니다.") : printf("양수입니다.");
}
int main(void){
    // ex_01();
    // ex_02();
    // ex_03();
    // ex_04();
    // ex_05();
    // ex_06();
    ex_07();
    return 0;
}