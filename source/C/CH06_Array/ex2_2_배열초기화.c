#include <stdio.h>
//배열 : 동일 자료형의 집합

int main()
{
    int subway[10] = {30,40,50};

    for(int idx = 0 ; idx<10; idx++)
    {
        printf("subway[%d]= %d\n",idx,subway[idx]);
    }
    printf("%d %d %d",(&subway[0]+2),&subway[1],&subway[2]);
}