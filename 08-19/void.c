#include <stdio.h>

// void : 비어있는, 진공, 공허, 텅 빈
// 한수의 매개 변수, 반환 데이터 형식에 사용할 수 있다.

// void 매개변수 : 매개 변수가 없다.
// void 변환 데이터 형식 : 반환 데이터가 없다.
// 반환 데이터 형식이 void일 경우, return을 생략할 수 있다.

void Test();

int main(){
    Test();
}

void Test(){
    printf("void 매개변수는 반환 값이 없다 입니디.\n");
}