#include <stdio.h>
#include <stdlib.h>
#define MAXSTUNUM 1001
int main()
{
    int scores[MAXSTUNUM][5];
    int choice;                     //输入选择
    int stu_num=0;                  //实际学生数量
    int id,math,English,clanguage;  //各科成绩
    int imax,imin;                  //每科最高分和最低分
    int pass_count;                 //每科及格人数
    double pass_rate;               //及格率
    double fave;
    int i,j,k;
    printf("*****************学生成绩管理系统*****************\n");
    printf("\t\t1、成绩添加\n");
    printf("\t\t2、成绩输出\n");
    printf("\t\t3、成绩查询\n");
    printf("\t\t4、成绩统计\n");
    printf("\t\t5、成绩排名\n");
    printf("\t\t6、成绩删除\n");
    printf("\t\t7、成绩修改\n");
    printf("\t\t8、成绩按学号排序\n");
    printf("\t\t0、退出系统\n");
    printf("**************************************************\n");
    while(1)
    {
        printf("\n请选择功能：");
        scanf("%d",&choice);
        if(choice==0)
            break;
        switch(choice)
        {
        case 1:
            printf("*****************1、成绩添加******************\n");
            printf("请依次输入学生学号、高数、英语、C语言成绩：\n");
            printf("(学号输入-1表示输入结束)\n");
            while(1)
            {
                scanf("%d",&id);
                if(id!=-1)
                {
                    scores[stu_num][0]=id;
                    scanf("%d%d%d",&math,&English,&clanguage);
                    scores[stu_num][1]=math;
                    scores[stu_num][2]=English;
                    scores[stu_num][3]=clanguage;
                    scores[stu_num][4]=math+English+clanguage;
                    stu_num++;
                }
                else
                {
                    printf("*****************成绩添加结束*****************\n");
                    break;
                }
            }
            break;
        case 2:
            printf("*****************2、成绩输出******************\n");
            if(stu_num==0)
                printf("没有成绩数据！\n");
            else
            {
                printf("学号\t高数\t英语\tC语言\t总分\n");
                for(i=0;i<stu_num;i++)
                {
                    for(j=0;j<5;j++)
                        printf("%d\t",scores[i][j]);
                    printf("\n");
                }
            }
            printf("*****************成绩输出结束*****************\n");
            break;
        case 3:
            printf("*****************3、成绩查询******************\n");
            if(stu_num==0)
                printf("没有成绩数据！\n");
            else
            {
                printf("请输入要查询学生学号：");
                scanf("%d",&id);
                for(i=0;i<stu_num;i++)
                {
                    if(scores[i][0]==id)
                        break;
                }
                if(i<stu_num)
                {
                    printf("学号\t高数\t英语\tC语言\t总分\n");
                    for(j=0;j<5;j++)
                        printf("%d\t",scores[i][j]);
                    printf("\n");
                }
                else
                    printf("学号%d不存在！\n",id);
            }
            printf("*****************成绩查询结束*****************\n");
            break;
        case 4:
            printf("*****************4、成绩统计******************\n");
            if(stu_num==0)
                printf("没有成绩数据！\n");
            else
            {
                for(j=1;j<4;j++)
                {
                    imax=scores[0][j];
                    imin=scores[0][j];
                    pass_count=0;
                    fave=0;
                    for(i=0;i<stu_num;i++)
                    {
                        if(imax<scores[i][j])
                            imax=scores[i][j];
                        if(imin>scores[i][j])
                            imin=scores[i][j];
                        if(scores[i][j]>=60)
                            pass_count++;
                        fave+=scores[i][j];
                    }
                    switch(j)
                    {
                        case 1:printf("数学");break;
                        case 2:printf("英语");break;
                        case 3:printf("C语言程序设计");break;
                    }
                    fave/=stu_num;
                    printf("最高分%d,最低分%d,平均分%.1f,及格率%d%%\n",
                           imax,imin,fave,pass_count*100/stu_num);
                }
            }
            printf("*****************成绩统计结束*****************\n");
            break;
        case 5:
            printf("*****************5、成绩排名******************\n");
            if(stu_num==0)
                printf("没有成绩数据！\n");
            else
            {
                for(i=0;i<stu_num-1;i++)
                {
                    k=i;
                    for(j=i+1;j<stu_num;j++)
                        if(scores[k][4]<scores[j][4])
                            k=j;
                    for(j=0;j<5;j++)
                    {
                        int tmp=scores[i][j];
                        scores[i][j]=scores[k][j];
                        scores[k][j]=tmp;
                    }
                }
                printf("排名\t学号\t高数\t英语\tC语言\t总分\n");
                int rand=1;
                for(i=0;i<stu_num;i++)
                {
                    if(i>0 && scores[i-1][4]!=scores[i][4])
                        rand=i+1;
                    printf("%d\t",rand);
                    for(j=0;j<5;j++)
                        printf("%d\t",scores[i][j]);
                    printf("\n");
                }
                printf("*****************成绩排名结束*****************\n");
                break;
            }
        case 6:
            printf("*****************6、成绩删除******************\n");
            if(stu_num==0)
                printf("没有成绩数据！\n");
            else
            {
                printf("请输入要删除学生学号：");
                scanf("%d",&id);
                for(i=0;i<stu_num;i++)
                {
                    if(scores[i][0]==id)
                        break;
                }
                if(i<stu_num)
                {
                    for(k=i;k<stu_num-1;k++)
                        for(j=0;j<5;j++)
                            scores[k][j]=scores[k+1][j];
                    stu_num--;
                }
                else
                    printf("学号%d不存在！\n",id);
            }
            printf("*****************成绩删除结束*****************\n");
            break;
        case 7:
            printf("*****************7、成绩修改******************\n");
            if(stu_num==0)
                printf("没有成绩数据！\n");
            else
            {
                printf("请输入要修改学生学号：");
                scanf("%d",&id);
                for(i=0;i<stu_num;i++)
                {
                    if(scores[i][0]==id)
                        break;
                }
                if(i<stu_num)
                {
                    printf("请输入要修改学生的学号、及数学、英语、C语言成绩：\n");
                    scanf("%d%d%d%d",&id,&math,&English,&clanguage);
                    scores[i][0]=id;
                    scores[i][1]=math;
                    scores[i][2]=English;
                    scores[i][3]=clanguage;
                    scores[i][4]=math+English+clanguage;
                }
                else
                    printf("学号%d不存在！\n",id);
            }
            printf("*****************成绩修改结束*****************\n");
            break;
        case 8:
            printf("*****************8、成绩按学号排序************\n");
            if(stu_num==0)
                printf("没有成绩数据！\n");
            else
            {
                for(i=0;i<stu_num-1;i++)
                {
                    k=i;
                    for(j=i+1;j<stu_num;j++)
                        if(scores[k][0]>scores[j][0])
                            k=j;
                    for(j=0;j<5;j++)
                    {
                        int tmp=scores[i][j];
                        scores[i][j]=scores[k][j];
                        scores[k][j]=tmp;
                    }
                }
                printf("学号\t高数\t英语\tC语言\t总分\n");
                for(i=0;i<stu_num;i++)
                {
                    for(j=0;j<5;j++)
                        printf("%d\t",scores[i][j]);
                    printf("\n");
                }
                printf("*****************成绩按学号排序结束***********\n");
                break;
            }
        }
    }
    return 0;
}


