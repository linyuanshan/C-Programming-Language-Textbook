#include <stdio.h>
#include "student.h"
#include "teacher.h"
#include "class.h"
int main()
{
    struct Class aclass;
    printf("����һ���༶\n");
    initClass(&aclass);
    printf("Ϊ�༶��ӽ�ʦ��\n");
    update_teacher_input(&aclass);
    printf("Ϊ�༶���ѧ����\n");
    add_student_input(&aclass);
    printf("��ʾ��ǰ�༶��Ϣ��\n");
    displayClass(aclass);
    printf("Ϊ�༶������ʦ��\n");
    struct Teacher onet;
    inputTeacher(&onet);
    update_teacher(&aclass,onet);
    printf("Ϊ�༶���ѧ����\n");
    struct Student ones;
    inputStudent(&ones);
    add_student(&aclass,ones);
    displayClass(aclass);
    return 0;
}


