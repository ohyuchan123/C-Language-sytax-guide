#include <stdio.h>

int main(){
    //for문
    //<문법>
    // for([초기 실행문]; [논리 값]; [실행문 2])
    // [실행문 1] 1개

    //1. [초기 실행문] 실행
    //2. [논리 값] 확인
    //3. [논리 값]이 참이면 [실행문 1] 실행. 거짓이면 종료
    //4. [실행문 1]을 실행한 후, [실행문 2]실행
    //5. [실해문 2]를 실행한 후, 2. 로 돌아가 반복

    #pragma region 1~10까지 출력
    // for(int i=1; i<=10; i++){
    //     printf("number = %d\n",i);
    // }
    #pragma endregion

    #pragma region 10~1까지 출력
    // int num;

    // for (num = 10; num >= 1; num--) {
    //     printf("num = %d\n", num);
    // }
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
    for (; num1 <= max; num1 += 2) {
        printf("%d ", num1);
    }
    printf("\n최소 값 : %d, 최대 값 : %d", min, max);

    #pragma endregion
    return 0;
} 