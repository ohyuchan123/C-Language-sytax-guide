#include <stdio.h>

int main(){

    // 2단 출력
    int number =2;
    for(int i=1;i<=9;i++){
        printf("2단 출력");
        printf("%d * %d = %d\n",number,i,number*i);
    }

    //2단 ~ 9단까지 출력
    printf("\n2단 ~ 9단 출력\n");
    for(int i=2;i<=9;i++){
        for(int j=1;j<=9;j++){
            printf("%d * %d = %d\n",i,j,i*j);
        }
    }

    return 0;
}