#include <stdio.h>
#include "student.h"
void inputStudent(struct Student *pstu){
	printf("请输入学生学号：");
	scanf("%d",&pstu->sid);
	printf("请输入学生姓名：");
	scanf("%s",pstu->sname);
	printf("请输入学生地址：");
	scanf("%s",pstu->saddress);
}
void displayStudent(struct Student stu){
	printf("学号：%d\t姓名：%s\t住址:%s\n",stu.sid,stu.sname,stu.saddress);
}

