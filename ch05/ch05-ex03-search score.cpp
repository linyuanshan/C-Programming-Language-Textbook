#include <stdio.h>
#define M 50
int main()
{
    int iScore[M],input;
    int iNum,i,flag=0;
    /*flag标记是否查找到，0表示没有查找到*/
    printf("请输入班级人数：");
    scanf("%d",&iNum);
    printf("请输入%d个成绩：\n",iNum);
    for(i=0;i<iNum;i++)
        scanf("%d",&iScore[i]);
    printf("请输入待查询成绩：");
    scanf("%d",&input);
    for(i=0;i<iNum;i++)
        if(input==iScore[i]){
            if(flag==0)
                printf("成绩为%d的学号为：%d",input,i+1);
                /*如果是第一次找到则输出*/
                /*学号从1开始，而数组下标从0开始，所以返回i+1*/
            else
                printf(" %d",i+1);
            flag=1;
        }
    if(flag==0)
        printf("没有找到成绩为%d的学生",input);
    return 0;
}


