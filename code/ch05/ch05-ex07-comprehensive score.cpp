#include <stdio.h>
#define M 5
int main()
{
    int iScore[M]={0};
    int iRate[M]={0,80,10,5,5};
    /*����ɼ��洢��iScore[1]~iScore[4]�У��ۺϳɼ�������ɴ���iScore[0]*/
    int i;
    printf("������ѧҵƽ���ɼ��������񽱡��༶���׺ͻ����ɼ���\n");
    for(i=1;i<M;i++)
        scanf("%d",&iScore[i]);
    for(i=1;i<M;i++)
        iScore[0]+=iScore[i]*iRate[i];
    iScore[0]/=100;
    printf("��ͬѧ�ۺϳɼ��ǣ�%d\n",iScore[0]);
    return 0;
}


