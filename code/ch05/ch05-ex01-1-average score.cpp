#include <stdio.h>
int main()
{
    float sum=0, ave;
    int score;
    /*num记录学生总人数*/
    int num=0, i;
    printf("请输入学生成绩（以-1作为结束标记）：\n");
    scanf("%d",&score);
    while(score!=-1){
        sum+=score;
        num++;
        scanf("%d",&score);
    }
    if(num!=0){
        ave=sum/num;
        printf("学生平均成绩为：%.1f\n",ave);
    }
    else
        printf("没有输入有效成绩！\n");
    return 0;
}


