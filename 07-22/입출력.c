#include <stdio.h>

int main(){

    #pragma region 입력

    //입력
    //1. 입력할 데이터를 저장할 저장 공간을 만들기
    //정수 입력
    int inputNum;

    //3. scanf() 기능을 사용해서 저장 공간에 입력한 데이터를 저장

    //scanf_s([데이터 형식], [저장 공간의 주소])
    // [ 데이터 형식 ] : 입력받을 데이터의 형식(변환 문자)
    // [ 저장 공간의 주소 ]: 입력받은 데이터를 저장할 저장 공간의 '주소'

    // & : 주소 연산자, 저장 공간의 주소를 알려준다.
    scanf("%d",&inputNum);
    printf("%d\n",inputNum);

    int number1,number2;
    printf("정수를 입력해주세요 : ");
    scanf("%d %d",&number1,&number2);
    printf("%d + %d = %d\n",number1,number2,number1+number2);

    #pragma endregion

    #pragma region 자기 소개 코드 작성
    // 이름(문자열), 나이, 키, 몸무게를 입력받은 후 출력
    char name[50];
    int age;
    float height, weight;

    // 이름 입력받기
    printf("이름을 입력하세요: ");
    // <문자열 입력>
    // scanf([데이터 형식], [문자열 저장 공간 이름], [저장 공간의 크기])
    scanf("%s", name,(int)sizeof(name));

    // 나이 입력받기
    printf("나이를 입력하세요: ");
    scanf("%d", &age);

    // 키 입력받기
    printf("키를 입력하세요 (단위: cm): ");
    scanf("%f", &height);

    // 몸무게 입력받기
    printf("몸무게를 입력하세요 (단위: kg): ");
    scanf("%f", &weight);

    // 입력받은 정보 출력
    printf("\n입력한 정보\n");
    printf("이름: %s\n", name);
    printf("나이: %d\n", age);
    printf("키: %.2f cm\n", height);
    printf("몸무게: %.2f kg\n", weight);
    #pragma endregion 
    return 0;
}