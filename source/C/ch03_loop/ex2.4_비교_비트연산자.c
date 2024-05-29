#include <stdio.h>
#include <stdlib.h>

// 비트연산자 : &(and) , |(or) ,^(xor: 같음 0 , 다르면1), >> <<(shift)


int main()
{
    int n1 =10; // 0000 0000 0000 0000 0000 0000 0000 1010
    int n2 = 6; // 0000 0000 0000 0000 0000 0000 0000 0110

    // n1&n2 =                                      ~ 0010
    // n1|n2 =                                      ~ 1110
    // n1^n2 =                                      ~ 1100
    printf("n1&n2 = %d\n", n1&n2);
    printf("n1|n2 = %d\n", n1|n2);
    printf("n1^n2 = %d\n", n1^n2);
    printf("n2 << 1 = %d\n", n2<<1);
}