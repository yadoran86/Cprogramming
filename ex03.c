#include <stdio.h>
#include <conio.h>

void ex_01(){
    int x;
    int y;
    int coffee;
    int change;

    printf("10000������ �ݾ��� �Է��� �ּ��� : ");
    scanf("%d",&x);

    printf("Ŀ�� �� �� �帱��� : ");
    scanf("%d",&y);

    coffee = 1200*y;
    change = x - coffee;

    printf("�Ž��� �� �Դϴ�.");
    printf("\n5000�� �� %d��",change / 5000);
    printf("\n1000�� �� %d��",(change % 5000) / 1000);
    printf("\n500�� ���� %d��",(change % 1000) / 500);
    printf("\n100�� ���� %d��",(change % 500) / 100);
}
void ex_02(){
    int a, b;

    printf("���� �� ���� �Է��ϼ��� : ");
    scanf("%d %d",&a,&b);

    (a > b) ? printf("ū�� = %d\n������ = %d",a,b):printf("ū�� = %d\n������ = %d",b,a);
    (a > b) ? printf("\nū���� �������� ���� ��� ������ = %d,%d",a/b,a%b):printf("\nū���� �������� ���� ��� ������ = %d,%d",b/a,b%a);
}
void ex_03(){
    char ch;

    printf("���ڸ� �Է��ϼ��� : ");
    ch = getche();

    (ch >= 'a' && ch <='z') || (ch >= 'A' && ch<='Z') ? printf("-> Y"):printf("-> N");  
}
void ex_04(){
    char num1, num2 , num3, num4;

    printf("���ڸ� �Է��ϼ��� : ");
    num1 = getche();
    printf("\n���ڸ� �Է��ϼ��� : ");
    num2 = getche();

    num3 = (num1 >= '0' && num1 <= '9') ? num1 - '0' : 1;
    num4 = (num2 >= '0' && num2 <= '9') ? num2 - '0' : 1;

    printf("\n�� ���� ���� : %d",num3*num4);
}
void ex_05(){
    int num;

    printf("������ �Է��ϼ��� : ");
    scanf("%d",&num);

    printf("2�� = %d\n4�� = %d\n8�� = %d\n",num<<1,num<<2,num<<3);
}
void ex_06(){
    int num;

    printf("������ �Է��ϼ��� : ");
    scanf("%d",&num);

    ((num>>1) > 10) ? printf("OK") : printf("NOK");
}
#define A 31
void ex_07(){
    int num;

    printf("������ �Է��ϼ��� : ");
    scanf("%d",&num);

    (num>>A)? printf("�����Դϴ�.") : printf("����Դϴ�.");
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