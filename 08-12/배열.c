#include<stdio.h>

int main(){

    #pragma region 배열
    //배열
    // 여러 개의 저장 공간이 한 줄로 나열되어 이쓴 ㄴ구조

    //<문법>
    // - 배열 만들기(선언)
    // (데이터 형식) (배열의 이름)[(칸 수)];
    // char name[20];
    //name이라는 이름의 문자 데이터 저장 공간 20칸짜리 배열을 만들어라!
    

    // arr 정수 5칸짜리 배열 만들기!
    int arr[5];

    //{} 중괄호를 이용한 초기화
    // 배열을 선언(만들기)했을 때, {}중괄호를 이용한 초기화가 가능합니다.
    int arrary[5] = {1,2,3,4,5};

    printf("1번째 칸 : %d\n", arrary[0]);
    printf("2번째 칸 : %d\n", arrary[1]);
    printf("3번째 칸 : %d\n", arrary[2]);
    printf("4번째 칸 : %d\n", arrary[3]);
    printf("5번째 칸 : %d\n", arrary[4]);

    arrary[2] = 100;

    printf("%d\n",arrary[2]);

    //정수 4527칸 배열을 만들고
    // 만든 배열에 첫번째 칸부터 1 ~ 4527를 넣어줍니다.
    //그 후 첫번째 칸부터 마지막 칸까지 출력해주세요

    int arr[4527];  // 정수 4527칸 배열 선언

    // 배열에 1부터 4527까지의 숫자를 넣어줌
    for (int i = 0; i < 4527; i++) {
        arr[i] = i + 1;
    }

    // 배열의 내용 출력
    for (int i = 0; i < 4527; i++) {
        printf("%d ", arr[i]);
    }

    //학생 10명의 점수를 입력받습니다.
    //10명의 점수를 모두 입력받은 후, 각 학생의 점수를 출력해주세요
    //그 후, 학생 점수 총합, 평균을 출력해주세요

    int score[10];
    int sum = 0;

    //10명의 점수 입력
    for(int i=0;i<10;i++){
        printf("학생의 점수를 입력해주세요 %d : ",i+1);
        scanf("%d",&score[i]);
        sum +=score[i];
    }

    for (int i = 0; i < 10; i++) {
        printf("학생 %d: %d\n", i + 1, score[i]);
    }

    // 학생 점수 총합과 평균을 출력
    float average = (float)sum / 10;  // 평균 계산
    printf("\n총합: %d\n", sum);
    printf("평균: %.2f\n", average);

    #pragma endregion

    return 0;
}