#include <stdio.h>
int main()
{
    float sum=0,ave;
    int score;
    int scores[100];
    /*num记录学生总人数，count记录高于平均分的学生人数*/
    int num=0,count=0,i;
    printf("请输入学生成绩（以-1作为结束标记）：\n");
    scanf("%d",&score);
    while(score!=-1){
        scores[num]=score;
        sum+=score;
        num++;
        scanf("%d",&score);
    }
    if(num!=0){
        ave=sum/num;
        printf("学生平均成绩为：%.1f\n",ave);
        for(i=0;i<num;i++)
            if(scores[i]>ave)
            count++;
        printf("高于平均成绩的学生人数为%d\n",count);
    }
    else
        printf("没有输入有效成绩！\n");
    return 0;
}


