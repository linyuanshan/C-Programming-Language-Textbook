#include <stdio.h>
int main()
{
    int scores[50],max,min,sum=0;
    int num,i,count=0;
    double ave,rate;
    printf("������ѧ��������");
    scanf("%d",&num);
    printf("������ѧ���ɼ���\n");
    for(i=0;i<num;i++)
        scanf("%d",&scores[i]);
    max=scores[0];
    min=scores[0];
    for(i=0;i<num;i++){
        sum+=scores[i];
        if(max<scores[i])
            max=scores[i];
        if(min>scores[i])
            min=scores[i];
        if(scores[i]>=60)
            count++;
    }
    /*ƽ���ֶ���Ϊdouble���ͣ�����ʱ��sumǿ������ת��Ϊdouble*/
    ave=(double)sum/num;
    /*���㼰����ʱ����Ҫ��countǿ������ת��Ϊdouble����*/
    rate=1.0*count/num;
    printf("******�ɼ�����*******\n");
    printf("��߷��ǣ�%d����ͷ��ǣ�%d\n",max,min);
    /*���ʹ�ø�ʽ���Ʒ�%0.1lfָ���������1λС��*/
    printf("ƽ�����ǣ�%0.1lf\n",ave);
    /*ʹ��%%���%������ٷֱȽ������������Ϊrate*100*/
    printf("�����ʣ�%.1lf%%",rate*100);
    return 0;
}


