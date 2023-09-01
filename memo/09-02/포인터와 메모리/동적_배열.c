#include <stdio.h>
#include <stdlib.h> // 동적 메모리 할당을 위한 헤더 파일

int main() {
    int *dynamicArray = NULL; // 동적 배열을 가리킬 포인터 초기화

    int size; // 배열의 크기를 저장할 변수
    printf("동적 배열의 크기를 입력하세요: ");
    scanf("%d", &size);

    // 메모리 할당을 통해 동적 배열 생성
    dynamicArray = (int *)malloc(size * sizeof(int));

    if (dynamicArray == NULL) {
        printf("메모리 할당 실패\n");
        return 1;
    }

    // 동적 배열에 데이터 입력
    for (int i = 0; i < size; i++) {
        dynamicArray[i] = i * 2;
    }

    // 동적 배열 출력
    printf("동적 배열의 내용:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", dynamicArray[i]);
    }
    printf("\n");

    // 메모리 해제
    free(dynamicArray);

    return 0;
}
