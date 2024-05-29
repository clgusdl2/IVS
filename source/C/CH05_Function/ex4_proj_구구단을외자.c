#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void showQuestion(int level, int num1, int num2);
int getRandomNumber(int level);

int main()
{  
    srand((unsigned int)time(NULL));

    int level;
    int num1, num2;
    int answer;
    for(level = 1 ; level<=3;level++)
    {
        num1 = getRandomNumber(level);
        num2 = getRandomNumber(level);

        showQuestion(level,num1,num2);
        scanf("%d",&answer);

        if(answer == num1*num2)
        {
            printf("%d단계 정답입니다\n",level);
        }
        else{
            printf("%d단계 오답입니다. 실패 종료입니다\n\n",level);
            break;
        }
    }
    if(level> 3)
    {
        printf("3단계 까지 잘 오셨습니다. 성공입니다\n\n");
    }




}

void showQuestion(int level, int num1 , int num2)
{
    printf("%d레벨 구구단을 외자\n",level+1);
    int correct=num1*num2;
    printf("힌트: %d X %d >> %d\n",num1,num2,num1*num2);



}

int getRandomNumber(int level)
{
    int number = rand()%4+1 + (level-1)*4;
    return number;
}
