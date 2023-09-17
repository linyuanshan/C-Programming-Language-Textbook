#include <stdio.h>
#include <string.h>
#include "class.h"
#include "student.h"
#include "teacher.h"
//��ʼ���༶
void initClass(struct Class *myclass){
    printf("������༶���ƣ�");
    scanf("%s",myclass->name);
    printf("������༶�����꼶��");
    scanf("%d",&myclass->grade);
    myclass->stuNum=0;
}
/*ͨ�����뷽ʽ����ѧ��*/
void add_student_input(struct Class *myclass){
    int i;
    /*�ڵ�ǰ�༶��ѧ���������������ѧ��*/
    i=myclass->stuNum;
    inputStudent(&myclass->students[i]);
    myclass->stuNum++;
}
/*������ѧ����Ϣ���뵽�༶*/
void add_student(struct Class *myclass,struct Student s)
{
    int i;
    i=myclass->stuNum;
    myclass->students[i]=s;
    myclass->stuNum++;
}
/*ͨ�����뷽ʽ�����ʦ*/
void update_teacher_input(struct Class *myclass)
{
    inputTeacher(&myclass->teacher);
}
/*�����н�ʦ���뵽�༶*/
void update_teacher(struct Class *myclass,struct Teacher t)
{
    myclass->teacher=t;
}
void displayClass(struct Class aclass)
{
    int i;
    printf("�༶���ƣ�%s\n",aclass.name);
    printf("�����꼶��%d\n",aclass.grade);
    printf("��ʦ������%s\n",aclass.teacher.tname);
    printf("�༶ѧ����Ϣ��\n");
    for(i=0;i<aclass.stuNum;i++)
        displayStudent(aclass.students[i]);
}


