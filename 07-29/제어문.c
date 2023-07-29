#include<stdio.h>

int main(){
    #pragma region 제어문 if문, else문
    //실행문을 실행할 지 안 할 지 제어하는 문장
    //프로그램의 실행 흐름

    //if : 만약에
    //<문법>
    // if([논리 값])
    // [실행문] 1개
    //
    // [논리 값]이 참이면 [실행문] 실행. 거짓이면 실행하지 않음

    int number = 0;
    if(number < 10){
        printf("%d는 10보다 작다.\n",number);
    }

    //else 문
    //<문법>
    //else
    //[실행문 1개]
    // 반드시 if문과 함께 사용
    // if문의 [논리 값]이 거짓이면 else 아래의 [실행문] 실행
    // 참이면 실행하지 않음

    if(number < 10){
        printf("%d는 10보다 작다.\n",number);
    }else{
        printf("%d는 10보다 크거나 같다.\n",number);
    }
    #pragma endregion
    return 0;
}