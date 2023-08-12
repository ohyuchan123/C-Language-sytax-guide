#include <stdio.h>

int main(){


    #pragma region 반복문의 break, continue

    //break : 실행문을 실행하는 도중, break를 만나면 즉시 종료

    int number = 1;
    while(1){
        printf("number = %d\n",number);
        if(number == 5){
            break;
        }
        number++;
    }

    //continue (for : 실행문을 실행하는 도중, continue를 만나면 [실행문 2로 이동], 
    //while : 실행문을 실행하는 도중, continue를 만나면 [논리 값]으로 이동)

    //while(continue)
    while (number<=10)
    {
        printf("number = %d\n",number);
        if(number == 5){
            number++;
            continue;
        }
        number++;
    }

    for(int number = 1; number <=10; number++){
        printf("number = %d\n",number);
        if(number == 5){
            continue;
        }
    }
    

    #pragma endregion

    return 0;
}