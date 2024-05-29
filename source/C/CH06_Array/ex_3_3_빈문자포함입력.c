#include <stdio.h>
#include <stdlib.h>
//   주소[빈문자 포함], 이름[빈문자불포함]을 입력받기
/*  scanf("%s",변수,입력받을 byte수) 
    (tap,space,\n...) white space가 오면 그 이전의 버퍼내용을 return 
    단, 처음 나오는 white-space는 무시
        ?[홍길동\n] > [\n] > [\n 서울시\space 금천구 \n] > [\space 금천구 \n]
        ?[Hong(\space)Gildong\n] > [(\space)Gildong\n] 

    gets(변수)
    '\n' 이전까지만 인식 후 그 뒤는 지움(버퍼를 비움) 

*/

int main()
{
    //char *name; 입력받을 문자열이 저장될 공간이 확보되지 않음
    char name[128];
    char address[512];
    printf("주소 >>");
    //scanf("%s",address,sizeof(address));
    // gets(address); // 처음엔 \n 없음으로 입력을 받음. 즉 버퍼 지울 필요가 없음
    gets(address); //

    printf("이름 >>");
    //scanf("%s",name,sizeof(name));
    gets(name);

    printf("입력한 이름 : %s\n" , name);
     printf("입력한 주소 : %s\n" , address);

}