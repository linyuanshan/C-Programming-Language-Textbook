#include <stdio.h>
int main()
{
    int scores[50],max,min,sum=0;
    int num,i,count=0;
    double ave,rate;
    printf("请输入学生人数：");
    scanf("%d",&num);
    printf("请输入学生成绩：\n");
    for(i=0;i<num;i++)
        scanf("%d",&scores[i]);
    max=scores[0];
    min=scores[0];
    for(i=0;i<num;i++){
        sum+=scores[i];
        if(max<scores[i])
            max=scores[i];
        if(min>scores[i])
            min=scores[i];
        if(scores[i]>=60)
            count++;
    }
    /*平均分定义为double类型，计算时将sum强制类型转换为double*/
    ave=(double)sum/num;
    /*计算及格率时，需要将count强制类型转换为double类型*/
    rate=1.0*count/num;
    printf("******成绩分析*******\n");
    printf("最高分是：%d，最低分是：%d\n",max,min);
    /*输出使用格式控制符%0.1lf指明输出保留1位小数*/
    printf("平均分是：%0.1lf\n",ave);
    /*使用%%输出%，输出百分比结果因此输出内容为rate*100*/
    printf("及格率：%.1lf%%",rate*100);
    return 0;
}


