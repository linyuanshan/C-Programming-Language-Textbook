#include <stdio.h>
int main()
{
    float sum=0,ave;
    int score;
    int scores[100];
    /*num��¼ѧ����������count��¼����ƽ���ֵ�ѧ������*/
    int num=0,count=0,i;
    printf("������ѧ���ɼ�����-1��Ϊ������ǣ���\n");
    scanf("%d",&score);
    while(score!=-1){
        scores[num]=score;
        sum+=score;
        num++;
        scanf("%d",&score);
    }
    if(num!=0){
        ave=sum/num;
        printf("ѧ��ƽ���ɼ�Ϊ��%.1f\n",ave);
        for(i=0;i<num;i++)
            if(scores[i]>ave)
            count++;
        printf("����ƽ���ɼ���ѧ������Ϊ%d\n",count);
    }
    else
        printf("û��������Ч�ɼ���\n");
    return 0;
}


