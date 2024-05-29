#include <stdio.h>

// 변수 : 정수형(int) , 문자형( 문자 ' ', 문자열 "")


// 주석 달기 ctrl + k , c
// 주석 해제 ctrl + k , u

int main()
{
	int age = 27;
	char gender = 'F';
	char *name = "제니";
	//char name[];
	age = 28;
	printf("안녕하세요 %d(%c) %s입니다\n",age,gender,name);
	printf("안녕하세요 %d(%c) %s입니다\n", age, gender, name);
	printf("안녕하세요 %d(%c) %s입니다\n", age, gender, name);


}