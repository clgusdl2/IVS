#include <stdio.h>

int main()
{
    int score;
    printf("������ >> ");
    scanf("%d",&score);

    int temp = score ==100 ? 99 : score;
    switch(temp/10)
    {
        case 9:
            printf("A����");
            break;
        case 8:
            printf("B����");
            break;
        case 7:
            printf("C����");
            break;
        case 6:
            printf("D����");
            break;
        case 5:
            printf("F����");
            break;

        default:
            printf("��ȿ���� ���� �����Դϴ�");
            break;
    }
}