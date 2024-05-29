#include <stdio.h>
#include <time.h>
#include <stdlib.h>


//�迭���� ���� �������� �����ϴ� �Լ��� �����Ͻÿ�.
void sort(int*arr , int cnt); //cnt �迭�� ����
void swap(int *arr,int a,int b);

int main()
{
    int lotto[6] = {41,1,35,20,45,10};
    printf("���� �� : ");
    for(int i = 0 ; i <6 ;i++)
    {
        printf("%d\t",lotto[i]);
    }
    sort(lotto,6);
    printf("\n���� �� : ");
    
   for(int i = 0 ; i <6 ;i++)
    {
        printf("%d\t",lotto[i]);
    }
 
}

void swap(int *arr,int a,int b)
{
    int temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
}
void sort(int*arr , int cnt)
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

    for(int i = 0 ; i <cnt-1;i++)
    {
        for(int j = 0 ; j<cnt-i-1;j++)
        {
            if(arr[j] > arr[j+1])
            {
                swap(arr,j,j+1);
            }
        }
    }
}