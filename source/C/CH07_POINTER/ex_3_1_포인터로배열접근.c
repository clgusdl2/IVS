#include <stdio.h>

int main()
{
    int arr[3] = {5, 10, 15};
    int *ptr = arr;
    for (int idx = 0; idx < 3; idx++)
    {
        printf("배열 arr[%d] = %d\n", idx, arr[idx]);
    }

    for (int idx = 0; idx < 3; idx++)
    {
        printf("배열 ptr[%d] = %d\n", idx, ptr[idx]);
    }
    ptr[0] = 99;
    ptr[1] = 88;
    ptr[2] = 77;

    printf("== ptr 수정후 ==\n");

    for (int idx = 0; idx < 3; idx++)
    {
        printf("배열 arr[%d] = %d\n", idx, arr[idx]);
    }

    for (int idx = 0; idx < 3; idx++)
    {
        printf("배열 ptr[%d] = %d\n", idx, *(ptr + idx));
    }
    
}