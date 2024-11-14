#include <stdio.h>
#include <conio.h>

void ex_01()
{
    char ch[4];

    for (int i = 0; i < sizeof(ch) / sizeof(char); i++)
    {
        printf("\n�����Է� : ");
        ch[i] = getche();
    }
    printf("\n�Էµ� ���� = ");
    for (int i = 0; i < sizeof(ch) / sizeof(char); i++)
    {
        printf("%c", ch[i]);
    }
}
void ex_02()
{
    char str[20];
    printf("���ڿ� �Է� : ");
    gets(str);

    printf("�Էµ� ���ڿ� = %s", str);
}
void ex_03()
{
    char str[20];
    int i;
    printf("���ڿ� �Է� : ");
    gets(str);

    for (i = 0; str[i]; i++)
        ;

    printf("�Էµ� ���ڿ� ���� = %d", i);
}
void ex_04()
{
    char str[20];
    int i;

    while (1)
    {
        printf("���ڿ� �Է� : ");
        gets(str);
        if (str[0] == '\0')
        {
            printf("<Enter>Ű");
            break;
        }

        for (i = 0; str[i]; i++)
            ;

        printf("\t�Էµ� ���ڿ� ���� = %d\n", i);
    }
}
void ex_05()
{
    char str[20], ch;
    int i;

    while (1)
    {
        int count = 0;
        printf("\n���ڿ� �Է� : ");
        gets(str);
        if (str[0] == '\0')
        {
            printf("<Enter>Ű");
            break;
        }

        printf("���� �Է� : ");
        ch = getche();

        for (i = 0; str[i]; i++)
        {
            if (str[i] == ch)
            {
                count++;
            }
        }
        printf("\n\t%s���� %c�� %d��.", str, ch, count);
    }
}
void ex_06()
{
    char stra[50], strb[50];
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

    printf("stra = %s\nstrb = %s", stra, strb);
}
void ex_07()
{
    char stra[50], strb[50];
    int i = 0;

    printf("���ڿ��Է� ");
    gets(stra);

    printf("���ڿ��Է� ");
    gets(strb);

    while (stra[i] != '\0' && strb[i] != '\0' && stra[i] == strb[i])
    {
        i++; //������ ��� �����ϸ� i++, �ƴϸ� �ݺ��� Ż��
    }
    printf("%s,%s,", stra, strb);
    printf("%s", stra[i] == strb[i] ? "����" : "�ٸ�");
    //�ε����� ���� ���ؼ� ������ ���� �ٸ��� �ٸ�.
}
void ex_08()
{
    char str[2][100];

    while (1)
    {
        printf("���ڿ��Է� ");
        gets(str[0]);

        if (str[0][0] == '\0')
        {
            printf("<Enter>Ű");
            break;
        }

        printf("���ڿ��Է� ");
        gets(str[1]);

        int i = 0;
        while (str[0][i] != '\0' && str[1][i] != '\0' && str[0][i] == str[1][i])
        {
            i++; //������ ��� �����ϸ� i++, �ƴϸ� �ݺ��� Ż��
        }
        printf("%s,%s,", str[0], str[1]);
        printf("%s\n", str[0][i] == str[1][i] ? "����" : "�ٸ�");
    }
}
void ex_09()
{
    int from[4], i, max, min, sum = 0;

    for (i = 0; i < 4; i++)
    {
        printf("�����Է� : ");
        scanf("%d", &from[i]);
    }
    min = from[0];
    max = from[0];

    for (i = 0; i < 4; i++)
    {
        sum = sum + from[i];
        if (from[i] < min)
        {
            min = from[i];
        }
        if (from[i] > max)
        {
            max = from[i];
        }
    }
    printf("�� = %d\n���� ū�� = %d\n���� ���� �� = %d", sum, max, min);
}
void ex_10()
{
    int from[4], to[4], i;

    for (i = 0; i < 4; i++)
    {
        printf("�����Է� : ");
        scanf("%d", &from[i]);
    }

    for (i = 0; i < 4; i++)
    {
        to[i] = from[i];
    }

    for (i = 0; i < 4; i++)
    {
        printf("from�迭 : %d,to�迭 : %d\n", from[i], to[i]);
    }
}
void ex_11()
{
    char str[50];
    int count[5] = {0}, max = 0, index = 0, i;

    printf("0���� 4������ ���� �Է� : ");
    gets(str);

    for (i = 0; str[i]; i++)
    {
        if (str[i] >= '0' && str[i] <= '4')
        {
            count[str[i] - '0']++;
        }
    }

    for (int i = 0; i < 5; i++)
    {
        if (count[i] > max)
        {
            max = count[i];
            index = i;
        }
    }

    printf("���� ���� �Է� ���� �� = %d\n�Է� Ƚ�� = %d", index, count[index]);
}
void ex_12()
{
    int num, i, j;
    char str[33];

    while (1)
    {
        printf("�����Է� : ");
        scanf("%d", &num);
        if (num == 0)
        {
            break;
        }
        printf("\t�Էµ� %d�� �������� ", num);
        i = 0;
        while (num > 0)
        {
            str[i] = num % 2 + '0';
            num = num / 2;
            i++;
        }
        str[i] = '\0';
        for (j = i; j >= 0; j--)
        {
            printf("%c", str[j]);
        }
        printf("\n");
    }
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