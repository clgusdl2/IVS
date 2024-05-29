#include <stdio.h>


int main()
{
    int start_dansu;
    int end_dansu=7;
    scanf("%d",&start_dansu);

    for(int j = 1 ; j<=9 ; j++)
    { 
        for(int dansu = start_dansu ; dansu<=end_dansu;dansu++)
        {
             printf("%d x %d = %d\t",dansu,j,dansu*j);
        }
        printf("\n");
    }
}
