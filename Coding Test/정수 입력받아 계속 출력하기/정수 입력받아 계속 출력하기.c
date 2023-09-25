#include <stdio.h>

/* 정수 입력받아 계속 출력하기
n개의 정수가 순서대로 입력된다.

n개의 입력된 정수를 순서대로 출력해보자.

while( ), for( ), do~while( ) 등의 반복문을 사용할 수 없다.

입력
첫 줄에 정수의 개수 n이 입력되고,
두 번째 줄에 n개의 정수가 공백을 두고 입력된다.

입력 예시
5
1 2 3 4 5

출력 예시
1
2
3
4
5
*/

int main(){

    int n; //입력될 정수의 개수
    int number; // n개의정수가 공백을 두고 입력된다
    scanf("%d",&n);

    reload:
        scanf("%d",&number);
        printf("%d\n",number);
        if(--n!=0) goto reload;
    return 0;
}