#include <stdio.h>

int main(){
    // 반복문
    // 실행문을 반복해서 실행하는 문자

    #pragma region while문
    //while문
    // <문법>
    // while([논리 값])
    // [실행문] 1개

    // 1. [논리 값] 확인
    // 2. [논리 값]이 참이면 [실행문] 실행. 거짓이면 종료
    // 3. [실행문]을 실행한 후, 1.로 돌아가 반복

    int number = 1;
    while(number <=10){
        printf("number = %d\n",number);
        number++;
    }
    #pragma endregion

    #pragma region 문제 1
    // 10~1까지 출력하는 코드
    int num=10;
    while (num >= 1) {
        printf("num = %d\n", num);
        num--;
    }

    #pragma endregion

    #pragma region 문제 2
    // 최소 값(min), 최댓 값(max)를 입력받습니다.
    // 최소 값 이상 ~ 최대 값 이하의 짝수만 출력하는 코드를 작성해주세요
    int min, max;

    printf("최소 값을 입력하세요: ");
    scanf("%d", &min);

    printf("최대 값을 입력하세요: ");
    scanf("%d", &max);

    int num1 = min % 2 == 0 ? min : min + 1; // min이 홀수이면 다음 짝수로 조정
    while (num1 <= max) {
        printf("%d ", num1);
        num1 += 2; // 다음 짝수로 이동
    }
    printf("\n최소 값 : %d, 최대 값 : %d",min,max);

    #pragma endregion

    return 0; 
}