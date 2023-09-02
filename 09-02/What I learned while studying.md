## What I learned while studying

이번 포스팅을 작성하게 된 이유는 아래와 같은 오류가 발생하였기 때문입니다.

```lua
/Study/C/Study-C/09-02/" && gcc 문자열.c -o 문자열 && "/Users/ace-oyc
/Study/C/Study-C/09-02/"문자열
문자열.c:48:5: error: call to undeclared function 'scanf_s'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
    scanf_s("%s",text1,(int)sizeof(text1));
    ^
문자열.c:48:5: note: did you mean 'scanf'?
/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/stdio.h:182:6: note: 'scanf' declared here
int      scanf(const char * __restrict, ...) __scanflike(1, 2);
         ^
문자열.c:57:5: error: call to undeclared function 'strcat_s'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
    strcat_s(text1,sizeof(text1), text2);
    ^
문자열.c:57:5: note: did you mean 'strcat'?
/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/string.h:75:7: note: 'strcat' declared here
char    *strcat(char *__s1, const char *__s2);
         ^
2 errors generated.
```

위 오류 메시지에 따르면 scanf_s와 strcat_s 함수가 정의되어 있지 않다는 것을 나타냅니다.  
이 함수들은 표준 C 라이브러리에 포함되어 있지 않고, Microsoft의 확장 함수로 주로 Visual Studio 컴파일러와 Windows 환경에서 사용됩니다.  
macOS와 같은 Unix 기반 시스템에서는 표준 C 함수인 scanf와 strcat 함수를 사용해야 합니다.

### 🤔 Why?

1. 표준 호환성: scanf 및 strcat 함수는 C 언어의 표준 라이브러리에 포함되어 있으므로 표준 호환성을 유지하려면 이러한 함수를 사용해야 합니다.

2. 이식성: 코드를 여러 플랫폼으로 이식할 때, 표준 C 함수를 사용하는 것이 코드 이식성을 높이고 플랫폼 간 호환성을 유지하는 데 도움이 됩니다.

3. 유닉스 환경 특성: Unix 기반 시스템은 다른 환경과 다른 특성을 가지며, 따라서 Microsoft 확장 함수가 일반적으로 지원되지 않습니다. Unix 환경에서는 표준 함수를 사용하여 코드를 더 쉽게 작성하고 유지할 수 있습니다.
