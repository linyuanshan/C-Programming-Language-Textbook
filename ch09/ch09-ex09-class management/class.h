#ifndef CLASS_H_INCLUDED
#define CLASS_H_INCLUDED
#include "student.h"
#include "teacher.h"
struct Class{
    char name[20];
    int grade;
    struct Student students[50];
    int stuNum;
    struct Teacher teacher;
};
/*��ʼ���༶*/
void initClass(struct Class *myclass);
/*ͨ�����뷽ʽ����ѧ��*/
void add_student_input(struct Class *myclass);
/*������ѧ����Ϣ���뵽�༶*/
void add_student(struct Class *myclass,struct Student s);
/*ͨ�����뷽ʽ�����ʦ*/
void update_teacher_input(struct Class *myclass);
/*�����н�ʦ���뵽�༶*/
void update_teacher(struct Class *myclass,struct Teacher t);
/*����༶��Ϣ*/
void displayClass(struct Class aclass);
#endif // CLASS_H_INCLUDED


