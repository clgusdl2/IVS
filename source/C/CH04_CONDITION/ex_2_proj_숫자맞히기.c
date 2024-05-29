#include<stdio.h>
#include <time.h>
#include <stdlib.h>
void Init()
{
    srand((unsigned int)time(NULL));
}

int main()
{
    int chance = 5;
    int correct = rand()%100+1;
    int answer;
    int num1= 1,num2 = 100;
    
    Init();
    printf("정답 :%d\n",correct);
    
    while(1)
    {

        printf("%d부터 %d 사이의 숫자를 맞춰보세요(남은기회: %d번)",num1,num2,chance);
        scanf("%d",&answer);
        if(answer > num2 || answer < num1 )
        {
            printf("수를 잘 보고 입력해주세요\n");
            continue;
        }
        if(answer== correct && chance > 0)
        {
            printf(" 기회 %d번 만에 정답\n",5-chance);
            break;
        }else if(answer > correct)
        {
            num2 = answer-1;
            printf("DOWN\n");

        }else if(answer < correct)
        {
            num1 = answer+1;
            printf("UP\n");
        } 
        chance--;
        if(chance < 1)
        {
            printf("5번의 모든 기회를 사용했어요. 아쉽게도 실패하였습니다.");
            break;
        }   

    }

    
}