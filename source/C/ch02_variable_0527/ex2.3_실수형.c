#include <stdio.h>

//실수형(float 4byte , double 8byte)
//정수형(int 4byte , long long 8byte)

int main()
{
	int age = 20;



	long long money = 2e14L;

	float f = 3.14195265359F;
	double d = 3.14195265359;
	printf("f = %.11f\n", f);
	printf("d = %.11lf\n", d);

	if (d == f)
	{
		printf("f와 d 는 같다 ");
	}
	else
	{
		printf("f와 d는 같지 않다\n");
	}
	f = 10.1F;
	d = 10.1;

	printf("f = %.11f\n", f);
	printf("d = %.11lf\n", d);

	if (d == f)
	{
		printf("f와 d 는 같다\n ");
	}
	else
	{
		printf("f와 d는 같지 않다\n");
	}
}
