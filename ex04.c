#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <ctype.h>

void ex_01(){
    int num;

    printf("정수를 입력하세요 " );
    scanf("%d",&num);

    if(num > 0 ){
        printf("양수입니다.");
    }
    else if (num<0){
        printf("음수입니다.");
    }
}
void ex_02(){
    int num;

    printf("정수를 입력하세요 " );
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
    printf("정수를 입력하세요 " );
    scanf("%lf",&num);
    if(num < -100 || num >100){
        break;
    }
    sum = sum + num;
    }
    printf("-100이상 100이하의 숫자들의 합 = %.2lf",sum);
}
void ex_04(){
    char ch;

    printf("문자를 입력하세요 :" );
    while(1){
        ch = getche();
        if(tolower(ch) == 'q'){
            break;
        }
    }
}
void ex_05(){
    int num, bit, sum = 0,place = 1;

    printf("정수를 입력하세요 :" );
    scanf("%d",&num);

    for(int i=num;i>0;i=i/2){
        bit = (i&1) * place;
        sum += bit;
        place *= 10;
    }
    printf("2진수는 = %d",sum);
    
}
void ex_06(){
    int num, bit, sum = 0,place = 1,count =0;

    printf("정수를 입력하세요 :" );
    scanf("%d",&num);

    for(int i=num;i>0;i=i/2){
        bit = (i&1) * place;
        if((i&1) == 1){
            count++;
        }
        sum += bit;
        place *= 10;
    }
    printf("2진수로 만들 때 1이 나타나는 횟수 = %d",count);
    
}
void ex_07(){
    int num,count = 0;

    while(1){
    printf("정수를 입력하세요 :" );
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
    printf("\n알파벳 입력 : ");
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
    printf("\nk이하의 알파벳 입력(q는 종료,k이상은 다시 입력) : ");
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
    printf("\nq입력으로 종료");  
}
void ex_10(){
    char ch;
    int sum = 0;

    do{
        printf("\n문자입력(알파벳과 숫자 이외의 문자 입력 시 종료) : ");
        ch = getche();
        if(ch>='a'&& ch<='z'){
            printf("\n소문자입니다.");
        }
        else if(ch>='A'&& ch<='Z'){
            printf("\n대문자입니다.");
        }
        else if (ch >= '0' && ch <='9'){
            sum = sum + (ch - '0');
            printf("\n숫자입니다.지금까지 숫자들의 합 = %d",sum);
        }
    }while( isalpha(ch) || (ch >= '0' && ch <='9'));
    printf("\n알파벳과 숫자 이외의 문자를 입력하여 종료합니다.");

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