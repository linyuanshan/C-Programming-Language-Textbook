#include <stdio.h>
#define M 20
int main(){
    int iScore[M]={0,78,87,98,87,68,79,82,96,77};
    /*为使学号与下标对应，成绩从第1个数组元素开始存储*/
    int iId,i,input;
    printf("请输入插入成绩的学号：");
    scanf("%d",&iId);
    printf("请输入插入的成绩：");
    scanf("%d",&input);
    if(iId<1 || iId>10)
        printf("输入学号有误！\n");
    else{
        for(i=10;i>iId;i--)
            iScore[i]=iScore[i-1];
        iScore[i]=input;
    }
    printf("插入的成绩序列：");
    for(i=1;i<=10;i++)
        printf("%d ",iScore[i]);
    return 0;
}


