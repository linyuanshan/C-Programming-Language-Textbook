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
/*初始化班级*/
void initClass(struct Class *myclass);
/*通过输入方式加入学生*/
void add_student_input(struct Class *myclass);
/*将已有学生信息加入到班级*/
void add_student(struct Class *myclass,struct Student s);
/*通过输入方式加入教师*/
void update_teacher_input(struct Class *myclass);
/*将已有教师加入到班级*/
void update_teacher(struct Class *myclass,struct Teacher t);
/*输出班级信息*/
void displayClass(struct Class aclass);
#endif // CLASS_H_INCLUDED


