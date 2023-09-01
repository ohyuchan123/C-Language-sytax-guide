#include<stdio.h>

//문제 : 사용자로부터 숫자를 입력받고, 이 숫자가 1부터 100사이의 범위에 있는지 검사하여
// 범위를 벗어나면 다시 입력을 요청하는 프로그램을 작성하세요

int main(){
    
    int number;

retry: // 1부터 100사이의 범위에 있는지 검사하여 범위를 벗어나면 retry
    printf("숫자를 입력해주세요 : ");
    scanf("%d",&number);

    if(number>=1 && number<=100){
        printf("입력한 양수는 범위 안에 있습니다.\n");
        printf("입력한 양수: %d\n", number);
    }else{
        printf("범위를 벗어났습니다. 다시 입력해 주세요.\n");
        goto retry;
    }
    
    return 0;
}