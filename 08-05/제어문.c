#include<stdio.h>

int main(){
    #pragma region switch case
    int a;
    scanf("%d", &a);
    if(a == 0){
        printf("0");
    }
    else if(a == 1){
        printf("1");
    }
    else if(a == 2){
        printf("2");
    }
    else if(a == 3){
        printf("3");
    }
    
    // // ...(a == 10까지 계속 쓴다)...

    //너무 불편하겠지요? 그래서 switch-case 문이 생긴 것입니다.
    
    int b;
    scanf("%d", &b);
    switch(b){ // 변수 a를 조사한다
        case 1:
            printf("1");
            break;
        case 2:
            printf("2");
            break;
        // ...(10까지 계속 쓴다)
        default: //만약 case문의 [값]들 중 같은 값이 없을 경우
        // default 아래에 있는 모든 [실행문]을 실행
        // 단, break 문을 만나면 종료,
            printf("default");
            break;
    }

    //이렇게 쓰면 a에 대한 조건식을 일일이 다 쓸 필요가 없습니다. 
    //switch(a)라고 하면 괄호 안 a라는 변수의 값을 조사한다는 
    //뜻이 되고(굳이 변수가 아니여도 됩니다. 값을 가지고 있는 무엇이든 됩니다), 
    //case n: 은 '만약 a가 n일 때'와 같은 의미가 됩니다. 단, case문은 switch 문 안 중괄호의 들여쓰기를 무시합니다. 
    //콜론: 다음 줄에는 명령어를 쓰고, 다 끝났으면 break;를 씁니다. break는 이 switch 문에서 나간다는 뜻이 됩니다. 
    //만약 break를 쓰지 않는다면 계속 switch 문 안에서 끝까지 가겠죠.
    #pragma endregion

    #pragma region 등 수(rank) 입력(switch case)
    int rank = 0;
    scanf("%d",&rank);
    switch (rank)
    {
        case 1:
            printf("금메달");
            break;
        case 2:
            printf("은메달");
            break;
        case 3:
            printf("동메달");
            break;
        default:
            if(rank>=4){
                printf("아쉽네요! 다음에 도전하세요");
            }printf("잘못된 입력입니다.");
            break;
    }
    #pragma endregion

    return 0;
}