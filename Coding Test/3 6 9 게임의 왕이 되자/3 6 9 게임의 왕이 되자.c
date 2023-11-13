/* 1 부터 그 수까지 순서대로 공백을 두고 수를 출력하는데,
3 또는 6 또는 9인 경우 그 수 대신 영문 대문자 X 를 출력한다.*/

#include <stdio.h>

int main(){
    int num;
    scanf("%d",&num);
    for(int i=1;i<=num;i++){
        if(i%3==0){
            printf("X ");
        }else{
            printf("%d ",i);
        }
    }

    return 0;
}