#include <stdio.h>
#define MAXSTUNUM 50
#define M 5
int main()
{
    int iScore[MAXSTUNUM][M]={0};
    int iRate[5]={0,80,10,5,5};
    /*分项成绩存储在iScore[1]~iScore[4]中，
综合成绩计算完成存入iScore[0]*/
    int i,j,iNum;
    printf("请输入学生人数：");
    scanf("%d",&iNum);
    printf("请输入每位学生的学业平均成绩、竞赛获奖、班级贡献和活动参与成绩：
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
        printf("第%d位同学的综合成绩是：%d\n",j+1,iScore[j][0]);
    return 0;
}


