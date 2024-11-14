#include <stdio.h>
#include <conio.h>
#include <ctype.h>
void ex_01()
{
    char ch[4];

    for (int i = 0; i < sizeof(ch) / sizeof(char); i++)
    {
        printf("�����Է� : ");
        ch[i] = getche();
        printf("\n");
    }
    printf("�Էµ� ���� = ");
    for (int i = 0; i < sizeof(ch) / sizeof(char); i++)
    {
        printf("%c", ch[i]);
    }
}
void ex_02()
{
    char str[50];
    printf("���ڿ� �Է� : ");
    gets(str);
    printf("�Էµ� ���ڿ� = %s", str);
}
void ex_03()
{
    char str[50];
    int i;

    printf("���ڿ� �Է� : ");
    gets(str);

    for (i = 0; str[i]; i++)
        ;

    printf("�Էµ� ���ڿ� ���� = %d", i);
}
void ex_04()
{
    char str[50];
    int i;

    while (1)
    {
        printf("\n���ڿ� �Է� : ");
        gets(str);

        if (str[0] == '\0')
        {
            printf("<Enter>?");
            break;
        }

        for (i = 0; str[i]; i++)
            ;

        printf("�Էµ� ���ڿ��� ���� = %d", i);
    }
}
void ex_05()
{
    char str[50], ch;
    int i;

    while (1)
    {
        int count = 0;
        printf("\n���ڿ��Է� : ");
        gets(str);

        if (str[0] == '\0')
        {
            printf("<Enter>?");
            break;
        }

        printf("�����Է� : ");
        ch = getche();

        for (i = 0; str[i]; i++)
        {
            if (str[i] == ch)
                count++;
        }
        printf("\n\t%s���� %c�� %d��.", str, ch, count);
    }
}
void ex_06()
{
    char stra[30], strb[30];
    int i, j;

    printf("���ڿ��Է� : ");
    gets(stra);

    for (i = 0; stra[i]; i++)
        ;

    for (j = 0; j < i; j++)
    {
        strb[j] = stra[i - 1 - j];
    }
    strb[j] = '\0';
    printf("stra = %s\n", stra);
    printf("strb = %s\n", strb);
}
void ex_07()
{
    char stra[50], strb[50];
    int i, eq = 1;

    printf("���ڿ��Է� : ");
    gets(stra);
    printf("���ڿ��Է� : ");
    gets(strb);

    for (i = 0; 1; i++)
    {
        if (stra[i] != strb[i])
        {
            eq = 0;
            break;
        }
        else if (stra[i] == '\0')
            break;
    }
    if (eq == 1)
    {
        printf("%s,%s,����.", stra, strb);
    }
    else
    {
        printf("%s,%s,�ٸ�.", stra, strb);
    }
}
void ex_08()
{
    char str[2][20];
    int i;

    while (1)
    {
        int eq = 1;
        printf("���ڿ��Է� : ");
        gets(str[0]);
        if (str[0][0] == '\0')
        {
            printf("<Enter>?");
            break;
        }
        printf("���ڿ��Է� : ");
        gets(str[1]);

        for (i = 0; 1; i++)
        {
            if (str[0][i] != str[1][i])
            {
                eq = 0;
                break;
            }
            else if (str[0][i] == '\0' || str[1][i] == '\0')
            {
                break;
            }
        }
        if (eq == 0)
        {
            printf("\t%s,%s,�ٸ�", str[0], str[1]);
        }
        else
        {
            printf("\t%s,%s,����", str[0], str[1]);
        }
        printf("\n");
    }
}
void ex_09()
{
    int from[4];
    int i, sum = 0, min, max;

    for (i = 0; i < 4; i++)
    {
        printf("�����Է� : ");
        scanf("%d", &from[i]);
    }
    min = from[i];
    max = from[i];

    for (i = 0; i < 4; i++)
    {
        sum = sum + from[i];
        if (from[i] < min)
        {
            min = from[i];
        }
        else if (from[i] > max)
        {
            max = from[i];
        }
    }
    printf("\n�� = %d\n���� ū �� = %d\n���� ���� �� = %d", sum, max, min);
}
void ex_10()
{
    int from[4], to[4], i;

    for (i = 0; i < 4; i++)
    {
        printf("�����Է� : ");
        scanf("%d", &from[i]);
    }
    for (i = 0; i < sizeof(from) / sizeof(int); i++)
    {
        to[i] = from[i];
    }
    for (i = 0; i < sizeof(from) / sizeof(int); i++)
    {
        printf("\nfrom�迭 : %d, to�迭 : %d", from[i], to[i]);
    }
}
void ex_11()
{
    char str[50];
    int i, num[5] = {0}, max = 0, index = 0;
    printf("0���� 4������ ���� �Է� : ");
    gets(str);

    for (i = 0; str[i]; i++)
    {
        if (str[i] >= '0' && str[i] <= '4')
        {
            ++num[str[i] - '0'];
        }
    }
    for (i = 0; i < 5; i++)
    {
        if (num[i] > max)
        {
            max = num[i];
            index = i;
        }
    }
    printf("���� ���� �Է� ���� �� = %d\n�Է� Ƚ�� = %d", index, num[index]);
}
void ex_12()
{
    int num, i, j;
    char bin[33];

    do
    {
        i = 0;
        printf("�����Է� : ");
        scanf("%d", &num);
        if (num == 0)
        {
            break;
        }

        printf("\t�Էµ� %d�� �������� 0b", num);
        while (num > 0)
        {
            bin[i] = num % 2 + '0';
            num /= 2;
            i++;
        }
        bin[i] = '\0';

        for (j = i - 1; j >= 0; j--)
        {
            printf("%c", bin[j]);
        }
        printf("\n");
    } while (1);
}
int main(void)
{
    // ex_01();
    // ex_02();
    // ex_03();
    // ex_04();
    // ex_05();
    // ex_06();
    // ex_07();
    // ex_08();
    // ex_09();
    // ex_10();
    // ex_11();
    ex_12();
    return 0;
}