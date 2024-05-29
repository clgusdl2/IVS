#include <stdio.h>

int main()
{
    int total = 0; // 누적 변수

    for(int i = 1 ; i<=10;i++)
    {
        if(i!= 10)
        {
            printf("%d + ",i);
        }
        else{
            printf("%d", i);
        }

        total += i;

    }
    printf(" = %d \n",total);

}