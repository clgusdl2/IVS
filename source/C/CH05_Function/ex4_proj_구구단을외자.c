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
            printf("%d�ܰ� �����Դϴ�\n",level);
        }
        else{
            printf("%d�ܰ� �����Դϴ�. ���� �����Դϴ�\n\n",level);
            break;
        }
    }
    if(level> 3)
    {
        printf("3�ܰ� ���� �� ���̽��ϴ�. �����Դϴ�\n\n");
    }




}

void showQuestion(int level, int num1 , int num2)
{
    printf("%d���� �������� ����\n",level+1);
    int correct=num1*num2;
    printf("��Ʈ: %d X %d >> %d\n",num1,num2,num1*num2);



}

int getRandomNumber(int level)
{
    int number = rand()%4+1 + (level-1)*4;
    return number;
}
