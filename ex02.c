#include <stdio.h>

void ex_01(){
    char c1, c2;
    c1 = '1';
    c2 = 1;
    printf("c1 = %c, c2 = %c\n", c1,c2);

}
void ex_02(){
    char c1, c2, c3, c4;
    c1 = 'a';
    c2 = 'A';
    c3 = '0';
    c4 = '1';
    printf("('a' - 'A' ) = %d\n",c1-c2);
    printf("('0' - '1' ) = %d",c3-c4);

}
void ex_03(){
    int in;
    printf("정수입력 : ");
    scanf("%d",&in);
    printf("8진수 = %#0o , 10진수 = %d , 16진수 = %#0x",in,in,in);
}
void ex_04(){
    char in;
    printf("정수입력 : ");
    scanf("%c",&in);
    printf("8진수 = %#0o , 10진수 = %d , 16진수 = %#0x",in,in,in);
}
void ex_05(){
    double num;
    printf("실수를 입력하세요 : ");
    scanf("%lf",&num);
    printf("입력하신 실수를 소수 한자리만 출력하면 : %.1lf", num);
}
void ex_06(){
    double mid,last,sum,avg;
    printf("중간고사 성적 입력 : ");
    scanf("%lf",&mid);
    printf("기말고사 성적 입력 : ");
    scanf("%lf",&last);

    sum = mid+last;
    avg = sum / 2;
    printf("합 = %.3lf\n평균 = %.3lf", sum,avg);
}
#define PI 3.141592
void ex_07(){
    double r;
    printf("원반지름 입력 : ");
    scanf("%lf",&r);

    printf("원반지름: %.2lf\n원면적: %.2lf\n원둘레: %.2lf\n",r,PI*r*r,2*PI*r);
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
