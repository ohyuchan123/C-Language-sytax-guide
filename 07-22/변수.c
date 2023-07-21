#include <stdio.h>

int main(){

    #pragma region 변수
    //변수 : 변하는 숫자. 예기치 못한 사건
    //프로그래밍에서의 변수 : 어떤 데이터를 저장하는 저장 공간.(메모리)

    //데이터 형식(자료형)
    //메모리의 크기가 클 수록 더 많은 숫자를 표현할 수 있고 더 정확하다.
    // - 정수(−32,767~32,767 즉, 소수점이 없는 숫자) : int(4바이트), short(2바이트), long(8바이트), long long(8바이트)
    //      int : integer(정수) 4바이트
    // - 실수(소수점이 있는 숫자 : float(4바이트), double(8바이트)
    //      float : float(뜨다, 부(뜨다)동 소수점 방식). 4바이트
    // - 문자 : char
    //      char : character(문자). 1바이트

    #pragma endregion

    #pragma region 변수 만들기(선언)
    // <문법> 
    // [데이터 형식][변수의 이름];
    // ex int number; //number라는 이름에 4바이트 크기의 정수 데이터 저장 공간을 만들었다.
    // 자징 공간을 처음 만들면 그 저장 공간 안에는 '쓰레기 값'이 들어 있다.
    // '쓰레기 값' : 쓸모없는 데이터.

    // 변수에 데이터 넣기
    // 변수에 최초로 데이터를 대입 : 변수 초기화
    // ex. int number = 10; //number라는 저장 공간에 10이라는 정수 데이터를 대입
    // 대(대신)입하다 : 

    int number = 10;

    // %d : 정수 변환 문자
    printf("number = %d\n",number);
    #pragma endregion

    #pragma region 대입

    int number_1;
    number_1 = 10; //number라는 저장공간에 10을 대입한다.
    number_1 = 48; //number라은 저장공간에 48을 대입한다.

    number_1 = number_1 + 4;
    printf("number = %d\n",number_1);

    #pragma endregion

    #pragma region 변수 출력
    // 이름, 나이, 키 몸무게 출력
    char name[20] = "홍길동"; //배열
    int age = 19;

    //소수점 숫자
    // 소수점 숫자 뒤에 f를 붙임 : float
    // 소수점 숫자 뒤에 f를 붙이지 않음 : double
    // ※ 데이터 형식이 일치하지 않으면, 자동으로 변환이 일어난다.
    // (컴퓨터가 변환 작업을 더 하기 때문에 느려진다.)

    /*
        ex) float height = 180.5f;
    */
    double height = 180.5 ,weight = 68.7;

    printf("나의 이름은 %s 이고 현재 나이는 %d살이야\n",name,age);
    printf("현재 나의 키는 %.2lfcm 이고 몸무게는 %.2lfkg 이야.",height,weight);

    /* <변환 문자>
        %d : 정수 변환 문자
        %f : 실수 변환 문자
        %lf : 실수 변환 문자
            %.2f : 소수점 2번째 자리까지 출력
        %c : 문자 변환 문자
        %s : 문자열 변환 문자
    */
    #pragma endregion

    #pragma region 매크로 상수
    //define은 변수와 비슷한데, 이건 '상수'라고 보시면 됩니다. 
    //절대 바꿀 수 없습니다.

    #define A 10
    // 이렇게 하면 A가 10으로 정해진 거에요. 
    //그 누구도 바꿀 수 없습니다(저 코드를 바꾸지 않고 외부에서 바꾼다는 뜻이다.)
    #pragma endregion

    #pragma region cast 연산자
    //cast 연산자는 변수의 형태를 임시적으로 변환하는 함수입니다.

    //printf에서 말했듯이, "123456"은 컴퓨터에서 문자로 취급합니다. 
    //이 때, printf("%c", 9);를 하면 '9'가 나오는 것이 아니라, 
    //다른 이상한 문자가 나오지요? 이것은 9는 따옴표가 안 붙어 있어서 ASCII 코드로 인식되는 것입니다. 
    //이때는 cast연산자를 쓰면 되는데, 간단합니다.
    int a = 65;
    printf("%c", (char)a);
    // result: A
    #pragma endregion

    return 0;
}