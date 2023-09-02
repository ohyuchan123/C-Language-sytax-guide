#include <stdio.h>
#include <string.h> // strcat 함수를 사용하기 위해 필요한 헤더 파일

// 문자 입력 함수
char GetChar() {
    char input;
    scanf(" %c", &input); // 공백 문자를 포함하여 문자 입력 받기
    return input;
}

// 문자열 출력 함수
void PrintString(const char* str) {
    printf("%s", str);
}

// 입력 버퍼 비우는 함수
void ClearInputBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

// 문자열 길이를 반환하는 함수 정의
int GetStringLength(const char* str) {
    //const 키워드를 사용하여 함수의 매개변수 str을 상수 포인터로 선언한 이유는 
    //문자열을 변경하지 않고도 문자열의 길이를 구할 수 있게 하기 위해서입니다. 
    int length = 0;

    // 널 종료 문자를 만날 때까지 반복
    while (str[length] != '\0') {
        length++;
    }

    return length;
}


int main(){
    #pragma region 문자 전용 입출력 함수
        char character;

        printf("문자를 입력하세요: ");
        character = GetChar();

        printf("입력한 문자: %c\n", character);

        char text[] = "안녕하세요";
        printf("문자열 출력: ");
        PrintString(text);
    #pragma endregion

    #pragma region 입력 함수, 입력 버퍼
        char character;
        char text[100];

        printf("문자를 입력하세요: ");
        character = GetChar();
        ClearInputBuffer(); // 입력 버퍼 비우기

        printf("입력한 문자: %c\n", character);

        printf("문자열을 입력하세요: ");
        GetString(text, sizeof(text));
        ClearInputBuffer(); // 입력 버퍼 비우기

        printf("입력한 문자열: %s\n", text);
    #pragma endregion

    #pragma region 문자열 길이 구하기
        char text[100];

        printf("문자열을 입력하세요: ");

        // 사용자로부터 문자열 입력 받기
        scanf("%s", text);

        // 문자열의 길이 계산
        int length = GetStringLength(text);

        printf("입력한 문자열: %s\n", text);
        printf("문자열의 길이: %d\n", length);
    #pragma endregion

    // 문자열 함수
    // string.h : 헤더
    // strlen() : str + len(length 길이) : 문자열 길이 함수
    // strcpy_s() : str + cpy(copy 복사) : 문자열 복사 함수
    // strcat_s() : str : cat(concatenate (사슬)을 잇다) 문자열 더하기 함수
    // strcmp() : str + cmp(compare 비교) 문자열 비교 함수

    #pragma region 문자열 함수(더하기))
    
        char text1[100], text2[100];

        printf("첫 번째 문자열을 입력하세요: ");
        scanf("%s", text1); // 배열 크기에 맞게 형식 지정자를 지정합니다.

        printf("두 번째 문자열을 입력하세요: ");
        scanf("%s", text2); // 배열 크기에 맞게 형식 지정자를 지정합니다.

        printf("\n<더하기 전>\n");
        printf("첫 번째 문자열 : %s\n",text1);
        printf("두 번째 문자열 : %s\n",text2);

        // strcat() : 문자열 더하기 함수
        strcat(text1, text2);

        //text1과 text2는 각각 문자열을 저장하기 위한 배열이지만, 
        //text1 + text2는 두 문자열의 연결이 아니라 메모리 주소 연산입니다. 

        printf("\n<더하깈 후>\n");
        printf("첫 번째 문자열 : %s\n",text1);
        printf("두 번째 문자열 : %s\n",text2);

        printf("\n결과: %s\n", text1);
    #pragma endregion

    #pragma region 문자열 함수(복사)
        char text_1[100], text_2[100];

        printf("첫 번째 문자열을 입력하세요: ");
        scanf("%s", text_1); // 배열 크기에 맞게 형식 지정자를 지정합니다.

        printf("두 번째 문자열을 입력하세요: ");
        scanf("%s", text_2); // 배열 크기에 맞게 형식 지정자를 지정합니다.

        printf("<복사 전>\n");
        printf("첫 번째 문자열 : %s\n",text_1);
        printf("두 번째 문자열 : %s\n",text_2);

        //strcpy([목적지 저장 공간의 주소],[원본 문자열])
        strcpy(text_1,text_2);

        printf("<복사 후>\n");
        printf("첫 번째 문자열 : %s\n",text_1);
        printf("두 번째 문자열 : %s\n",text_2);

    #pragma endregion
    
    #pragma region 문자열 함수(비교)
        //strcmp : 문자열 비교 함수
        //strcmp([문자열 1],[문자열 2])
        // [문자열 1]과 [문자열 2]를 사전 순(아스키 코드 순)으로 비교

        //<반환 데이터>
        //[문자열 1]이 [문자열 2]보다 앞에 있음 : -1
        //[문자열 1]이 [문자열 2]보다 뒤에 있음 : 1
        //[문자열 1]이 [문자열 2]이 동일함 : 0
        int text3[100],text4[100];

        printf("첫 번째 문자열을 입력하세요: ");
        scanf("%s", text3); // 배열 크기에 맞게 형식 지정자를 지정합니다.

        printf("두 번째 문자열을 입력하세요: ");
        scanf("%s", text4); // 배열 크기에 맞게 형식 지정자를 지정합니다.

        printf("\n<문자열 비교>\n");
        printf("첫 번째 문자열 : %s\n",text3);
        printf("첫 번째 문자열 : %s\n",text4);

        int result = strcmp(text3,text4);
        printf("비교 결과 : %d\n",result);

    #pragma endregion

    return 0;
}