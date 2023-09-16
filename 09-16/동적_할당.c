#include<stdio.h>
#include<stdlib.h>
#include<string.h>

// 이름을 입력받는 코드 작성
// 동적 할당을 활용해, 필요한 만큼만 메모리를 할당

// 1. 이름을 입력받을 [임시 저장 공간]을 만들기
// 2. 이름을 [임시 저장 공간]에 입력받기
// 3. 이름의 길이만큼 동적 할당하여 [새로운 메모리] 생성
// 4. [새로운 메모리]에 [임시 저장 공간]에 있는 이름을 복사
// 5. [임시 저장 공간]해제

int main() {
    #pragma region 이름을 입력받는 코드 작성
    // char* nameBuffer = (char*)malloc(sizeof(char) * 50); // 1. 이름을 입력받을 임시 저장 공간

    // // 2. 이름을 [임시 저장 공간]에 입력받기
    // printf("이름을 입력하세요 : ");
    // scanf("%49s", nameBuffer); // 최대 49글자까지 입력 받음

    // // 3. 이름의 길이만큼 동적 할당하여 [새로운 메모리] 생성
    // int length = strlen(nameBuffer) + 1; // +1 : 널 종료 문자 포함
    // char* name = (char*)malloc(sizeof(char) * length);

    // // 4. [새로운 메모리]에 [임시 저장 공간]에 있는 이름을 복사
    // strcpy(name, nameBuffer);

    // // 5. [임시 저장 공간] 해제
    // free(nameBuffer);

    // // 입력받은 이름 출력
    // printf("입력한 이름: %s\n", name);

    // // 6. [새로운 메모리] 해제
    // free(name);
    #pragma endregion


    // 회원 수를 입력받습니다
    // 입력받은 회원 수만큼 회원의 이름을 입력받습니다.
    // 모든 회원의 이름을 입력받은 후, 모든 회원의 이름을 출력해주세요

    int memberCount;
    
    // 회원 수를 입력받습니다.
    printf("회원 수를 입력하세요: ");
    scanf("%d", &memberCount);

    // 회원 이름을 저장할 배열을 생성합니다.
    char** memberNames = (char**)malloc(sizeof(char*) * memberCount);

    // 각 회원의 이름을 입력받습니다.
    for (int i = 0; i < memberCount; i++) {
        memberNames[i] = (char*)malloc(sizeof(char));
        printf("회원 %d의 이름을 입력하세요: ", i + 1);
        
        // scanf를 사용하여 문자열 입력 (최대 49글자까지)
        scanf("%s", memberNames[i]);
    }

    // 모든 회원의 이름을 출력합니다.
    printf("모든 회원의 이름:\n");
    for (int i = 0; i < memberCount; i++) {
        printf("회원 %d: %s\n", i + 1, memberNames[i]);
    }

    // 메모리를 해제합니다.
    for (int i = 0; i < memberCount; i++) {
        free(memberNames[i]);
    }
    free(memberNames);

    return 0;
} 
