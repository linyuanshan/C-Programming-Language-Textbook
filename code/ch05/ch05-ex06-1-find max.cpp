#include <stdio.h>
#define M 50
int main()
{
    int iScore[M],iNum,k,maxIndex;
    printf("请输入总人数：");
    scanf("%d",&iNum);
    printf("请输入%d个成绩：\n",iNum);
    for(k=0;k<iNum;k++)
        scanf("%d",&iScore[k]);
    /*使用maxIndex记录最大值下标，iScore[maxIndex]为当前最大值
初始假设iScore[0]为最大值，因此初始时maxIndex=0*/
    maxIndex=0;
    for(k=1;k<iNum;k++)
    /*遍历数组，若记录的最大值比当前元素值小，则更新最大值下标*/
    if(iScore[maxIndex]<iScore[k])
        maxIndex=k;
    printf("成绩最大值为%d，下标为%d\n",iScore[maxIndex],maxIndex);
    return 0;
}


