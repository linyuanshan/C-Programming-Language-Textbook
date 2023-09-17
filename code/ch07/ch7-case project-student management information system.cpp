#include <stdio.h>
#include <stdlib.h>
#define MAXSTUNUM 1001
struct student
{
	int  id;        //学号 
	char name[10];   //姓名
	char gender;     //性别
	int  scores[3];  //成绩 
	int  total;      //总分
};

// 1.学生成绩录入
int InputScores(student ss[], int stu_num){
	printf("请依次输入学生学号、姓名、性别、高数、英语、C语言成绩：\n");
	printf("(学号输入-1表示输入结束)\n");
	int id;
	while(1)
	{
		scanf("%d",&id);
		if(id!=-1)
		{
			ss[stu_num].id=id;
			scanf("%s %c ",ss[stu_num].name,&ss[stu_num].gender);
			scanf("%d%d%d",&ss[stu_num].scores[0],&ss[stu_num].scores[1], &ss[stu_num].scores[2]);
			ss[stu_num].scores[3]=ss[stu_num].scores[0]+ss[stu_num].scores[1]+ ss[stu_num].scores[2];
			stu_num++;
		}
		else
		{
			printf("*****************成绩录入结束*****************\n");
			break;
		}
	}
	return stu_num;
}
// 2.学生成绩输出
void OutputScores(student ss[], int stu_num){
	int i, j;
	if(stu_num==0)
		printf("没有成绩数据！\n");
	else
	{
		printf("学号\t姓名\t性别\t高数\t英语\tC语言\t总分\n");
		for(i=0;i<stu_num;i++)
		{
			printf("%d\t%s\t%c\t",ss[i].id,ss[i].name,ss[i].gender);
			for(j=0;j<3;j++)
				printf("%d\t",ss[i].scores[j]);
			printf("%d\t",ss[i].total);
			printf("\n");
		}
	}
	printf("*****************成绩输出结束*****************\n");
}
// 3.学生成绩查询
void Inquiry(student ss[], int stu_num){
	int i, j;
	int id;
	if(stu_num==0)
		printf("没有成绩数据！\n");
	else
	{
		printf("请输入要查询学生学号：");
		scanf("%d",&id);
		for(i=0;i<stu_num;i++)
		{
			if(ss[i].id==id)
				break;
		}
		if(i<stu_num)
		{
			printf("学号\t姓名\t性别\t高数\t英语\tC语言\t总分\n");
			printf("%d\t%s\t%c\t",ss[i].id,ss[i].name,ss[i].gender);
			for(j=0;j<3;j++)
				printf("%d\t",ss[i].scores[j]);
			printf("%d\t",ss[i].total);
			printf("\n");
		}
		else
			printf("学号%d不存在！\n",id);
	}
	printf("*****************成绩查询结束*****************\n");
}
// 4.学生成绩统计
void AnalyzeScores(student ss[], int stu_num){
	int i, j, imax, imin, pass_count;
	double fave;
	if(stu_num==0)
		printf("没有成绩数据！\n");
	else
	{
		for(j=0;j<3;j++)
		{
			imax=ss[0].scores[j];
			imin=ss[0].scores[j];
			pass_count=0;
			fave=0;
			for(i=0;i<stu_num;i++)
			{
				if(imax<ss[i].scores[j])
					imax=ss[i].scores[j];
				if(imin>ss[i].scores[j])
					imin=ss[i].scores[j];
				if(ss[i].scores[j]>=60)
					pass_count++;
				fave+=ss[i].scores[j];
			}
			switch(j)
			{
				case 0:printf("数学");break;
				case 1:printf("英语");break;
				case 2:printf("C语言程序设计");break;
			}
			fave/=stu_num;
			printf("最高分%d,最低分%d,平均分%.1f,及格率%d%%\n",
				imax,imin,fave,pass_count*100/stu_num);
		}
	}
	printf("*****************成绩统计结束*****************\n");
}
// 5.学生成绩排名
void SortByScores(student ss[], int stu_num){
	int i, j, k;
	if(stu_num==0)
		printf("没有成绩数据！\n");
	else
	{
		for(i=0;i<stu_num-1;i++)
		{
			k=i;
			for(j=i+1;j<stu_num;j++)
				if(ss[k].total<ss[j].total)
					k=j;
			student s = ss[i];
			ss[i]=ss[k];
			ss[k]=s;
		}
		printf("排名\t学号\t姓名\t性别\t高数\t英语\tC语言\t总分\n");
		int rand=1;
		for(i=0;i<stu_num;i++)
		{
			if(i>0 && ss[i-1].total!=ss[i].total)
				rand=i+1;
			printf("%d\t%d\t%s\t%c\t",rand,ss[i].id,ss[i].name,ss[i].gender);
			for(j=0;j<3;j++)
				printf("%d\t",ss[i].scores[j]);
			printf("%d\t",ss[i].total);
			printf("\n");
		}
		printf("*****************成绩排名结束*****************\n");
	}
}
// 6.删除某个学生成绩
int DeleteById(student ss[], int stu_num){
	int i, k, id;
	if(stu_num==0)
		printf("没有成绩数据！\n");
	else
	{
		printf("请输入要删除学生学号：");
		scanf("%d",&id);
		for(i=0;i<stu_num;i++)
		{
			if(ss[i].id==id)
				break;
		}
		if(i<stu_num)
		{
			for(k=i;k<stu_num-1;k++)
				ss[k]=ss[k+1];                    
			stu_num--;
		}
		else
			printf("学号%d不存在！\n",id);
	}
	printf("*****************成绩删除结束*****************\n");
	return stu_num;
}
// 7.学生成绩修改
void ModifyById(student ss[], int stu_num){
	int i,id;
	if(stu_num==0)
		printf("没有成绩数据！\n");
	else
	{
		printf("请输入要修改学生学号：");
		scanf("%d",&id);
		for(i=0;i<stu_num;i++)
		{
			if(ss[i].id==id)
				break;
		}
		if(i<stu_num)
		{
			printf("请输入要修改学生的学号、姓名、性别、数学、英语、C语言成绩：\n");
			scanf("%d %s %c ",&ss[i].id,ss[i].name,&ss[i].gender);
			scanf("%d%d%d",&ss[i].scores[0],&ss[i].scores[1],&ss[i].scores[2]);
			ss[i].scores[3]=ss[i].scores[0]+ss[i].scores[1]+ss[i].scores[2];
		}
		else
			printf("学号%d不存在！\n",id);
	}
	printf("*****************成绩修改结束*****************\n");
}
// 8.成绩按学号排序
void SortByIds(student ss[], int stu_num){
	int i, j, k;
	if(stu_num==0)
		printf("没有成绩数据！\n");
	else
	{
		for(i=0;i<stu_num-1;i++)
		{
			k=i;
			for(j=i+1;j<stu_num;j++)
				if(ss[k].id>ss[j].id)
					k=j;
			student s = ss[i];
			ss[i]=ss[k];
			ss[k]=s;
		}
		printf("学号\t姓名\t性别\t高数\t英语\tC语言\t总分\n");
		for(i=0;i<stu_num;i++)
		{
			printf("%d\t%s\t%c\t",ss[i].id,ss[i].name,ss[i].gender);
			for(j=0;j<3;j++)
				printf("%d\t",ss[i].scores[j]);
			printf("%d\t",ss[i].total);
			printf("\n");
		}
		printf("*****************成绩按学号排序结束***********\n");
	}
}
int main(){
	student stus[MAXSTUNUM];
	int choice;                     //输入选择
	int stu_num=0;                  //实际学生数量
	
	printf("*****************学生成绩管理系统*****************\n");
	printf("\t\t1、成绩录入\n");
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
			printf("*****************1、成绩录入******************\n");
			stu_num = InputScores(stus, stu_num);
			break;
		case 2:
			printf("*****************2、成绩输出******************\n");
			OutputScores(stus, stu_num);
			break;
		case 3:
			printf("*****************3、成绩查询******************\n");
			Inquiry(stus, stu_num);
			break;
		case 4:
			printf("*****************4、成绩统计******************\n");
			AnalyzeScores(stus, stu_num);
			break;
		case 5:
			printf("*****************5、成绩排名******************\n");
			SortByScores(stus, stu_num);
			break;
		case 6:
			printf("*****************6、成绩删除******************\n");
			stu_num = DeleteById(stus, stu_num);
			break;
		case 7:
			printf("*****************7、成绩修改******************\n");
			ModifyById(stus, stu_num);
			break;
		case 8:
			printf("*****************8、成绩按学号排序************\n");
			SortByIds(stus, stu_num);
			break;
		}
	}
	return 0;
}


