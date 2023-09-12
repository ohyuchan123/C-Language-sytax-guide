#include <stdio.h>
#include <stdlib.h> // 동적 할당 함수가 들어있는 헤더 파일.

// 함수 포인터
// 함수의 주소를 저장할 수 있는 포인터.
// <문법>
// [반환 데이터 형식] ([포인터 이름])([매개 변수 형식]);
// ex. int (fp)(int, int);
// fp라는 이름의
// 반환 데이터 형식 : int
// 매개 변수 : int 2개
// 로 이루어진 함수의 주소를 저장할 수 있다!
// 
// void 포인터
// void : 비어있는, 텅 빈, 공허의
// 아무 데이터 형식의 주소나 저장할 수 있는 포인터!
// void 포인터는 데이터 형식이 정해져 있는 것이 없기 때문에
// 일반적으로 간접 참조 연산자를 사용할 수 없다!
// (주소로 찾아가는 것은 가능하지만 그 주소의 저장 공간을 어떻게 사용할 지 모른다!)
// 따라서, 간접 참조 연산자를 사용하려면, void 포인터의 형식을 변경해야 한다!
// 
// <문법>
// void* [포인터 이름];

// 동적 할당
// 유동적으로 메모리를 할당.
// 
// ★★★★★
// <동적 할당을 사용해야 하는 이유>
// 프로그램에서 사용할 메모리의 크기를 예측하기 어렵다!
// 따라서, 프로그램을 실행하는 도중에 유동적으로 메모리를 할당할 수 있어야 한다!

// 동적 할당 함수
// <stdlib.h> 필요!

// - malloc() : m(memory) + alloc(allocation 할당)
// malloc([메모리 크기]) : [메모리 크기]만큼의 빈 메모리(저장 공간)를 생성.
// 반환 데이터 : 생성한 메모리의 주소.
// 
// - free() : 메모리 해제(삭제) 함수
// free([동적 할당한 메모리의 주소])
// [동적 할당한 메모리의 주소]에 해당하는 저장 공간을 해제.
// ★★★★ 동적 할당한 메모리는 자동으로 해제되지 않는다!
// 따라서 '반드시' free() 함수를 통해서 직접 메모리를 해제해야 한다!

// 변수 : 어떤 데이터를 저장하는 저장 공간.(메모리)
// 변수 만들기 = 메모리를 나누어서 사용 = 메모리 할당

int Add(int a, int b);
int Sub(int a, int b);

int main()
{
    #pragma region 함수 포인터
    // int (*fp)(int, int);

    // fp = Add; // 함수의 이름 = 함수의 주소.
    // int result = fp(10, 20);
    // printf("fp(10, 20) = %d\n", result);

    // fp = Sub;
    // result = fp(10, 20);
    // printf("fp(10, 20) = %d\n", result);
    #pragma endregion

    #pragma region void 포인터
    // void* vp;
    // int n = 10;
    // float f = 2.78f;
    // char c = 'A';

    // vp = &n;
    // // printf("*vp = %d\n", *vp); //'그냥' 간접 참조 연산자를 사용하는 것은 불가능
    // printf("vp = %d\n",*(int*)vp); // void 포인터의 형식을 int 포인터로 변경

    // vp = &f;
    // printf("vp = %.2f\n",*(float*)vp); // void 포인터의 형식을 float 포인터로 변경

    // vp = &c;
    // printf("vp = %c\n",*(char*)vp); // void 포인터의 형식을 char 포인터로 변경
    #pragma endregion

    #pragma region 동적 할당
    // int* pNum = (int*)malloc(4);
    // *pNum = 10;

    // printf("*pNum = %d\n",*pNum);

    // free(pNum);
    #pragma endregion

    #pragma region float 형식의 동적 할당
    // float 형식의 저장 공간을 동적 할당
    // float* pF = (float*)malloc(sizeof(float));
    // *pF = 18.24f;
    // printf("%.2f", *pF);
    // free(pF);
    #pragma endregion


    #pragma region int 동적 할당
    // int 10칸 짜리 배열을 동적 할당.
    // 메모리 크기 : 4 X 10 = 40바이트
    // int* arr = (int*)malloc(sizeof(int) * 10);

    // for (int i = 0; i < 10; i++)
    // {
    //    arr[i] = i + 1;
    //    printf("arr[%d] = %d\n", i, arr[i]);
    // }

    // free(arr);
    #pragma endregion

    // 칸 수를 입력받습니다.
    // 입력받은 칸 수 만큼 정수 배열을 동적 할당하고
    // 해당 배열의 첫번째 칸 ~ 마지막 칸까지 1 ~ (칸 수)를 대입합니다.
    // 그 후, 동적 할당한 정수 배열의 모든 요소를 출력해주세요!
    int count;
    printf("칸 수를 입력하세요 : ");
    scanf("%d", &count);

    // int arr[count]; // (X) 문법상 불가능한 표현
    int* arr1 = (int*)malloc(sizeof(int) * count);

    for (int i = 0; i < count; i++)
    {
        arr1[i] = i + 1;
        printf("arr[%d] = %d\n", i, arr1[i]);
    }

    free(arr1);
    
    return 0;
}

int Add(int a, int b)
{
    return a + b;
}

int Sub(int a, int b)
{
    return a - b;
}