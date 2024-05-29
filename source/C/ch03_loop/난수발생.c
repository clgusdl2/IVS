#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void Init()
{
    srand((unsigned int)time(NULL));
}

int main()
{
   //rand(); // 난수 발생 0~32767 (short)형
   //Init () -> 난수 초기화 작업 필수

    Init();
    //0~99
    printf("%d \n ", rand()%100);
    //1~100
    printf("%d \n ", rand()%100 +1);

    return 0;
}