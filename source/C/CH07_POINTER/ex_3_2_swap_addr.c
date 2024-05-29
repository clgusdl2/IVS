#include <stdio.h>

void swap_addr(int* a, int* b); // 함수 선언

int main()
{
    int a = 10, b = 20;
    printf("swap()호출 전 a주소=%p ,a값 =%d | b주소=%p, b값=%d\n", &a, a, &b, b);
    swap_addr(&a, &b);
    printf("swap()호출 후 a주소=%p ,a값 =%d | b주소=%p, b값=%d\n", &a, a, &b, b);
}

void swap_addr(int* a, int* b) // 함수 정의 Call by Reference (매개변수 주소) 
{
    printf("함수안 a주소=%p, a값 =%d | b주소=%p, b값=%d\n", a, *a, b, *b);
    int temp = *a;
    *a = *b;
    *b= temp;
    printf("함수안 a주소=%p, a값 =%d | b주소=%p, b값=%d\n", a, *a, b, *b);
}