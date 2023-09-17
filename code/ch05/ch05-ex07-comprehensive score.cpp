#include <stdio.h>
#define M 5
int main()
{
    int iScore[M]={0};
    int iRate[M]={0,80,10,5,5};
    /*分项成绩存储在iScore[1]~iScore[4]中，综合成绩计算完成存入iScore[0]*/
    int i;
    printf("请输入学业平均成绩、竞赛获奖、班级贡献和活动参与成绩：\n");
    for(i=1;i<M;i++)
        scanf("%d",&iScore[i]);
    for(i=1;i<M;i++)
        iScore[0]+=iScore[i]*iRate[i];
    iScore[0]/=100;
    printf("该同学综合成绩是：%d\n",iScore[0]);
    return 0;
}


