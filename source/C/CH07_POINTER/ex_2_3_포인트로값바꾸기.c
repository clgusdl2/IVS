#include <stdio.h>

int main()
{
    int a = 1, b = 2;
    int *pointer;
    pointer = &a;
    *pointer *= 3;

    pointer = &b;
    *pointer *= 3;
    printf("a���� :%d\n", a);
    printf("b���� :%d\n", b);
    printf("Pointer������ ����Ű�� �ּ�:%p\t��:%d\n", pointer, *pointer);
    printf("a���� �ּ� :%p\n", &a);
    printf("b���� �ּ� :%p\n", &b);

    int *ap;
    printf("%p %p",ap,ap+1);
}