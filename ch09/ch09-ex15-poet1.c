#include <stdio.h>
#include <string.h>
#define M 4
int main()
{
    int i;
    char poetin[7];
    char *poet[M]={"���","�Ÿ�","�׾���","��ά"};
    char *intr[M]={"��̫�ף���������ʿ����������ʫ�ˣ�ʫ�ɡ�",
             "��������һ���������룬��֤������������ʢת˥��ʫʥ��",
             "�����죬ʫ����ù㷺����ʽ����������ƽ��ͨ�ס�",
             "��Ħڵ�����ŷ�̣�ʫ���л���������ʫ��ʫ��"};
    printf("��������Ҫ��ѯ��ʫ�ˣ����벻Ҫ�пո񣩣�");
    scanf("%s",poetin);
    for(i=0;i<M;i++)
        if(strcmp(poet[i],poetin)==0) {
            printf("%s\n",intr[i]);
            break;
        }
    if(i==M)
        printf("�Բ�����Ҫ��ѯ��ʫ�˲����ҵļ����С���");
    return 0;
}


