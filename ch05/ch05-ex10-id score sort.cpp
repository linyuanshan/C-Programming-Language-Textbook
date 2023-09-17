#include <stdio.h>
#define MAXSTUNUM 50
int main()
{
    int iScore[MAXSTUNUM][2]={0},tmpScore[2];
    int i,j,k,iNum,index;
    printf("请输入学生人数：");
    scanf("%d",&iNum);
    printf("请输入每位学生的学号和综合成绩：\n");
    for(i=0;i<iNum;i++)
        scanf("%d %d",&iScore[i][0],&iScore[i][1]);
    /*对数组进行排序，排序依据是iScore[i][1]*/
    for(i=0;i<iNum-1;i++){
        index=i;
        for(j=i+1;j<iNum;j++)
            /*找到当前最大成绩行下标*/
            if(iScore[j][1]>iScore[index][1])
                index=j;
        /*将最大成绩行整体与最前面的行互换，因此需要遍历所有列*/
        for(k=0;k<2;k++){
            tmpScore[k]=iScore[i][k];
            iScore[i][k]=iScore[index][k];
            iScore[index][k]=tmpScore[k];
        }
    }
    printf("最终排名：\t学号\t成绩\n");
    for(i=0;i<iNum;i++)
        printf("第%2d名：\t%d \t%d\n",i+1,iScore[i][0],iScore[i][1]);
    return 0;
}


