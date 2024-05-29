#include <stdio.h>

void swap(int a, int b); // 함수 선언

int main()
{
    int a = 10, b = 20;
    printf("swap()호출 전 a주소=%p ,a값 =%d | b주소=%p, b값=%d\n", &a, a, &b, b);
    swap(&a, &b);
    printf("swap()호출 후 a주소=%p ,a값 =%d | b주소=%p, b값=%d\n", &a, a, &b, b);
}

void swap(int *a, int *b) // 함수 정의 Call by Value (매개변수 value) 매개변수는 copy 함수 호출 종료시 메모리 해제
{
    printf("함수안 a주소=%p, a값 =%d | b주소=%p, b값=%d\n", &a, a, &b, b);
    int temp = *a;
    *a = *b;
    *b= temp;
    printf("함수안 a주소=%p, a값 =%d | b주소=%p, b값=%d\n", &a, a, &b, b);
}