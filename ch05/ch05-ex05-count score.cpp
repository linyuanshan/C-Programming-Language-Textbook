#include <stdio.h>
#define M 50
int main()
{
    int iScore[M],iNum,i;
    int iCount[101]={0};
    /*使用iCount[i]记录成绩为i的学生人数*/
    printf("请输入总人数：");
    scanf("%d",&iNum);
    printf("请输入%d个成绩：\n",iNum);
    for(i=0;i<iNum;i++)
        scanf("%d",&iScore[i]);
    for(i=0;i<iNum;i++)
         /*成绩iScore[i]对应下标的iCount数组元素累加*/
        iCount[iScore[i]]++;
    for(i=100;i>=0;i--)
        if(iCount[i]!=0)
            printf("%d分%d人\n",i,iCount[i]);
    return 0;
}


