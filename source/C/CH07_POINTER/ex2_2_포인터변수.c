#include <stdio.h>

int main()
{
    int a = 1;
    int b = 2;
    
    printf("a���� �ּ�:%p\t��:%d\n",&a,a);
    printf("b���� �ּ�:%p\t��:%d\n",&b,b);
    
    int* ap = &a;
    printf("Pointer������ ����Ű�� �ּ�:%p\t��:%d\n",ap,*ap);
    ap = &b;
    printf("Pointer������ ����Ű�� �ּ�:%p\t��:%d\n",ap,*ap);
    


}