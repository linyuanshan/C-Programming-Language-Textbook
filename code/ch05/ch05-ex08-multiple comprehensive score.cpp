#include <stdio.h>
#define MAXSTUNUM 50
#define M 5
int main()
{
    int iScore[MAXSTUNUM][M]={0};
    int iRate[5]={0,80,10,5,5};
    /*����ɼ��洢��iScore[1]~iScore[4]�У�
�ۺϳɼ�������ɴ���iScore[0]*/
    int i,j,iNum;
    printf("������ѧ��������");
    scanf("%d",&iNum);
    printf("������ÿλѧ����ѧҵƽ���ɼ��������񽱡��༶���׺ͻ����ɼ���
\n");
    for(j=0;j<iNum;j++)
        for(i=1;i<M;i++)
            scanf("%d",&iScore[j][i]);
    for(j=0;j<iNum;j++){
        for(i=1;i<M;i++)
            iScore[j][0]+=iScore[j][i]*iRate[i];
        iScore[j][0]/=100;
    }
    for(j=0;j<iNum;j++)
        printf("��%dλͬѧ���ۺϳɼ��ǣ�%d\n",j+1,iScore[j][0]);
    return 0;
}


