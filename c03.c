#include <stdio.h>
#include <conio.h>
void ex_01()
{
    int x, y, change;

    do{
    printf("10000������ �ݾ��� �Է����ּ���:");
    scanf("%d", &x);
    }while(x < 0 || x > 10000);
    
    printf("Ŀ�� �� �� �帱��� :");
    scanf("%d", &y);

    change = x - 1200 * y;

    printf("\n�Ž��� �� �Դϴ�.\n");
    printf("5000���� %d��\n", change / 5000);
    printf("1000���� %d��\n", (change % 5000) / 1000);
    printf("500�� ���� %d��\n", (change % 1000) / 500);
    printf("100�� ���� %d��\n", (change % 500) / 100);
}
void ex_02()
{
    int a, b;

    printf("���� �� ���� �Է��ϼ���:");
    scanf("%d %d", &a, &b);

    (a > b) ? printf("ū �� = %d\n���� ��= %d\nū ���� ���� ���� ���� ��� ������ = %d,%d", a, b, a / b, a % b) : printf("ū �� = %d\n���� ��= %d\nū ���� ���� ���� ���� ��� ������ = %d,%d", b, a, b / a, b % a);
}
void ex_03()
{
    char ch;
    printf("���ڸ� �Է��ϼ���:");
    ch = getche();

    ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) ? printf(" -> Y") : printf(" -> N");
}
void ex_04()
{
    char num1, num2, num3, num4;
    printf("���ڸ� �Է��ϼ��� :");
    num1 = getche();
    printf("\n���ڸ� �Է��ϼ��� :");
    num2 = getche();

    num3 = (num1 >= '0' && num1 <= '9') ? num1 - '0' : 1;
    num4 = (num2 >= '0' && num2 <= '9') ? num2 - '0' : 1;

    printf("\n�� ������ ����  %d", num3 * num4);
}
void ex_05()
{
    int num;
    printf("������ �Է��ϼ��� :");
    scanf("%d", &num);

    printf("2�� = %d", num << 1);
    printf("\n4�� = %d", num << 2);
    printf("\n8�� = %d", num << 3);
}
void ex_06()
{
    int num;
    printf("������ �Է��ϼ��� :");
    scanf("%d", &num);

    ((num >> 1) > 10) ? printf("OK") : printf("NOK");
}
#define A 31
void ex_07()
{
    int num;
    printf("������ �Է��ϼ��� :");
    scanf("%d", &num);

    (num >> A) ? printf("�����Դϴ�.") : printf("����Դϴ�.");
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