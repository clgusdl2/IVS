#include <stdio.h>

/*
���������� : %d, %f,%.3lf , %c, %s 
*/


int main()
{
	int num1 = 10;
	int num2 = 11;

	printf("�μ��� �� = %d\n", num1 + num2);
	
	//������(4Byte)�� ������(4Byte) ��Ģ���� ��� ������(4byte)
	printf("�μ��� ��� = %.1lf\n", (num1 + num2)/2.0);

	return 0;

}