#include <stdio.h>

void line(int i);//�Լ� ����(��ȯ���� ���� �Լ�)
// c++ , java �����ε��� �����Ͽ� void line() ���� 
// C�� �����ε�X void line()�Ұ�
void noArg(); // �Լ� ����(�Ű������� ���� �Լ�)

int main()
{
    line(40);
    noArg();
    line(50);
    

}

void line(int cnt)
{
    for(int i = 0 ; i<cnt;i++)
    {
        printf("=");
    }
    printf("\n");
}
void noArg()
{
    printf("��ȯ���� �Ű������� ���� �Լ�\n");   
}