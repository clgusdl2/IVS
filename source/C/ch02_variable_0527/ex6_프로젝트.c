#include <stdio.h>

int main()
{

	char gender[5];
	char name[100];
	int kor, eng, math;

	printf("�̸��� �Է��ϼ��� :");
	scanf_s("%s", name, sizeof(name));

	
	printf("������ �Է��ϼ���(��/��) :");
	scanf_s("%s", gender,sizeof(gender));


	printf("���� ���� ���� ������ �Է��ϼ��� : ");
	scanf_s("%d %d %d", &kor, &eng, &math);

	printf("\n-- �л����� --\n");
	printf("�̸� : %s\n", name);
	printf("���� : %s\n", gender);
	printf("���� : %d\n", kor);
	printf("���� : %d\n", eng);
	printf("���� : %d\n", math);
	printf("�հ�: %d\n", kor+eng+math);
	printf("���: %.2lf\n", (kor + eng + math)/3.0);

}