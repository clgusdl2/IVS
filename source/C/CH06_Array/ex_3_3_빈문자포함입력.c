#include <stdio.h>
#include <stdlib.h>
//   �ּ�[���� ����], �̸�[���ں�����]�� �Է¹ޱ�
/*  scanf("%s",����,�Է¹��� byte��) 
    (tap,space,\n...) white space�� ���� �� ������ ���۳����� return 
    ��, ó�� ������ white-space�� ����
        ?[ȫ�浿\n] > [\n] > [\n �����\space ��õ�� \n] > [\space ��õ�� \n]
        ?[Hong(\space)Gildong\n] > [(\space)Gildong\n] 

    gets(����)
    '\n' ���������� �ν� �� �� �ڴ� ����(���۸� ���) 

*/

int main()
{
    //char *name; �Է¹��� ���ڿ��� ����� ������ Ȯ������ ����
    char name[128];
    char address[512];
    printf("�ּ� >>");
    //scanf("%s",address,sizeof(address));
    // gets(address); // ó���� \n �������� �Է��� ����. �� ���� ���� �ʿ䰡 ����
    gets(address); //

    printf("�̸� >>");
    //scanf("%s",name,sizeof(name));
    gets(name);

    printf("�Է��� �̸� : %s\n" , name);
     printf("�Է��� �ּ� : %s\n" , address);

}