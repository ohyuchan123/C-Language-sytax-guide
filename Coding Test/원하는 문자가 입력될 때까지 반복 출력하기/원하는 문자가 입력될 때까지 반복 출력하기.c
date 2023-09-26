#include<stdio.h>
#include<string.h>

/*문제 조건
'q'가 입력될 때까지 입력한 문자를 계속 출력하는 프로그램을 작성해보자.
*/
int main ()
{
    char c;
    while(c != 'q'){
         scanf(" %c",&c);
         printf("%c\n",c);
 
    }
    return 0;
}