#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <stdlib.h>
void ex_01()
{
    int num;

    printf("������ �Է��ϼ��� : ");
    scanf("%d", &num);

    if (num > 0)
    {
        printf("����Դϴ�.");
    }
    else if (num < 0)
    {
        printf("�����Դϴ�.");
    }
}
void ex_02()
{
    int num;

    printf("������ �Է��ϼ��� : ");
    scanf("%d", &num);

    switch ((num / 2) > 10)
    {
    case 1:
        printf("OK");
        break;
    case 0:
        printf("NOK");
        break;
    }
}
void ex_03()
{
    double num, sum = 0;

    do
    {
        printf("���ڸ� �Է��ϼ��� : ");
        scanf("%lf", &num);
        sum = sum + num;
    }while (num < 100 && num > -100);
    printf("-100�̻� 100���� ���ڵ��� �� = %.2lf", sum-num);
}
void ex_04()
{
    char ch;

    printf("���ڸ� �Է��ϼ��� : ");

    do
    {
        ch = getche();
    } while (toupper(ch) != 'Q');
}
void ex_05()
{
    int num, bit, sum = 0, a = 1;

    printf("������ �Է��ϼ���:");
    scanf("%d", &num);

    do
    {
        bit = (num & 1) * a;
        sum = sum + bit;
        a = a * 10;
        num = num >> 1;
    } while (num > 0);
    printf("2������  = %d", sum);
}
void ex_06()
{
    int num, bit, sum = 0, a = 1, count = 0;

    printf("������ �Է��ϼ��� :");
    scanf("%d", &num);

    do
    {
        bit = (num & 1) * a;
        if ((num & 1) == 1)
        {
            count++;
        }
        sum = sum + bit;
        a = a * 10;
        num = num >> 1;
    } while (num > 0);
    printf("2������ ���� �� 1�� ��Ÿ���� Ƚ�� = %d", count);
}
void ex_07()
{
    int num, count = 0;

    do
    {
        printf("������ �Է��ϼ��� :");
        scanf("%d", &num);
    } while (num < 10);

    for (int i = 10; i <= num; i++)
    {
        if (i % 2 == 0)
            continue;
        else if (i % 3 == 0)
            continue;
        else if (i % 5 == 0)
            continue;
        else if (i % 7 == 0)
            continue;
        else
            printf("%d%c", i, (++count % 10) ? ' ' : '\n');
    }
}
void ex_08()
{
    char ch;
    int count = 0;
    do
    {
        printf("\n���ĺ� �Է� : ");
        ch = getche();
    } while (!(isalpha(ch)));

    printf("\n");
    for (toupper(ch); toupper(ch) <= 'Z'; ch++)
    {
        printf("%c%c", toupper(ch), (++count % 5) ? ' ' : '\n');
    }
}
void ex_09()
{
    char ch, i;
    do
    {
        printf("\nk������ ���ĺ��Է�(q�� ����, k�̻��� �ٽ� �Է�)");
        ch = getche();
        if (ch <= 'k')
        {
            printf("\n");
            for (i = 'a'; i <= ch; i++)
            {
                printf("%c", i);
            }
        }
        else
        {
            if( ch == 'q')
                break;
        }
    } while ( ch >= 'a' && ch <= 'z');
    printf("\nq�Է����� ����");
}
void ex_10()
{
    int sum = 0;
    char ch;
    do
    {
        printf("\n�����Է�(���ĺ��� ���� �̿��� ���� �Է� �� ����)");
        ch = getche();
        if (ch >= 'a' && ch <= 'z')
        {
            printf("\n�ҹ����Դϴ�.");
        }
        else if (ch >= 'A' && ch <= 'Z')
        {
            printf("\n�빮���Դϴ�.");
        }
        else if (isdigit(ch))
        {
            sum = sum + (ch - '0');
            printf("\n���� �Դϴ�. ���ݱ��� ���ڵ��� �� = %d", sum);
        }
    } while (isalpha(ch) || isdigit(ch));
    printf("\n���ĺ��� ���� �̿��� ���ڸ� �Է��Ͽ� �����մϴ�.");
}
void ex_11()
{
    int i, j;
    for (i = 0; i < 8; i++)
    {
        for (j = i; j < 8; j++)
            printf(" ");

        for (j = i; abs(j) <= i; j--)
            printf("%d", abs(j));

        printf("\n");
    }
}
void ex_12()
{
    int num;
    char ch,c;
    int de = 26;

    printf("�ݺ�Ƚ�� �Է� : ");
    scanf("%d",&num);

    for(int i = 0;i<num;i++){
        printf("\n�����Է� : " );
        ch = getche();
        if (abs(((tolower(ch) -'a') - ('m'-'a'))) < de){
            de = abs(((tolower(ch) -'a') - ('m'-'a')));
            c = tolower(ch);
        }
    }
    printf("\nm�� ���� ����� ���ڴ� = %c",c);

}
int main(void)
{
    // ex_01();
    // ex_02();
    // ex_03();
    // ex_04();
    // ex_05();
     ex_06();
    // ex_07();
    // ex_08();
    // ex_09();
    // ex_10();
    // ex_11();
    // ex_12();

    return 0;
}