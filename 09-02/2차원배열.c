#include <stdio.h>

//2차원 배열
// 배열 : 여러 개의 저장 공간이 나열되어 있는 구조
// 2차원 배열 : 여러 개의 배열이 나열되어 있는 구조

//<문법>
// (데이터 형식)(배열의 이름)[(줄 수)][(칸 수)]);
// ex. float arr[5][10];
// arr이라는 이름의 실수 데이터 저장 공간 10칸짜리 5줄의 2차원 배열

// 포인터 배열
// 여러 개의 포인터 나열되어 있는 구조
// <문법>
// (데이터 형식)* (배열의 이름)[칸 수];
// char* textArr[3]

// 이중 포인터
// 포인터의 포인터
// 저장 공간의 주소를 저장하는 저장 공간의 주소를 저장하는 저장 공간
// <문법>
// [데이터 형식] ** [포인터의 이름];

// 함수의 매개 변수
// 일번적인 함수의 매개 변수로느 다른 함수에 있는 변수의 데이터를 변경할 수 없음
// 포이터 매개 변수를 통해서 다른 함수에 있는 변수의 데이터를 변경할 수 있음

// 이중 포인터의 특징.
// 포인터 매개 변수를 통해서 다른 함수에 있는 '포인터'의 데이터를 변경할 수 없음
// 이중 포인터 매개 변수를 통해ㅑ서 다른 함수에 있는 '포인터' 

// 포인터의 데이터를 서로 변경하는 함수 만들기
void Swap_ptr(int** a, int** b){
    int* temp = *a;
    *a = *b;
    *b = temp;
};

int main(){
    #pragma region 2차원 배열
        // //arr이라는 이름의 정수 3칸짜리 8줄 배열 만들기
        // int arr[8][3];

        // //arr 배열의 2번째 줄 3번째 칸에 48를 대입
        // // arr[1][2] = 48;
        // // printf("arr[1][2] = %d\n",arr[1][2]);

        // //arr 배열에 1 ~ 24까지 대입하고, 모든 요소를 출력
        // int value = 1;

        // // 배열에 1부터 24까지의 값을 대입
        // for (int i = 0; i < 8; i++) {
        //     for (int j = 0; j < 3; j++) {
        //         arr[i][j] = value;
        //         value++;
        //     }
        // }

        // // 배열 요소 출력
        // printf("배열 요소 출력:\n");
        // for (int i = 0; i < 8; i++) {
        //     for (int j = 0; j < 3; j++) {
        //         printf("%4d ", arr[i][j]); // 각 요소를 출력하고 네 칸을 확보하여 정렬
        //     }
        //     printf("\n"); // 각 행을 출력한 후 줄 바꿈
        // }
    #pragma endregion
    
    #pragma region _2차원 배열의 특징
    // 다차원 배열의 모든 저장 공간은
    //일자로 나열되어 있다.
    // int arr1[2][3] = {{1,2,3},{6,7,8}};
    // int* pNum = arr1;

    // for(int i=0;i<6;i++){
    //     printf("pNum[%d] = %d\n",i,pNum[i]);
    // }
    #pragma endregion
    
    #pragma region 포인터 배열
    // int* pArr[3];
    // int arr1[5] = {1,2,3,4,5};
    // int arr2[3] = {6,7,8};
    // int arr3[4] = {9,10,11,12};

    // pArr[0] = arr1;
    // pArr[1] = arr2;
    // pArr[2] = arr3;

    // for(int i=0;i<3;i++){
    //     for(int j=0; j<3; j++){
    //         printf("pArr[%d][%d] = %d\n",i,j,pArr[i][j]);
    //     }
    // }

    // 포인터 배열 vs 2차원 배열
    // 메모리 구조의 차이
    // 2차원 배열 : 모든 저장 공간이 일자론 나열되어 있음
    // 포인터 배열 : 각 배여이 일자로 나열되어 있지 않을 수 있음(99.99%)
    #pragma endregion
    
    #pragma region 이중 포인터
        // int num = 10;
        // int* pNum = &num;
        // int** ppNum = &pNum;

        // printf("ppNum = %p\n",ppNum);
        // printf("*ppNum = %p\n",*ppNum);
        // printf("**ppNum = %d\n",**ppNum);
    #pragma endregion
    
    #pragma region 포인터의 데이터를 서로 변경하는 함수 만들기
    int a = 10, b = 20;
    int* pA = &a, *pB = &b;

    printf("<변경 전>\n");
    printf("a = %d, b = %d\n", a, b);
    printf("a = %d, b = %d\n", *pA, *pB);

    // 포인터가 가리키는 값을 서로 교환하는 함수 호출
    Swap_ptr(&pA, &pB);

    printf("<변경 후>\n");
    printf("a = %d, b = %d\n", a, b); // a와 b는 변경되지 않음
    printf("a = %d, b = %d\n", *pA, *pB);

    return 0;
}