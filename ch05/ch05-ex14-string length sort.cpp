#include <stdio.h>
#include <string.h>
#define M 20
int main()
{
    char strA[M],strB[M],strC[M],strTmp[M];
    printf("�������ַ���A��");
    gets(strA);
    printf("�������ַ���B��");
    gets(strB);
    printf("�������ַ���C��");
    gets(strC);
    if(strlen(strA)>strlen(strB)){
        strcpy(strTmp,strA);
        strcpy(strA,strB);
        strcpy(strB,strTmp);
    }
    if(strlen(strA)>strlen(strC)){
        strcpy(strTmp,strA);
        strcpy(strA,strC);
        strcpy(strC,strTmp);
    }
    if(strlen(strB)>strlen(strC)){
        strcpy(strTmp,strC);
        strcpy(strC,strB);
        strcpy(strB,strTmp);
    }
    printf("�ַ����ȴ�С����Ϊ��\n");
    puts(strA);
    puts(strB);
    puts(strC);
    return 0;
}


