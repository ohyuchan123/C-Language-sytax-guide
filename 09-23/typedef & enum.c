#include <stdio.h>

#pragma region typedef

typedef int INTEGER, INT, *PINTEGER; // int 데이터 형식에 INTEGER라는 별명을 붙임

// PINTEGER == int*

// typedef를 구조체에서 활용할 수 있다

// <기존> typedef를 사용하지 않은 구조체
// struct Human
// {
//     /* data */
//     char* name;
//     int age;
// };

// <변경> typedef를 사용한 구조체
typedef struct
{
    /* data */
    char name;
    int age;
} HUMAN;
#pragma endregion

#pragma region enum
// enum
// 사용자 정의 자료형
// 정수에 별명을 붙이는 데이터 형식

//<문법>
// 1. enum 선언
// enum [enum의 이름]
// {
//   [별명 1] = [정수 값],
//   [별명 2]
//   ...
// [별명 n] = [정수 값],
// }
// - enum 변수 선언
// enum [enum의 이름][변수 이름]

enum Menu
{
    GAMESTART = 1,
    SAVE,
    QUIT
};
#pragma endregion

int main()
{
#pragma region typedef
    INTEGER a = 10;
    printf("%d", a); // printf 함수의 형식 지정자 오타 수정

    PINTEGER pNum = &a;
    printf("pNum = %p\n", (void *)pNum); // 포인터 주소 출력 형식 지정자 추가
    printf("pNum = %d\n", *pNum);       // 포인터가 가리키는 값을 출력

    HUMAN human; // typedef로 정의된 구조체 사용

#pragma endregion

#pragma region enum
    enum Menu menuIndex;
    printf("<메뉴>\n");
    printf("----------------\n");
    printf("1. 게임 시작\n");
    printf("2. 저장\n");
    printf("3. 종료\n");
    printf("----------------\n");
    printf("메뉴를 선택하세요 : ");
    scanf("%d", &menuIndex);

    switch (menuIndex)
    {
    case GAMESTART:
        printf("게임이 시작되었습니다!\n");
        break;
    case SAVE:
        printf("게임이 저장되었습니다!\n");
        break;
    case QUIT:
        printf("게임이 종료되었습니다!\n");
        break;
    }
#pragma endregion
    return 0;
}
