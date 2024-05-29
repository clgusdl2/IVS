#include <stdio.h>

/*
서식지정자 : %d, %f,%.3lf , %c, %s 
*/


int main()
{
	int num1 = 10;
	int num2 = 11;

	printf("두수의 합 = %d\n", num1 + num2);
	
	//정수형(4Byte)과 정수형(4Byte) 사칙연산 결과 정수형(4byte)
	printf("두수의 평균 = %.1lf\n", (num1 + num2)/2.0);

	return 0;

}