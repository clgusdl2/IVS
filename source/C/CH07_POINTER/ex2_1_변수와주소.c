#include <stdio.h>
int main()
{
    int a= 1;
    int b= 2;
    char* str = "Hello";
    printf("a변수 주소: %p, 변수값 %d\n",&a, a);
    printf("b변수 주소: %p, 변수값 %d\n",&b, b);
    printf("str의 주소 : %p,문자열 주소 %p, 문자열 내용 %s",&str,str,str);

    printf("\n--- 변수 수정 후 ---\n");
    a= 10; b= 20; str = "Hi";

    printf("a변수 주소: %p, 변수값 %d\n",&a, a);
    printf("b변수 주소: %p, 변수값 %d\n",&b, b);
    printf("str의 주소 : %p,문자열 주소 %p, 문자열 내용 %s",&str,str,str);

}