#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <ctype.h>

void ex_01(){
    int num;

    printf("������ �Է��ϼ��� " );
    scanf("%d",&num);

    if(num > 0 ){
        printf("����Դϴ�.");
    }
    else if (num<0){
        printf("�����Դϴ�.");
    }
}
void ex_02(){
    int num;

    printf("������ �Է��ϼ��� " );
    scanf("%d",&num);

    switch((num/2)>10){
        case 1:
            printf("OK");
            break;
        case 0:
            printf("NOK");
            break;
    }
}
void ex_03(){
    double num, sum = 0;

    while(1){
    printf("������ �Է��ϼ��� " );
    scanf("%lf",&num);
    if(num < -100 || num >100){
        break;
    }
    sum = sum + num;
    }
    printf("-100�̻� 100������ ���ڵ��� �� = %.2lf",sum);
}
void ex_04(){
    char ch;

    printf("���ڸ� �Է��ϼ��� :" );
    while(1){
        ch = getche();
        if(tolower(ch) == 'q'){
            break;
        }
    }
}
void ex_05(){
    int num, bit, sum = 0,place = 1;

    printf("������ �Է��ϼ��� :" );
    scanf("%d",&num);

    for(int i=num;i>0;i=i/2){
        bit = (i&1) * place;
        sum += bit;
        place *= 10;
    }
    printf("2������ = %d",sum);
    
}
void ex_06(){
    int num, bit, sum = 0,place = 1,count =0;

    printf("������ �Է��ϼ��� :" );
    scanf("%d",&num);

    for(int i=num;i>0;i=i/2){
        bit = (i&1) * place;
        if((i&1) == 1){
            count++;
        }
        sum += bit;
        place *= 10;
    }
    printf("2������ ���� �� 1�� ��Ÿ���� Ƚ�� = %d",count);
    
}
void ex_07(){
    int num,count = 0;

    while(1){
    printf("������ �Է��ϼ��� :" );
    scanf("%d",&num);
        if(num >= 10 ){
          break;
        }
    }

    for(int i = 2;i <= num;i++){
        if(i%2==0){
            continue;
        }
        else if(i%3==0){
            continue;
        }
        else if(i%5==0){
            continue;
        }
        else if(i%7==0){
            continue;
        }
        else {
            printf("%d%c",i,((++count)%10)? ' ': '\n');
        }
    }
}
void ex_08(){
    char ch;
    int count = 0;

    do{
    printf("\n���ĺ� �Է� : ");
    ch = getche();
    }while(!(isalpha(ch)));

    printf("\n");
    for(toupper(ch); toupper(ch) <='Z'; ch++){
        printf("%c%c",toupper(ch),((++count)%5)? ' ': '\n');
    }  
}
void ex_09(){
    char ch;

    do{
    printf("\nk������ ���ĺ� �Է�(q�� ����,k�̻��� �ٽ� �Է�) : ");
    ch = getche();
        if(ch >= 'a' && ch <='k'){
            printf("\n");
            for (char i = 'a';i<=ch;i++){
                printf("%c",i);
            }
        }
        else{
            if(ch=='q'){
                break;
            }
        }
    }while(ch >= 'a' && ch <='z');
    printf("\nq�Է����� ����");  
}
void ex_10(){
    char ch;
    int sum = 0;

    do{
        printf("\n�����Է�(���ĺ��� ���� �̿��� ���� �Է� �� ����) : ");
        ch = getche();
        if(ch>='a'&& ch<='z'){
            printf("\n�ҹ����Դϴ�.");
        }
        else if(ch>='A'&& ch<='Z'){
            printf("\n�빮���Դϴ�.");
        }
        else if (ch >= '0' && ch <='9'){
            sum = sum + (ch - '0');
            printf("\n�����Դϴ�.���ݱ��� ���ڵ��� �� = %d",sum);
        }
    }while( isalpha(ch) || (ch >= '0' && ch <='9'));
    printf("\n���ĺ��� ���� �̿��� ���ڸ� �Է��Ͽ� �����մϴ�.");

}
int main(void){
    // ex_01();
    // ex_02();
    // ex_03();
    // ex_04();
    // ex_05();
    // ex_06();
    // ex_07();
    // ex_08();
    // ex_09();
    ex_10();
    return 0;
}