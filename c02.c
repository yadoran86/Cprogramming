#include <stdio.h>

void ex_01()
{
    char c1, c2;
    c1 = '1';
    c2 = 1;
    printf("c1 = %c, c2 = %c\n", c1, c2);
}
void ex_02()
{
    char c1 = 'a', c2 = 'A', c3 = '0', c4 = '1';
    printf("('a' - 'A') = %d\n('0' - '1') = %d", c1 - c2, c3 - c4);
}
void ex_03()
{
    int num;
    printf("???? ??? : ");
    scanf("%d", &num);

    printf("8����=%#0o , 10����=%d, 16����=%#0x ", num, num, num);
}
void ex_04()
{
    int ch;
    printf("���� �Է� : ");
    scanf("%d", &ch);

    printf("8����=%#0o , 10����=%d, 16����=%#0x ", ch, ch, ch);
}
void ex_05()
{
    double num;
    printf("�Ǽ��� �Է��ϼ���: ");
    scanf("%lf", &num);
    printf("�Է��Ͻ� �Ǽ��� �Ҽ� ���ڸ��� ����ϸ� : %.1lf", num);
}
void ex_06()
{
    double mid, last, sum, avg;
    printf("�߰���� ���� �Է�:");
    scanf("%lf", &mid);
    printf("�⸻��� ���� �Է�:");
    scanf("%lf", &last);

    sum = mid + last;
    avg = sum / 2;
    printf("�� = %-10.3lf\n��� = %-10.3lf\n", sum, avg);
}
#define PI 3.141592
void ex_07()
{
    double r, num1, num2;
    printf("�������� �Է�:");
    scanf("%lf", &r);

    num1 = PI * r * r;
    num2 = 2 * PI * r;

    printf("�������� = %.2lf\n������ = %.2lf\n���ѷ� = %.2lf\n", r, num1, num2);
}
void ex_08()
{
    char ch;
    short sh;
    int in;
    float fl;
    double dou;

    printf("char�� ũ��: %d\nshort�� ũ��: %d\nint�� ũ��: %d\nfloat�� ũ��: %d\ndouble?? ???: %d\n", sizeof(ch), sizeof(sh), sizeof(in), sizeof(fl), sizeof(dou));
}
void ex_09()
{
    char num1, num2;
    printf("���� �Է� : ");
    scanf("%c", &num1);

    while (getchar() != '\n');

    printf("���� �Է� : ");
    scanf("%c", &num2);

    printf("�� = %d", (num1 - '0') + (num2 - '0'));
}
int main(void)
{
    // ex_01();
    // ex_02()
    // ex_03();
     ex_04();
    // ex_05();
    // ex_06();
    // ex_07();
    // ex_08();
    //ex_09();
    return 0;
}