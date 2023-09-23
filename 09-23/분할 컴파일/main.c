#include<stdio.h>
#include "Math.h"
// 헤더 파일을 포함 시
// 사용자가 직접 만든 헤더 파일의 경우, <>가 아닌 ""사용

// 분할 컴파일.
// 코드를 여러 개의 파일로 나누어서 작성하는 것.

// <파일의 종류>
// - 헤더 파일(.h) : 선언부. 구조체, 함수 등등을 선언하는 곳.
// - 소스 파일 : 정의*(구현)부 : 함수의 정의를 작성하는 곳

int main(){

    int result = Add(10,20);
    printf("result = %d\n",result);

    result = Sub(10,20);
    printf("result = %d\n",result);
}