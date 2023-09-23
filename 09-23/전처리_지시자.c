#include<stdio.h>

// 전처리 지시자.

// 코드를 빌드하기 전에 무언가를 처리하는 지시자
// #incldue : 포함하다 -> 헤더 파일(.h)를 포함하는 전처리 지시자
// = 헤더 파일에 있는 모든 내용을 복사/붙여넣기 한다


// #define : 정의하다.
// '코드'에 별명을 붙이는 전처리 지시자
// define [별명][코드]
// 빌드하기 전에 [별명]이 자동으로 [코드]로 변경됨

// #define 함수(매크로 함ㅁ수)
// #define [함ㅁ수 이름][(매캐 변수)] [코드]
// 연산 순서가 변경되지 않도록 ()괄호를 많이 사용한다
// ex. 안 좋은 예시 : ADD(x, y) x + y
// 좋은 예시 : ADD(x,y) ((x) + (y))

// 매크로 함수는 엄밀히 말해서 함수가 아니다
// 함수가 아니라, '코드' 덩어리이다.
// 함수의 경우, 반환 데이터, 매개 변수 등
// 내부적으로 처리해야 하는 것들이 많은 반면,
// 매크로 함수는 단순 '코드' 덩어리이므로, 처리할 것이 없다
// 따라서 일반 함수보다 매크로 함수가 훨씬 빠르다!


#define PI 3.14
#define NAME "홍길동"
#define 출력기능 printf
#define RESULT (10 + 20)

// 매크로 함수
#define ADD(x,y) (x + y)
#define MUL(x,y) ((x) * (y))

// #ifdef, #ifndef, #endif
// ifndef의 n : not
#define 매크로있음?
#define 매크로없음?

// #define에 해당하는 [별명]이 있는지 확인
// <문법>
// #ifdef [별명] (#ifndef [별명])
// [코드]들
// #endif

// [별명]에 해당하는 #define 전처리 지시자가 있으면(없으면)
// [코드]들을 빌드에 포함시킴

// #pragma : 프로그래밍에 필요한 여러가지를 지시하는 지시자

int main(){

    #pragma region define
        출력기능("원주율 : %.2f\n",PI);
        // = printf("원주율 : %.2f\n",3.14f);

        출력기능("이름 : %s\n",NAME);
        // = printf("원주율 : %.2f\n","홍길동");

        출력기능("이름 : %d\n",RESULT);
        // = printf("원주율 : %.2f\n",(10 + 20));
    #pragma endregion

    #pragma region 매크로 함수
        // #define ADD(x, y) x + y
        int result = ADD(10,20);
        printf("ADD(10,20) = %d\n",result);

        result = ADD(10,20) * 4; // 10 + 20 * 4
        printf("ADD(10,20) = %d\n",result);

        result = MUL(10,20); // (10 * 20)
        printf("MUL(10,20) = %d\n",result);

        // #define ADD(x, y) (x * y)
        result = MUL(5+5, 10+10); //(5 + 5 * 10 + 10)
        printf("MUL(10,20) = %d\n",result);
    #pragma endregion

    #pragma region indef
        #ifdef 매크로있음?
        printf("매크로가 있음.");
        #endif

        #ifndef 매크로없음?
        printf("매크로가 있음.");
        #endif
    #pragma endregion

    return 0;
}