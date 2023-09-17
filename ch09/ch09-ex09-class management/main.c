#include <stdio.h>
#include "student.h"
#include "teacher.h"
#include "class.h"
int main()
{
    struct Class aclass;
    printf("构造一个班级\n");
    initClass(&aclass);
    printf("为班级添加教师：\n");
    update_teacher_input(&aclass);
    printf("为班级添加学生：\n");
    add_student_input(&aclass);
    printf("显示当前班级信息：\n");
    displayClass(aclass);
    printf("为班级更换教师：\n");
    struct Teacher onet;
    inputTeacher(&onet);
    update_teacher(&aclass,onet);
    printf("为班级添加学生：\n");
    struct Student ones;
    inputStudent(&ones);
    add_student(&aclass,ones);
    displayClass(aclass);
    return 0;
}


