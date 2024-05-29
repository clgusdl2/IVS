#include <stdio.h>

int main()
{
    int input; 
    scanf("%d",&input);
    for(int floor = 1 ; floor <=input ; floor++)
    {
        for(int j = 0 ; j<input-floor;j++)
        {
            printf(" ");
        }
        
        for(int k = 0 ; k<floor*2-1; k++)
        {
            printf("*");
        }
        printf("\n");
    }
    


}