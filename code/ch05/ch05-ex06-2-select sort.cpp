#include <stdio.h>
#define M 50
int main()
{
    int iScore[M],iNum,maxIndex;
    int i,k,tmp;
    /*ʹ��iCount[i]��¼�ɼ�Ϊi��ѧ������*/
    printf("��������������");
    scanf("%d",&iNum);
    printf("������%d���ɼ���\n",iNum);
    for(k=0;k<iNum;k++)
        scanf("%d",&iScore[k]);
    for(i=0;i<iNum-1;i++)
    {
        maxIndex=i;
        for(k=i+1;k<iNum;k++)
            if(iScore[maxIndex]<iScore[k])
                maxIndex=k;
        tmp=iScore[i];
        iScore[i]=iScore[maxIndex];
        iScore[maxIndex]=tmp;
    }
    printf("�����ɼ���\n");
    for(k=0;k<iNum;k++)
        printf("%d ",iScore[k]);
    return 0;
}


