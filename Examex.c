#include <stdio.h>
#include <conio.h>

void ex_05_07()
{
    char stra[50], strb[50];
    int i = 0;

    printf("���ڿ��Է� : ");
    gets(stra);
    printf("���ڿ��Է� : ");
    gets(strb);

    while (stra[i] != '\0' && strb[i] != '\0' && stra[i] == strb[i])
    {
        i++;
    }
    printf("%s,%s,", stra, strb);
    printf("%s", (stra[i] == strb[i]) ? "����" : "�ٸ�");
}
void ex_05_08()
{
    char str[2][100];
    int i;

    while (1)
    {
        printf("���ڿ��Է� : ");
        gets(str[0]);
        if (str[0][0] == '\0')
        {
            printf("<Enter>Ű");
            break;
        }
        printf("���ڿ��Է� : ");
        gets(str[1]);

        i = 0;
        while (str[0][i] != '\0' && str[1][i] != '\0' && str[0][i] == str[1][i])
        {
            i++;
        }
        printf("%s,%s,", str[0], str[1]);
        printf("%s", (str[0][i] == str[1][i]) ? "����" : "�ٸ�");
        printf("\n");
    }
}
void ex_05_11()
{
    char str[50];
    int i, max = 0, index;
    int count[5] = {0};

    printf("0���� 4������ ���� �Է� : ");
    gets(str);

    for (i = 0; str[i]; i++)
    {
        if (str[i] >= '0' && str[i] <= '4')
        {
            count[str[i] - '0']++;
        }
    }
    for (i = 0; i < 5; i++)
    {
        if (count[i] > max)
        {
            max = count[i];
            index = i;
        }
    }
    printf("���� ���� �Է� ���� �� = %d\n", index);
    printf("�Է� Ƚ�� = %d\n", count[index]);
}
void ex_05_12()
{
    int num, i, j;
    char bin[33];
    while (1)
    {
        printf("�����Է� : ");
        scanf("%d", &num);
        if (num == 0)
        {
            break;
        }
        printf("\t�Էµ� %d�� �������� 0b", num);
        i = 0;
        while (num > 0)
        {
            bin[i] = num % 2 + '0';
            num = num / 2;
            i++;
        }
        bin[i] = '\0';
        for (j = i - 1; j >= 0; j--)
        {
            printf("%c", bin[j]);
        }
        printf("\n");
    }
}
void ex_04_05()
{
    int num,bit,bin,place = 1;

    printf("������ �Է��ϼ��� : ");
    scanf("%d", &num);

    for (int i = num; i > 0; i = i / 2)
    {
        bit = (i & 1) * place;
        bin = bin + bit;
        place *= 10;
    }
    printf("2������ = %d",bin);
}
int main(void)
{
    // ex_05_07();
    // ex_05_08();
    // ex_05_11();
    // ex_05_12();
    ex_04_05();
    return 0;
}