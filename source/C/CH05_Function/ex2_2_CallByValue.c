#include <stdio.h>

// callByValue

int sum(int from,int to); //�Լ� ����
int main(void)
{
    //������ sum(a,b)
    int a =1 , b = 100;
    int tot = sum(a,b);
    printf("%d���� %d���� �������� %d\n",a,b,tot);
    a= 10; b = 100;
    tot = sum(a,b);
    printf("%d���� %d���� �������� %d\n",a,b,tot);
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
