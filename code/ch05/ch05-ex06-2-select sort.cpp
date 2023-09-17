#include <stdio.h>
#define M 50
int main()
{
    int iScore[M],iNum,maxIndex;
    int i,k,tmp;
    /*使用iCount[i]记录成绩为i的学生人数*/
    printf("请输入总人数：");
    scanf("%d",&iNum);
    printf("请输入%d个成绩：\n",iNum);
    for(k=0;k<iNum;k++)
        scanf("%d",&iScore[k]);
    for(i=0;i<iNum-1;i++)
    {
        maxIndex=i;
        for(k=i+1;k<iNum;k++)
            if(iScore[maxIndex]<iScore[k])
                maxIndex=k;
        tmp=iScore[i];
        iScore[i]=iScore[maxIndex];
        iScore[maxIndex]=tmp;
    }
    printf("排序后成绩：\n");
    for(k=0;k<iNum;k++)
        printf("%d ",iScore[k]);
    return 0;
}


