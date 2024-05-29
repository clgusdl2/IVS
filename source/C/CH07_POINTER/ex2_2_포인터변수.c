#include <stdio.h>

int main()
{
    int a = 1;
    int b = 2;
    
    printf("a변수 주소:%p\t값:%d\n",&a,a);
    printf("b변수 주소:%p\t값:%d\n",&b,b);
    
    int* ap = &a;
    printf("Pointer변수가 가르키는 주소:%p\t값:%d\n",ap,*ap);
    ap = &b;
    printf("Pointer변수가 가르키는 주소:%p\t값:%d\n",ap,*ap);
    


}