#include <stdio.h>
#include <stdlib.h>
#define M 4
int main(int argc,char *argv[])
{
    int i,j;
    char poetin[7];
    char *poet[M]={"���","�Ÿ�","�׾���","��ά"};
    char *intr[M]={"��̫�ף���������ʿ����������ʫ�ˣ�ʫ�ɡ�",
"��������һ���������룬��֤������������ʢת˥��ʫʥ��",
                 "�����죬ʫ����ù㷺����ʽ����������ƽ��ͨ�ס�",
                 "��Ħڵ�����ŷ�̣�ʫ���л���������ʫ��ʫ��",};
    for(j=1;j<argc;j++)
    {
        for(i=0;i<M;i++)
            if(strcmp(poet[i],argv[j])==0)
            {
                printf("%s��%s\n",poet[i],intr[i]);
                break;
            }
        if(i==M)
            printf("�Բ�����Ҫ��ѯ��ʫ��%s�����ҵļ����С���\n");
    }
    return 0;
}


