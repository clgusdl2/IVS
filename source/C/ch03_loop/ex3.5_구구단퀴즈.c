#include <stdio.h>
// 출력을 원하는 구구단 수를 입력(scanf)받아 해당 구구단 출력 
int main()
{
    int dansu;
    printf("몇 단 구구단을 출력할까요 >> ");
    scanf("%d",&dansu);
    printf("몇 단 구구단 입니다.\n");
    for(int i = 1 ; i<=9 ; i++)
    {
        printf("%d x %d = %d \n",dansu,i,dansu*i );
    }

}