#include <stdio.h>
#define MAXSTUNUM 50
int main()
{
    int iScore[MAXSTUNUM][2]={0},tmpScore[2];
    int i,j,k,iNum,index;
    printf("������ѧ��������");
    scanf("%d",&iNum);
    printf("������ÿλѧ����ѧ�ź��ۺϳɼ���\n");
    for(i=0;i<iNum;i++)
        scanf("%d %d",&iScore[i][0],&iScore[i][1]);
    /*�����������������������iScore[i][1]*/
    for(i=0;i<iNum-1;i++){
        index=i;
        for(j=i+1;j<iNum;j++)
            /*�ҵ���ǰ���ɼ����±�*/
            if(iScore[j][1]>iScore[index][1])
                index=j;
        /*�����ɼ�����������ǰ����л����������Ҫ����������*/
        for(k=0;k<2;k++){
            tmpScore[k]=iScore[i][k];
            iScore[i][k]=iScore[index][k];
            iScore[index][k]=tmpScore[k];
        }
    }
    printf("����������\tѧ��\t�ɼ�\n");
    for(i=0;i<iNum;i++)
        printf("��%2d����\t%d \t%d\n",i+1,iScore[i][0],iScore[i][1]);
    return 0;
}


