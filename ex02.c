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
    printf("�����Է� : ");
    scanf("%d",&in);
    printf("8���� = %#0o , 10���� = %d , 16���� = %#0x",in,in,in);
}
void ex_04(){
    char in;
    printf("�����Է� : ");
    scanf("%c",&in);
    printf("8���� = %#0o , 10���� = %d , 16���� = %#0x",in,in,in);
}
void ex_05(){
    double num;
    printf("�Ǽ��� �Է��ϼ��� : ");
    scanf("%lf",&num);
    printf("�Է��Ͻ� �Ǽ��� �Ҽ� ���ڸ��� ����ϸ� : %.1lf", num);
}
void ex_06(){
    double mid,last,sum,avg;
    printf("�߰���� ���� �Է� : ");
    scanf("%lf",&mid);
    printf("�⸻��� ���� �Է� : ");
    scanf("%lf",&last);

    sum = mid+last;
    avg = sum / 2;
    printf("�� = %.3lf\n��� = %.3lf", sum,avg);
}
#define PI 3.141592
void ex_07(){
    double r;
    printf("�������� �Է� : ");
    scanf("%lf",&r);

    printf("��������: %.2lf\n������: %.2lf\n���ѷ�: %.2lf\n",r,PI*r*r,2*PI*r);
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
