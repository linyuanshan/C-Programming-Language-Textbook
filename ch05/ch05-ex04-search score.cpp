#include <stdio.h>
#define M 20
int main(){
    int iScore[M]={0,78,87,98,87,68,79,82,96,77};
    /*Ϊʹѧ�����±��Ӧ���ɼ��ӵ�1������Ԫ�ؿ�ʼ�洢*/
    int iId,i,input;
    printf("���������ɼ���ѧ�ţ�");
    scanf("%d",&iId);
    printf("���������ĳɼ���");
    scanf("%d",&input);
    if(iId<1 || iId>10)
        printf("����ѧ������\n");
    else{
        for(i=10;i>iId;i--)
            iScore[i]=iScore[i-1];
        iScore[i]=input;
    }
    printf("����ĳɼ����У�");
    for(i=1;i<=10;i++)
        printf("%d ",iScore[i]);
    return 0;
}


