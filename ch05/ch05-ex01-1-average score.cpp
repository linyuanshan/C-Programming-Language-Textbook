#include <stdio.h>
int main()
{
    float sum=0, ave;
    int score;
    /*num��¼ѧ��������*/
    int num=0, i;
    printf("������ѧ���ɼ�����-1��Ϊ������ǣ���\n");
    scanf("%d",&score);
    while(score!=-1){
        sum+=score;
        num++;
        scanf("%d",&score);
    }
    if(num!=0){
        ave=sum/num;
        printf("ѧ��ƽ���ɼ�Ϊ��%.1f\n",ave);
    }
    else
        printf("û��������Ч�ɼ���\n");
    return 0;
}


