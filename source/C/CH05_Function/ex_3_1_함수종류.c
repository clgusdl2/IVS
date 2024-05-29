#include <stdio.h>

void line(int i);//함수 선언(반환값이 없는 함수)
// c++ , java 오버로딩이 가능하여 void line() 가능 
// C는 오버로딩X void line()불가
void noArg(); // 함수 선언(매개변수가 없는 함수)

int main()
{
    line(40);
    noArg();
    line(50);
    

}

void line(int cnt)
{
    for(int i = 0 ; i<cnt;i++)
    {
        printf("=");
    }
    printf("\n");
}
void noArg()
{
    printf("반환값도 매개변수도 없는 함수\n");   
}