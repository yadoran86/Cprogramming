#include <stdio.h>
#include <conio.h>
void ex01(){
    FILE *fp;
    char ch;

    fp = fopen("chars.txt","w");

    printf("문자입력('q' 이면 종료) : ");

    do {
        ch = getche();

        if(ch == 'q') break;

        fprintf(fp,"%c",ch);
    } while(1);
    printf("\nchars.txt 파일에 저장했습니다.");

    fclose(fp);
}
void ex02(){
    FILE *fp;
    char ch;

    fp = fopen("chars.txt","r");

    printf("\nchars.txt 파일을 읽습니다.\n");

    do {
        fscanf(fp,"%c",&ch);
        if(feof(fp)) break;
        printf("%c",ch);//feof 체크 이후에 읽기. 아니면 마지막 문자가 두번출력됨
    } while(1);

    fclose(fp);
}
void ex03(){
    FILE *fp;
    char str[50];

    fp = fopen("string.txt","w");

    do {
        printf("문자열 입력 : ");
        gets(str);
        if(str[0] == '\0') break;

        fwrite(str,sizeof(str),1,fp);
    } while(1);
    printf("\nstring.txt 파일에 저장했습니다.");

    fclose(fp);
}
void ex04(){
    FILE *fp;
    char str[50];

    fp = fopen("string.txt","r");

    printf("\nstring.txt 파일을 읽습니다.\n");

    do {
        fread(str,sizeof(str),1,fp);
        if(feof(fp)) break;
        printf("%s\n",str);
    } while(1);
    

    fclose(fp);
}
void ex07(){
    FILE *fp;
    double doo[5] = {1.1, 2.2, 3.3, 4.4, 5.5};

    for(int i=0;i<sizeof(doo)/sizeof(double);i++){
    printf("%lf ",doo[i]);
    }

    fp = fopen("doubles.data","wb");
    if(fp == NULL) {
        printf("Cannot open file \n");
        return;
    }

    printf("\ndoubles.data를 열었습니다.\n");
    
    fwrite(doo,sizeof(doo),1,fp);
    if(ferror(fp)){
        printf("file write error\n");
        return;
    }

    printf("\ndouble형 배열의 내용을 출력했습니다.\n");

    fclose(fp);
}
void ex08(){
    FILE *fp;
    double doo[5],one;

    fp = fopen("doubles.data", "rb"); //파일 열기
    if(fp == NULL) {//오류 체크
        printf("Cannot open file \n");
        return;
    }
    printf("\ndoubles.data를 열었습니다.\n");

    fread(doo,sizeof(doo),1,fp);//파일 읽기
    if(ferror(fp)){//오류 체크
        printf("file read error\n");
        return;
    }

    for(int i=0;i<sizeof(doo)/sizeof(double);i++){//파일 출력
        printf("%.1lf ",doo[i]);
    }
    printf("\ndouble형 배열의 내용을 출력했습니다.\n");
    printf("\nftell = %d\n",ftell(fp));

    printf("\ndoubles.data의 마지막 데이터에 접근합니다.\n");
    fseek(fp, -8, SEEK_END);//마지막 데이터 접근
    printf("\nftell = %d\n",ftell(fp));

    fread(&one,sizeof(one),1,fp);
    printf("\n마지막에 저장된 double값 = %.1lf\n",one);
    fclose(fp);
}
struct fruit{
    char name[20];
    double price;
    int sales;
};
typedef struct fruit fruit;
void input_datas(fruit *p,int len){
    for(int i=0; i<len ; i++){
        printf("과일종류 : ");
        gets((p+i)->name);

        printf("단가 : ");
        scanf("%lf", &(p+i)->price);

        printf("판매량 : ");
        scanf("%d", &(p+i)->sales);

        while(getchar() != '\n');
        puts("");
    }
}
void print_datas(fruit *p,int len){
    printf("============================\n");
    printf("과일\t단가\t판매량\n");
    printf("============================\n");
    for(int i=0;i<len;i++){
        printf("%s\t%.2lf\t%d\n",(p+i)->name,(p+i)->price,(p+i)->sales);
    }
    printf("============================\n");
}
void write_file(fruit *datas,int len,char *argv){
    FILE *fp;
    fp = fopen(argv,"wb");
    fwrite(datas, sizeof(datas),1,fp);
    fclose(fp);
}
void read_file(fruit *datas,int len,char *argv){
    FILE *fp;
    fp = fopen(argv,"rb");
    fread(datas,sizeof(datas),1,fp);
    fclose(fp);
}
int total_amount(fruit *p,int len){
    int total = 0;
    for(int i=0;i<len;i++){
        total += (p+i)->price * (p+i)->sales;
    }
    return total;
}
void ex09(int argc,char *argv[]){
    fruit datas[3];
    
    int len = sizeof(datas)/sizeof(fruit);

    input_datas(datas,len);
    puts(">>After input_datas");
    print_datas(datas,len);
    
    write_file(datas,len,argv[1]);

    read_file(datas,len,argv[1]);
    puts(">>After read_file");
    print_datas(datas,len);

    int total = total_amount(datas,len);
    
    printf("총 판매금액 = %d\n",total);
}
int main(int argc,char *argv[]){
    //ex01();
    //ex02();
    //ex03();
    //ex04();
    //ex07();
    //ex08();
    ex09(argc,argv); //+ ex10
    return 0;
}