//sumin, hyunsik , dangdang, birdhead, shumdang의 키를 입력받아 
//출력사항:     평균: xxx.00
//              최장: 김현식 190
//              최단: 슘당이 120

#include <stdio.h>
int main()
{
    char *names[] = {"유수민","김현식","땅땅이","새대갈","슘당이"};
    int arrHeight[5]; //키 입력 배열
    int totHeight  = 0; // 키 누적변수
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
    printf("평균 : %.2lf\n",avgHeight);
    printf("최장 : %s %d\n",names[idxMax],maxHeight);
    printf("최단 : %s %d",names[idxMin],minHeight);
        



}