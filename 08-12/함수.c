#include<stdio.h>

//1. 함수 선언
//이름 : Add
//반환 데이터 형식 : int
//매개 변수 : int a, int b
int Add(int a, int b);
int Subtract(int a, int b);
int Multiply(int a, int b);
float Divide(int a, int b);

int InputNumber();

int main(){

    #pragma region 함수
    // 함수 : 함(상자, 기계 장치) + 수(숫자)
    // function 기능

    //<문법>
    //1. 함수 선언
    //[반환 데이터 형식] [함수의 이름] ([매개 변수 목록])
    //[]

    //2. 함수 정의
    // [반환 데이터 형식] [함수의 이름] ([매개 변수 목록])
    /*{
        [실행문]들
        return [반환 데이터]
    }
    */

   //3. 함수 호출
   //[함수 이름]([매개 변수 목록]);

    #pragma endregion

    #pragma region 덧셈 함수 사용

    printf("Add : %d\n",Add(10,20));
    printf("subtract: %d\n", Subtract(10, 20));
    printf("multiply: %d\n", Multiply(10, 20));
    printf("divide: %.2f\n", Divide(10, 20));

    int result = getInput();
    printf("result : %d\n", result);

    #pragma endregion
    
    return 0;
}

int Add(int a,int b){
    int result = a + b;
    return result;
}

// 빼기 함수
int Subtract(int a, int b) {
    return a - b;
}

// 곱하기 함수
int Multiply(int a, int b) {
    return a * b;
}

// 나누기 함수
float Divide(int a, int b) {
    if (b != 0) {
        return (float)a / b;
    } else {
        printf("Error: Division by zero!\n");
        return 0;
    }
}

// 정수를 입력받고, 입력한 정수를 반환하는 함수 만들기
int InputNumber(){
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    return num;
}