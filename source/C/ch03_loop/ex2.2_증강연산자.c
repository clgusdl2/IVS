#include <stdio.h>

//증감연산자 : ++ --

int main()
{
    int n1 = 10;

    printf("++n1 = %d\n", ++n1); // 선 연산 후  출력
    printf("n1++ = %d\n", n1++); // 선 출력 후 연산
    printf("n1 = %d\n", n1); // 연산된 결과

}