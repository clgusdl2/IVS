#include <stdio.h>
#include <time.h>
#include <stdlib.h>

// �迭���� ���� �������� �����ϴ� �Լ��� �����Ͻÿ�.
void sort(int *arr, int cnt); // cnt �迭�� ����
void swap(int *arr, int a, int b);
int *makelotto();
int main()
{
    int *lotto = makelotto();
    printf("���� �� : ");
    for (int i = 0; i < 6; i++)
    {
        printf("%d\t", lotto[i]);
    }
    sort(lotto, 6);
    printf("\n���� �� : ");

    for (int i = 0; i < 6; i++)
    {
        printf("%d\t", lotto[i]);
    }
}
int *makelotto()
{
    static int lotto[6];
    srand((unsigned int)time(NULL));

    int duplicate_flag;
    int pick;
    int idx =0;
    while (idx < 6)
    {
        pick = rand() % 45 + 1;
        duplicate_flag = 0;
        for (int i = 0; i < idx; i++)
        {
            if (lotto[i] == pick)
            {
                duplicate_flag = 1;
                break;
            }
        }

        if(duplicate_flag == 0)
        {
            lotto[idx] = pick;
            idx++;
        }
    }
    return lotto;
}

void swap(int *arr, int a, int b)
{
    int temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
}
void sort(int *arr, int cnt)
{
    // for(int i = 0 ; i<cnt-1; i++)
    // {
    //     for(int j = i+1 ;j <cnt; j++)
    //     {
    //         if(arr[i] > arr[j])
    //         {
    //             swap(arr,i,j);
    //         }
    //     }
    // }

    for (int i = 0; i < cnt - 1; i++)
    {
        for (int j = 0; j < cnt - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr, j, j + 1);
            }
        }
    }
}