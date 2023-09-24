#include<stdio.h>

/* 문제 설명
정수가 순서대로 입력된다.
(단 개수는 알 수 없다)

0이 아니면 입력된 정수를 출력하고, 0이 입력되면 출력을 중단해보자
while(), for() do~while() 등의 반복문을 사용할 수 없다.

(참고)
goto 명령문을 사용하면 간단한 반복 실행을 만들 수 있다.
반복 실행 부분을 빠져나오기 위해(즉 무한 반복을 방지하기 위해)
반복 실행 되는 도중에 조건을 검사해야 한다
*/

int main(){

    int number;
reload: // 입력된 number가 0이 아닌지 맞는지 확인하는 goto
    scanf("%d",&number);

    if(number!=0){
        printf("%d\n",number);
        goto reload;
    }

    return 0;
}