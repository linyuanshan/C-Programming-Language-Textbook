#include <stdio.h>
#define M 50
int main()
{
    int iScore[M],input;
    int iNum,i,flag=0;
    /*flag����Ƿ���ҵ���0��ʾû�в��ҵ�*/
    printf("������༶������");
    scanf("%d",&iNum);
    printf("������%d���ɼ���\n",iNum);
    for(i=0;i<iNum;i++)
        scanf("%d",&iScore[i]);
    printf("���������ѯ�ɼ���");
    scanf("%d",&input);
    for(i=0;i<iNum;i++)
        if(input==iScore[i]){
            if(flag==0)
                printf("�ɼ�Ϊ%d��ѧ��Ϊ��%d",input,i+1);
                /*����ǵ�һ���ҵ������*/
                /*ѧ�Ŵ�1��ʼ���������±��0��ʼ�����Է���i+1*/
            else
                printf(" %d",i+1);
            flag=1;
        }
    if(flag==0)
        printf("û���ҵ��ɼ�Ϊ%d��ѧ��",input);
    return 0;
}


