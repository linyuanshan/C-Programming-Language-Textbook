#include <stdio.h>
#define M 50
int main()
{
    int iScore[M],iNum,i;
    int iCount[101]={0};
    /*ʹ��iCount[i]��¼�ɼ�Ϊi��ѧ������*/
    printf("��������������");
    scanf("%d",&iNum);
    printf("������%d���ɼ���\n",iNum);
    for(i=0;i<iNum;i++)
        scanf("%d",&iScore[i]);
    for(i=0;i<iNum;i++)
         /*�ɼ�iScore[i]��Ӧ�±��iCount����Ԫ���ۼ�*/
        iCount[iScore[i]]++;
    for(i=100;i>=0;i--)
        if(iCount[i]!=0)
            printf("%d��%d��\n",i,iCount[i]);
    return 0;
}


