#include <stdio.h>

void swap_addr(int* a, int* b); // �Լ� ����

int main()
{
    int a = 10, b = 20;
    printf("swap()ȣ�� �� a�ּ�=%p ,a�� =%d | b�ּ�=%p, b��=%d\n", &a, a, &b, b);
    swap_addr(&a, &b);
    printf("swap()ȣ�� �� a�ּ�=%p ,a�� =%d | b�ּ�=%p, b��=%d\n", &a, a, &b, b);
}

void swap_addr(int* a, int* b) // �Լ� ���� Call by Reference (�Ű����� �ּ�) 
{
    printf("�Լ��� a�ּ�=%p, a�� =%d | b�ּ�=%p, b��=%d\n", a, *a, b, *b);
    int temp = *a;
    *a = *b;
    *b= temp;
    printf("�Լ��� a�ּ�=%p, a�� =%d | b�ּ�=%p, b��=%d\n", a, *a, b, *b);
}