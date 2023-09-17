#include <stdio.h>
#include <string.h>
#include "class.h"
#include "student.h"
#include "teacher.h"
//初始化班级
void initClass(struct Class *myclass){
    printf("请输入班级名称：");
    scanf("%s",myclass->name);
    printf("请输入班级所在年级：");
    scanf("%d",&myclass->grade);
    myclass->stuNum=0;
}
/*通过输入方式加入学生*/
void add_student_input(struct Class *myclass){
    int i;
    /*在当前班级的学生名单后面加入新学生*/
    i=myclass->stuNum;
    inputStudent(&myclass->students[i]);
    myclass->stuNum++;
}
/*将已有学生信息加入到班级*/
void add_student(struct Class *myclass,struct Student s)
{
    int i;
    i=myclass->stuNum;
    myclass->students[i]=s;
    myclass->stuNum++;
}
/*通过输入方式加入教师*/
void update_teacher_input(struct Class *myclass)
{
    inputTeacher(&myclass->teacher);
}
/*将已有教师加入到班级*/
void update_teacher(struct Class *myclass,struct Teacher t)
{
    myclass->teacher=t;
}
void displayClass(struct Class aclass)
{
    int i;
    printf("班级名称：%s\n",aclass.name);
    printf("所在年级：%d\n",aclass.grade);
    printf("老师姓名：%s\n",aclass.teacher.tname);
    printf("班级学生信息：\n");
    for(i=0;i<aclass.stuNum;i++)
        displayStudent(aclass.students[i]);
}


