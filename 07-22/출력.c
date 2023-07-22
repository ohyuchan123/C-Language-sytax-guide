#include <stdio.h>//include : 포함하다
// stdio.h : std(standard 표준) + io(input/output 입력/출력 입출력)
// = 표준 입출력 기능
// 표준 입출력 기능을 포함한다. (= 표준 입출력 기능을 사용하겠다!)

int main(){//main : 실행부
    #pragma region 출력
    // printf([출력하고 싶은 내용]) : print(출력) : 출력 기능
    // ""(큰 따옴표) : 텍스트를 작성할 때 사용.
    // \n : 줄바꿈 문자
    printf("Hello World!\n");
    printf("Hello World!");
    #pragma endregion

    return 0;
}

