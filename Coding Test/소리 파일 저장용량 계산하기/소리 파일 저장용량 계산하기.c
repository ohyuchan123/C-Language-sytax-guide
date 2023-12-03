// 입력 예시 : 44100 16 2 10
/*h, b, c, s 가 공백을 두고 입력된다.
h는 48,000이하, b는 32이하(단, 8의배수), c는 5이하, s는 6,000이하의 자연수이다.*/

// 출력 예시 : 1.7 MB
/*필요한 저장 공간을 MB 단위로 바꾸어 출력한다.
단, 소수점 둘째 자리에서 반올림해 첫째 자리까지 출력하고 MB를 공백을 두고 출력한다.*/


#include <stdio.h>

int main() {
    int h, b, c, s;
    scanf("%d %d %d %d", &h, &b, &c, &s);

    double result = (double)h * b * c * s / 8;
    const char* byte_choice = "Byte";
    const char* units[] = {"KB", "MB"};

    int count = 0;
    for(int i=0;i<2;i++){
        result /= 1024;
        count++;
    }

    printf("%.1f %s", result, count == 0 ? byte_choice : units[count - 1]);

    return 0;
}

