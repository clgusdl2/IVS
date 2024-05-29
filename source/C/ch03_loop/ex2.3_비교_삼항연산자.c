#include <stdio.h>
// 비교 연산자 : < <= > >= == , != , ...
// 삼항 연산자 : (조건) ? (조건이 참일때의 값) : (조건이 거짓일 떄 값)
int main()
{
    int n1 = 10,  n2 = 5;
    int result = n1<=n2;
    printf("%d %s %d 는 %s\n" , n1 , "<= ", n2 , result? "참":"거짓");

}
