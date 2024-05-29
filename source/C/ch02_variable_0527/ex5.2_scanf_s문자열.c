#include <stdio.h>

int main()
{
	char gender, name[100];
	printf("성별은 ? ");
	scanf_s("%c", &gender,1);
	printf("이름은 ?");
	scanf_s("%s", name,(unsigned)sizeof(name));
	printf("입력한 성별은 %c\n 이름은 %s입니다 \n",gender,name);

	return 0;
}