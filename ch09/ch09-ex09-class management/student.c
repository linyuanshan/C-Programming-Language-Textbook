#include <stdio.h>
#include "student.h"
void inputStudent(struct Student *pstu){
	printf("������ѧ��ѧ�ţ�");
	scanf("%d",&pstu->sid);
	printf("������ѧ��������");
	scanf("%s",pstu->sname);
	printf("������ѧ����ַ��");
	scanf("%s",pstu->saddress);
}
void displayStudent(struct Student stu){
	printf("ѧ�ţ�%d\t������%s\tסַ:%s\n",stu.sid,stu.sname,stu.saddress);
}

