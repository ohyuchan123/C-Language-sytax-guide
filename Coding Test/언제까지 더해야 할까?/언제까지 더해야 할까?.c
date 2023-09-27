#include<stdio.h>

int main(){
    int result;
    int sum = 1, count = 1;
    scanf("%d",&result); // 55 정수 값을 받는다
    while (1) // sum과 count를 통해서 입력된 정수와 같거나 커졌을 때 종료하는 반복문
    {
        sum = sum + count+1;
        count++;
        printf("%d , %d\n",count,sum);
        if(result <= sum){
            break;
        }
    }
    printf("%d",count);
}