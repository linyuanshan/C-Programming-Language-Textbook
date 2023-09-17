#ifndef TEACHER_H_INCLUDED
#define TEACHER_H_INCLUDED
struct Teacher{
    char tname[20];
    int tid;
    char institute[100];
};
/*输入教师信息*/
void inputTeacher(struct Teacher *pteacher);
/*输出教师信息*/
void displayTeacher(struct Teacher teacher);
#endif // TEACHER_H_INCLUDED


