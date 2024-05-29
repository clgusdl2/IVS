#include <stdio.h>
#include <string.h>

int main()
{
    int i = 10;
    int j= i;
    i = 99;
    //printf("i = %d , j =%d\n",i,j);

    char *str1 = "Hello";
    //char *str2 = str1; //str1의 주소를 str2에 할당한다(얕은 복사)
    char *str2="";
    strcpy(str2,str1); //str1의 문자열을 str2에 깊은 복사
    str1 = "Hi"; // str1 문자열이 바뀌면 str1의 기존문자 버리고 새로운 공간에 문자열 저장
    printf("str1 = %s\t , str2 =%s\n",str1,str2);

    // str1 = "Hi" "HI"라는 새로운 주소를 가르키게 된다. 얕은복사 
    //ex Hello - 20번지 str1-20번지 str2-20번지(복사) , str1 -> HI(30번지) 

}