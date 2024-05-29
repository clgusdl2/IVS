#include <stdio.h>

void changeArray(int arr[]); // arr[3] *arr arr[]
int* changeArray2(int *arr);
int main()
{
    int arr[] = {10, 20, 30};
    changeArray(arr);
    for (int i = 0; i < 3; i++)
    {
        printf("arr[%d] %d \n", i, arr[i]);
    }
    printf("%p\n", arr);
    *arr = changeArray2(arr);
    for (int i = 0; i < 3; i++)
    {
        printf("arr[%d] %d \n", i, arr[i]);
    }
    printf("%p\n", arr);
}

void changeArray(int arr[]) // arr[3] *arr arr[]
{

    arr[1] = 99;
    *(arr + 1) = 99;
}

int *changeArray2(int *arr)
{
    arr[2] = 1;
    return arr;
}