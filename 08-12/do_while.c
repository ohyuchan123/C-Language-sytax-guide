#include<stdio.h>

int main(){

    //<문법>
    /*do
    [실행문] 1개
    while([논리 값]);
    
    1. [실행문] 실행
    2. [논리 값] 확인
    3. [논리 값]이 참이면 1.로 돌아가 반복, 거짓이면 종료*/

    #pragma region do while
    do{
        printf("do ~ while : 안녕하세요!");
    }while (0);{
        printf("while : 안녕하세요!");
    }
    
    #pragma endregion

    return 0;
}