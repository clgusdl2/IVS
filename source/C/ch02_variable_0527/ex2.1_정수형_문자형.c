#include <stdio.h>

// ���� : ������(int) , ������( ���� ' ', ���ڿ� "")


// �ּ� �ޱ� ctrl + k , c
// �ּ� ���� ctrl + k , u

int main()
{
	int age = 27;
	char gender = 'F';
	char *name = "����";
	//char name[];
	age = 28;
	printf("�ȳ��ϼ��� %d(%c) %s�Դϴ�\n",age,gender,name);
	printf("�ȳ��ϼ��� %d(%c) %s�Դϴ�\n", age, gender, name);
	printf("�ȳ��ϼ��� %d(%c) %s�Դϴ�\n", age, gender, name);


}