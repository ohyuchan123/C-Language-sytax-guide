#include<stdio.h>
#include<string.h>
#include<stdlib.h>

// 사용자 정의 자료형(구조체)
// 사용자가 직접 만든 데이터 형식
// 복합 데이터 형식

// <문법>
// 1. 구조체 선언 : 이러이러한 형식의 데이터 형식이 있다 !라고 말하는 것
// struct [구조체 이름]
// {
//  [변수] 들 아무 형식의 변수나 다 가능
//}

// 2. 구조체 형식의 변수 선언
// struct [구조체 이름][변수 이름];

// 1. 구조체 선언
// 구조체 안에 있는 변수를 그 구조체의 '멤버 변수'라고 한다
struct Human
{
    char* name;
    int age;
    float weight;
    float height;
};

// 학생(Student) 구조체를 만듭니다
struct Student
{
   //학생
   char* name; // 이름
   int score; // 점수
};

// 학생의 정보를 입력받는 함수
void InputStudentData(struct Student* student)
{
    printf("학생의 이름을 입력하세요: ");
    char nameBuffer[50];
    scanf("%49s", nameBuffer);

    int length = strlen(nameBuffer) + 1;
    student->name = (char*)malloc(sizeof(char) * length);
    strcpy(student->name, nameBuffer);

    printf("학생의 점수를 입력하세요: ");
    scanf("%d", &student->score);
}

// 학생 정보를 출력하는 함수
void PrintStudentData(const struct Student* student)
{
    printf("학생 이름: %s\n", student->name);
    printf("학생 점수: %d\n", student->score);
}

// 구조체를 함수의 반환 데이터 형식, 또는 매개 변수로 사용할 경우
// 구조체 포인터 형식을 사용하는 것이 더 좋다
// 대부분의 구조체 데이터 형식은 포인터 형식의 메모리 크기(8바이트)보다 큰 경우가 많다
// 따라서 구조체 매개 변수보다 구조체 포인터 매개 변수가 메모리 상으로 더 효울적이다!

// -> 연산자
// 구조체의 포인터에서 바로 구조체의 멤버로 접근할 수 있게 해주는 연산자
// 일종의 간접 참조 연산자

// 위의 함수를 각각 만들고 main에서 호출해주세요


int main(){

    #pragma region 구조체 사용법
    // 2. 구조체 형식의 변수 선언
    // struct Human human;

    // // 구조체의 멤버 변수애 접근
    // // [구조체 변수 이름].[멤버 변수 이름]
    // human.name = "홍길동";
    // human.age = 24;
    // human.height = 175.74f;
    // human.weight = 67.23f;

    // printf("이름 : %s\n", human.name);
    // printf("나이 : %d\n", human.age);
    // printf("키 : %.2fcm\n", human.height);
    // printf("몸무게 : %.2fkg\n", human.weight);
    #pragma endregion

    struct Student student; // 학생 정보를 저장할 구조체 변수

    // 학생 정보 입력
    InputStudentData(&student);

    // 학생 정보 출력
    PrintStudentData(&student);

    free(student.name);

    return 0;
}

