//sumin, hyunsik , dangdang, birdhead, shumdang�� Ű�� �Է¹޾� 
//��»���:     ���: xxx.00
//              ����: ������ 190
//              �ִ�: ������ 120

#include <stdio.h>
int main()
{
    char *names[] = {"������","������","������","���밥","������"};
    int arrHeight[5]; //Ű �Է� �迭
    int totHeight  = 0; // Ű ��������
    double avgHeight = 0;
    int idxMin, minHeight =999;
    int idxMax, maxHeight =-999;




    for(int i = 0; i<5;i++)
    {
        scanf("%d",&arrHeight[i]); 

        if(minHeight > arrHeight[i])
        {
            minHeight = arrHeight[i];
            idxMin = i;
        }

        if(maxHeight < arrHeight[i])
        {
            maxHeight = arrHeight[i];
            idxMax = i;
        }

        totHeight += arrHeight[i];

    }
    avgHeight = totHeight/5.0;
    printf("��� : %.2lf\n",avgHeight);
    printf("���� : %s %d\n",names[idxMax],maxHeight);
    printf("�ִ� : %s %d",names[idxMin],minHeight);
        



}