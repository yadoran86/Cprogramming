#include <stdio.h>
#include <conio.h>
void ex_01()
{
    int x, y, change;

    do{
    printf("10000이하의 금액을 입력해주세요:");
    scanf("%d", &x);
    }while(x < 0 || x > 10000);
    
    printf("커피 몇 잔 드릴까요 :");
    scanf("%d", &y);

    change = x - 1200 * y;

    printf("\n거스름 돈 입니다.\n");
    printf("5000원권 %d개\n", change / 5000);
    printf("1000원권 %d개\n", (change % 5000) / 1000);
    printf("500원 동전 %d개\n", (change % 1000) / 500);
    printf("100원 동전 %d개\n", (change % 500) / 100);
}
void ex_02()
{
    int a, b;

    printf("정수 두 개를 입력하세요:");
    scanf("%d %d", &a, &b);

    (a > b) ? printf("큰 수 = %d\n작은 수= %d\n큰 수를 작은 수로 나눈 몫과 나머지 = %d,%d", a, b, a / b, a % b) : printf("큰 수 = %d\n작은 수= %d\n큰 수를 작은 수로 나눈 몫과 나머지 = %d,%d", b, a, b / a, b % a);
}
void ex_03()
{
    char ch;
    printf("문자를 입력하세요:");
    ch = getche();

    ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) ? printf(" -> Y") : printf(" -> N");
}
void ex_04()
{
    char num1, num2, num3, num4;
    printf("숫자를 입력하세요 :");
    num1 = getche();
    printf("\n숫자를 입력하세요 :");
    num2 = getche();

    num3 = (num1 >= '0' && num1 <= '9') ? num1 - '0' : 1;
    num4 = (num2 >= '0' && num2 <= '9') ? num2 - '0' : 1;

    printf("\n두 숫자의 곱은  %d", num3 * num4);
}
void ex_05()
{
    int num;
    printf("정수를 입력하세요 :");
    scanf("%d", &num);

    printf("2배 = %d", num << 1);
    printf("\n4배 = %d", num << 2);
    printf("\n8배 = %d", num << 3);
}
void ex_06()
{
    int num;
    printf("정수를 입력하세요 :");
    scanf("%d", &num);

    ((num >> 1) > 10) ? printf("OK") : printf("NOK");
}
#define A 31
void ex_07()
{
    int num;
    printf("정수를 입력하세요 :");
    scanf("%d", &num);

    (num >> A) ? printf("음수입니다.") : printf("양수입니다.");
}

int main(void)
{
     ex_01();
    // ex_02();
    //  ex_03();
    //  ex_04();
    // ex_05();
    // ex_06();
    //ex_07();

    return 0;
}