#include <stdio.h>

// callByValue

int sum(int from,int to); //함수 선언
int main(void)
{
    //내에서 sum(a,b)
    int a =1 , b = 100;
    int tot = sum(a,b);
    printf("%d부터 %d까지 누적합은 %d\n",a,b,tot);
    a= 10; b = 100;
    tot = sum(a,b);
    printf("%d부터 %d까지 누적합은 %d\n",a,b,tot);
}
// callByValue
int sum(int from, int to) 
{
    int result = 0;
    for(int i = from ; i<=to ; i++)
    {
        result += i;
    }
    return result;
}
