#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <stdlib.h>
void ex_01()
{
    int num;

    printf("정수를 입력하세요 : ");
    scanf("%d", &num);

    if (num > 0)
    {
        printf("양수입니다.");
    }
    else if (num < 0)
    {
        printf("음수입니다.");
    }
}
void ex_02()
{
    int num;

    printf("정수를 입력하세요 : ");
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
        printf("숫자를 입력하세요 : ");
        scanf("%lf", &num);
        sum = sum + num;
    }while (num < 100 && num > -100);
    printf("-100이상 100이하 숫자들의 합 = %.2lf", sum-num);
}
void ex_04()
{
    char ch;

    printf("문자를 입력하세요 : ");

    do
    {
        ch = getche();
    } while (toupper(ch) != 'Q');
}
void ex_05()
{
    int num, bit, sum = 0, a = 1;

    printf("정수를 입력하세요:");
    scanf("%d", &num);

    do
    {
        bit = (num & 1) * a;
        sum = sum + bit;
        a = a * 10;
        num = num >> 1;
    } while (num > 0);
    printf("2진수는  = %d", sum);
}
void ex_06()
{
    int num, bit, sum = 0, a = 1, count = 0;

    printf("정수를 입력하세요 :");
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
    printf("2진수로 만들 때 1이 나타나는 횟수 = %d", count);
}
void ex_07()
{
    int num, count = 0;

    do
    {
        printf("정수를 입력하세요 :");
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
        printf("\n알파벳 입력 : ");
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
        printf("\nk이하의 알파벳입력(q는 종료, k이상은 다시 입력)");
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
    printf("\nq입력으로 종료");
}
void ex_10()
{
    int sum = 0;
    char ch;
    do
    {
        printf("\n문자입력(알파벳과 숫자 이외의 문자 입력 시 종료)");
        ch = getche();
        if (ch >= 'a' && ch <= 'z')
        {
            printf("\n소문자입니다.");
        }
        else if (ch >= 'A' && ch <= 'Z')
        {
            printf("\n대문자입니다.");
        }
        else if (isdigit(ch))
        {
            sum = sum + (ch - '0');
            printf("\n숫자 입니다. 지금까지 숫자들의 합 = %d", sum);
        }
    } while (isalpha(ch) || isdigit(ch));
    printf("\n알파벳과 숫자 이외의 문자를 입력하여 종료합니다.");
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

    printf("반복횟수 입력 : ");
    scanf("%d",&num);

    for(int i = 0;i<num;i++){
        printf("\n문자입력 : " );
        ch = getche();
        if (abs(((tolower(ch) -'a') - ('m'-'a'))) < de){
            de = abs(((tolower(ch) -'a') - ('m'-'a')));
            c = tolower(ch);
        }
    }
    printf("\nm과 가장 가까운 문자는 = %c",c);

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