#include <stdio.h>
#define M 50
int main()
{
    int iScore[M],iNum,k,maxIndex;
    printf("��������������");
    scanf("%d",&iNum);
    printf("������%d���ɼ���\n",iNum);
    for(k=0;k<iNum;k++)
        scanf("%d",&iScore[k]);
    /*ʹ��maxIndex��¼���ֵ�±꣬iScore[maxIndex]Ϊ��ǰ���ֵ
��ʼ����iScore[0]Ϊ���ֵ����˳�ʼʱmaxIndex=0*/
    maxIndex=0;
    for(k=1;k<iNum;k++)
    /*�������飬����¼�����ֵ�ȵ�ǰԪ��ֵС����������ֵ�±�*/
    if(iScore[maxIndex]<iScore[k])
        maxIndex=k;
    printf("�ɼ����ֵΪ%d���±�Ϊ%d\n",iScore[maxIndex],maxIndex);
    return 0;
}


