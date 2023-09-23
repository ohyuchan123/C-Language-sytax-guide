#include<stdio.h>

// 전역 변수
// 프로그램 전체에서 사용하는 변수
// 어떠한 함수에도 포함되어 있지 않은 변수
// 프로그램이 시작할 때 생성되고 끝나면 해제

// extern : 다른 파일에 있는 number라는 이름의 전역 변수를 사용하겠다
// external (외부)
// 외부(다른) 파일에 있는 전역 변수를 사용한다! 라는 뜻

// static
// 다른 파일에서 이 파일에 있는 전역 변수를 사용할 수 없도록 제한
// (C++ 에서는 완전히 다른 의미를 가지므로, 그냥 그렇구나 넘어갈 것)
int number;

int main(){
    number = 10;
    printf("number = %d\n",number);

    return 0;
}