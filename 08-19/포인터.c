#include <stdio.h>

//c언어 포인터(Pointer)란?
// 메모리 주소를 저장하는 변수입니다.
// 포인터 프로그램에서 메모리의 특정 위치를 가리키고, 이를 통해 변수나 배열, 함수 등을 조작할 수 있게 해줍니다.

// 포인터를 사용하면 메모리를 효율적으로 사용하고 데이터를 더 유연하게 다룰 수 있습니다.

// 일반적인 함수의 매개 변수를 통해서는
// 다른 함수에 있는 변수의 데이터를 변경할 수 없다.

//선언 방법
//<문법>
// [데이터의 형식] * [포인터 이름]
void variable(){
    int *ptr; //int 타입의 변수를 가리키는 포인터는 이렇게선언할 수 있습니다.
    int num = 42;

    //포인터 변수는 선언한 후에는 주소 연산자 '&'를 사용하여 변수의 주소를 얻을 수 있습니다.
    int *ptr = &num; //ptr은 num의 주소를 가리키는 포인터


    //포인터 변수를 사용하여 해당 주소에 접근하려면 간접 참조 연산자 '*'를 사용한다.
    int value = *ptr;  // ptr이 가리키는 주소의 값(변수 num의 값)을 가져옴

    //포인터를 사용하려면 배열과도 밀접한 관계를 가집니다.
    //배열 이름 자체는 해당 열의 첫 번째 요소를 가리키는 포인터입니다.
    int numbers[5] = {1, 2, 3, 4, 5};
    int *arrayPtr = numbers;  // 배열 이름이 첫 번째 요소의 주소를 가리키는 포인터

    int firstElement = *arrayPtr;  // 첫 번째 요소의 값
    int secondElement = *(arrayPtr + 1);  // 두 번째 요소의 값

}

void Swap(int *a,int *b);

int main(){

    //중괄호 안에서 만들어진 저장 공간은
    //중괄호가 끝나면 사라진다
    //마찬가지로 함수 안에서 만들어진 저장 공간은
    //함수가 끝나면 사라진다.
    int a = 10, b = 20;
    printf("<변경 전>\n");
    printf("a = %d\n",a);
    printf("b = %d\n",b);

    Swap(&a,&b);

    printf("<변경 후>\n");
    printf("a = %d\n",a);
    printf("b = %d\n",b);

    int num = 10;
    int* pNum = &num;

    printf("num  = %d\n",num);

    //%p : 16진수 변환 문자
    // 모든 메모리 주소는 16진수 정수로 되어 있다
    printf("pNum  = %p\n",pNum);
    
    //간접 참조 연산자
    //해당하는 주소를 찾아거서, 그 주소에 있는 저장 공간을 사용한다.
    printf("*pNum  = %d\n",*pNum);

    *pNum = 45;
    printf("-------------------\n");

    printf("num  = %d\n",num);
    printf("pNum  = %p\n",pNum);
    printf("*pNum  = %d\n",*pNum);


    #pragma region 메모리 크기
    // 포인터의 특징
    //1. 데이터 형식과 관계없이 모든 포인터의 메모리 크기는 동일하다.
    //2. 포인터는 포인터 연산이 가능하다.

    //포인터 + 1 : 해당 포인터가 가리키는 저장 공간의 메모리 크기만큼 증가(한 칸 씩 이동)

    int n;
    float f;
    char c;

    int* pN;
    float* pF;
    char* pC;

    printf("n의 메모리 크기 : #lld",sizeof(n));
    printf("f의 메모리 크기 : #lld",sizeof(f));
    printf("c의 메모리 크기 : #lld",sizeof(c));

    printf("pN의 메모리 크기 : #lld",sizeof(pN));
    printf("pF의 메모리 크기 : #lld",sizeof(pF));
    printf("pC의 메모리 크기 : #lld",sizeof(pC));
    #pragma endregion
}

void Swap(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}