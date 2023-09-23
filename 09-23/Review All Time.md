# 🗓️ Review All Time

## 💠 배열 동적 할당

정수 데이터 형식 24칸짜리 배열을 동적 할당  
`int* arr = (int*)malloc(sizeof(int) * 24)`

1. 이름을 입력받을 [임시 저장 공간]을 만들기
2. 이름을 [임시 저장 공간]에 입력받기
3. 이름의 길이만큼 동적 할당하여 [새로운 메모리] 생성
4. [새로운 메모리]에 [임시 저장 공간]에 있는 이름을 복사
5. [임시 저장 공간]해제

(동작 할당을 활용해 이름을 입력받기)

```c
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){

    //동적 할당을 활용해 이름을 입력받기
    // 1. 이름을 입력받을 [임시 저장 공간]을 만들기
    char* nameBuffer = (char*)malloc(sizeof(char)*50);

    // 2. 이름을 [임시 저장 공간]에 입력받기
    print("이름을 입력하세요 : ");
    scanf("%s", nameBuffer,(int)sizeof(char)*50);

    // 3. 이름의 길이만큼 동적 할당하여 [새로운 메모리] 생성
    int length = strlen(nameBuffer) + 1; // +1 널 문자 포함
    char* name = (char*)malloc(sizeof(char)*length);

    //4. [새로운 메모리]에 [임시 저장 공간]에 있는 이름을 복사
    strcpy(name, nameBuffer);

    // 입력받은 이름 출력
    printf("입력한 이름: %s\n", name);

    //5. [임시 저장 공간]해제
    free(name);

    return 0;
}
```

(2차원 배열(배열이 여러 개)동적 할당)

```c
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){

    // 정수 데이터 형식 10칸짜리 3줄이 있는 2차원 배열을 동적 할당
    // 회원 이름을 저장할 배열을 생성합니다.
    int** memberNames = (int**)malloc(sizeof(int*)*memberCount);
    for(int i=0; i<3 ; i++){
        arr[i] = (int*)malloc(sizeof(int)*10)
    }

    // 동적 할당한 메모리를 해제할 경우
    // 동적 할당한 순서의 역순으로 해제해야 한다
}
```

## 💠 struct 구조체

사용자 정의 자료형(구조체)  
사용자(개발자)가 직접 만든 데이터 형식

<문법>

1. 구조체 선언 : 이러이러한 형식의 구조체가 들어 있다

```c
struct [구조체 이름]{
    [변수]들
    //함수 x
}
```

2. 구조체 변수 선언
   struct [구조체 이름][변수 이름];
   ex. struct Human human;

구조체를 함수의 매개변수로 사용할 경우, 구조체의 포인터를 사용하는 것이 좋다‼️
