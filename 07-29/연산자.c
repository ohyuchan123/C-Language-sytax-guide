#include<stdio.h>

int main(){
    #pragma region 연산자
    //연산자 
    // 사칙 연산 : +, -, *(곱하기), /(나누기), %(나머지)
    // & 주소 연산자
    // = 대입 연산자


    // 연산자의 종류
    // ※ 앞으의 숫자는 연산 우선 순위를 나타냄

    // 1. 1차 연산자 : (), [] ->
    //    () : () 괄호 안에 있는 내용을 가장 먼저 연산
    // 2. 단항 연산자 : -, ++, --, !, sizeof(), ~, *
    // 3 - 4. 산술 연산자 : +, -, *, /, %
    // 5. 비트 이동 연산자 : <<, >>
    // 6. 관계 연산자 <, >, <=, >=
    // 7. 동등 연산자 : ==, !=
    // 8 - 10. 비트 연산자 : |, ^, &
    // 11 - 12. 논리 연산자 &&, ||
    // 13. (삼항)조건 연산자 : ?:
    // 14. 대입 연산자 : =, +=, -=, *=. /= ...
    // 15. 콤마 연산자 : ,
   #pragma endregion

    #pragma region 1차 연산자
       // 1. 1차 연산자 : (), [] ->
    //    () : () 괄호 안에 있는 내용을 가장 먼저 연산
    #pragma endregion

    #pragma region 단항 연산자
    // 2. 단항 연산자 : -, ++, --, !, sizeof(), ~, *
    // 항이 1개인 연산자
    
    #pragma region 부호 연산자
    //-,+ (부호 연산자) : 부호를 반대로 바꿔주는 연산자(양수 -> 음수, 움수 -> 양수
    int c = 15;
    int d = -c; // d는 -15가 됨
    #pragma endregion

    #pragma region 증감 연산자
    //++, --(증감 연산자)) : (증가/감소) 연산자 피연산자의 값을 1 (증가/감소) 시킵니다.
    int number = 10;
    printf("<연산 전>\n");
    printf("number %d\n",number);

    number++; 

    printf("<연산 후>\n");
    printf("number %d\n",number);
    #pragma endregion

    #pragma region 논리 부정 연산자
    //! (논리 부정 연산자) : 피연산자의 논리 값을 반대로 변경합니다.
    int x = 1;
    int y = 0;
    int result1 = !x; // result1은 0 (false)가 됨
    int result2 = !y; // result2은 1 (true)가 됨 1(0이 아닌 숫자)
    printf ("!0 = %d\n",result1);
    printf ("!0 = %d\n",result2);
    #pragma endregion

    #pragma region 비트 단위 부정 연산자
    //~ (비트 단위 부정 연산자) : 피연산자의 비트를 모두 반전시킵니다.
    unsigned int e = 10; // 0000 1010 (2진수)
    unsigned int result3 = ~e; // 1111 0101 (2진수), 245 (10진수)
    #pragma endregion

    #pragma region 크기 지정 연산자
    //sizeof (크기 지정 연산자) : 피연산자의 크기를 바이트 단위로 반환합니다.
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr); // size는 배열 arr의 전체 크기를 바이트 단위로 나타냄
    #pragma endregion

    #pragma region 포인터 연산자
    //* (포인터 연산자) : 포인터 변수를 선언할 때 사용하며, 해당 주소에 있는 값을 참조합니다.
    int value = 42;
    int *ptr = &value; // ptr은 value의 주소를 가리키는 포인터
    int result4 = *ptr; // result4는 42, ptr이 가리키는 주소의 값을 가져옴
    printf("result4 = %d", result4); // -> 42 출력
    #pragma endregion

    #pragma endregion

    #pragma region 산술 연산자
    // 3 - 4. 산술 연산자 : +, -, *, /, %

        #pragma region + 덧셈 연산자
        //덧셈 연산자 (+): 두 피연산자를 더합니다.
        int a = 5;
        int b = 10;
        int sum = a + b; // sum은 15가 됨

        #pragma endregion
        
        #pragma region - 뺄셈 연산자
        //뺄셈 연산자 (-): 첫 번째 피연산자에서 두 번째 피연산자를 뺍니다.

        int c = 20;
        int d = 7;
        int difference = c - d; // difference는 13이 됨

        #pragma endregion
        
        #pragma region * 곱셈 연산자
        //곱셈 연산자 (*): 두 피연산자를 곱합니다.
        int e = 4;
        int f = 3;
        int product = e * f; // product는 12가 됨

        #pragma endregion
        
        #pragma region / 나눗셈 연산자
        //나눗셈 연산자 (/): 첫 번째 피연산자를 두 번째 피연산자로 나눕니다.
        int g = 20;
        int h = 5;
        int quotient = g / h; // quotient는 4가 됨

        //</ 나누기>
        //[정수] / [정수] = [정수 몫]
        //[실수] / [정수] = [실수 몫]
        //[정수] / [실수] = [실수 몫]
        //[실수] / [실수] = [실수 몫]

        #pragma endregion
        
        #pragma region % 나머지 연산자
        //나머지 연산자 (%): 첫 번째 피연산자를 두 번째 피연산자로 나눈 후의 나머지를 반환합니다.
        int i = 17;
        int j = 5;
        int remainder = i % j; // remainder는 2가 됨 (17을 5로 나눈 나머지)

        #pragma endregion


    #pragma endregion

    #pragma region 비트 이동 연산자
   // 5. 비트 이동 연산자 : <<, >>
   //비트 이동 연산자 <<와 >>는 C 언어에서 비트를 왼쪽으로 이동 또는 
   //오른쪽으로 이동시키는 연산자입니다. 이 연산자들은 정수형 변수에 대해 사용됩니다. 
   //비트 이동 연산자는 이동할 비트 수만큼 피연산자의 비트들을 이동시킵니다.

    #pragma region 왼쪽 시프트 연산자

    //왼쪽 시프트 연산자 <<: 피연산자의 비트들을 왼쪽으로 이동시킵니다. 
    //이동된 비트는 0으로 채워집니다.
    int num = 8; // 0000 1000 (2진수)

    // 왼쪽으로 2비트 이동
    int result1 = num << 2; // 0010 0000 (2진수), 32 (10진수)

    printf("결과1: %d\n", result1); // 결과1: 32
   #pragma endregion
    
    #pragma region 오른쪽 시프트 연산자
    //오른쪽 시프트 연산자 >>: 피연산자의 비트들을 오른쪽으로 이동시킵니다. 
    //이동된 비트는 부호비트(양수의 경우 0, 음수의 경우 1) 또는 0으로 채워집니다.
    int num = -16; // 1111 0000 (2진수)

    // 오른쪽으로 3비트 이동
    int result2 = num >> 3; // 1111 1110 (2진수), -2 (10진수)

    printf("결과2: %d\n", result2); // 결과2: -2
    #pragma endregion 
   #pragma endregion 
    
    #pragma region 관계 연산자 <, >, <=, >=
   // 관계 연산자 <, >, <=, >=
   // 크기 비교
   // 관계 연산자의 결과 값은 논리 값
   int a = 5;
    int b = 10;

    // 작다 (<)
    if (a < b) {
        printf("a는 b보다 작습니다.\n");
    } else {
        printf("a는 b보다 크거나 같습니다.\n");
    }

    // 크다 (>)
    if (a > b) {
        printf("a는 b보다 큽니다.\n");
    } else {
        printf("a는 b보다 작거나 같습니다.\n");
    }

    // 작거나 같다 (<=)
    if (a <= b) {
        printf("a는 b보다 작거나 같습니다.\n");
    } else {
        printf("a는 b보다 큽니다.\n");
    }

    // 크거나 같다 (>=)
    if (a >= b) {
        printf("a는 b보다 크거나 같습니다.\n");
    } else {
        printf("a는 b보다 작습니다.\n");
    }
   #pragma endregion
   
    #pragma region 동등 연산자 : ==, !=
    //동등 연산자 : ==, !=
    //C 언어에서 동등 연산자 == (equal to)와 != (not equal to)는 
    //두 개의 값을 비교하여 결과가 참 또는 거짓인지를 판단하는 연산자입니다. 
    //두 값이 서로 같은 경우에는 == 연산자는 참을 반환하고, != 연산자는 거짓을 반환합니다.

    int x = 5;
    int y = 10;

    // 동등 연산자 (==)
    if (x == y) {
        printf("x와 y는 서로 같습니다.\n");
    } else {
        printf("x와 y는 서로 다릅니다.\n");
    }

    // 부등 연산자 (!=)
    if (x != y) {
        printf("x와 y는 서로 다릅니다.\n");
    } else {
        printf("x와 y는 서로 같습니다.\n");
    }
    #pragma endregion
    
    #pragma region 논리 연산자 &&, ||
    // &&(AND) : [논리 값 1] && [논리 값 2]
    // [논리값 1, 2]가 모두 참이면 참, 하나라도 거짓이면 거짓
    //
    // ||(OR) : [논리 값 1] || [논리 값 2]
    // [논리 값 1, 2]중 하나라도 참이면 참, 둘 다 거짓이면 거짓
    #pragma endregion
    
    #pragma region 삼항(조건) 연산자
    int a = 5;
    int b = 10;

    // 삼항 연산자 (조건식 ? 참일 때의 값 또는 표현식 : 거짓일 때의 값 또는 표현식)
    //[논리 값] ? [참일 때의 값] : [거짓일 때의 값]
    int result = (a < b) ? a : b;

    printf("result = %d\n", result);
    #pragma endregion
    
    #pragma region 대입 연산자 : =, +=, -=, *=. /= ...
    int number = 10;
    printf("<연산 전>\n");
    printf("number =  %d\n",number);

    //number +=8;
    // number = number + 8;
    //number/=2;
    // number = number / 2;

    printf("<연산 후>\n");
    printf("number =  %d\n",number);
    #pragma endregion
    
    #pragma region 콤마 연산자
    //가장 마지막에 연산하는 연산자
    //변수 여러 개 선언할 때 사용
    //ex int number1, number2;
    // floast f1 = 5.1f, f2.8.82f
    #pragma endregion
    return 0; 
}