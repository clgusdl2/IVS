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
    printf("���� :%d\n",correct);
    
    while(1)
    {

        printf("%d���� %d ������ ���ڸ� ���纸����(������ȸ: %d��)",num1,num2,chance);
        scanf("%d",&answer);
        if(answer > num2 || answer < num1 )
        {
            printf("���� �� ���� �Է����ּ���\n");
            continue;
        }
        if(answer== correct && chance > 0)
        {
            printf(" ��ȸ %d�� ���� ����\n",5-chance);
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
            printf("5���� ��� ��ȸ�� ����߾��. �ƽ��Ե� �����Ͽ����ϴ�.");
            break;
        }   

    }

    
}