#ifndef TEACHER_H_INCLUDED
#define TEACHER_H_INCLUDED
struct Teacher{
    char tname[20];
    int tid;
    char institute[100];
};
/*�����ʦ��Ϣ*/
void inputTeacher(struct Teacher *pteacher);
/*�����ʦ��Ϣ*/
void displayTeacher(struct Teacher teacher);
#endif // TEACHER_H_INCLUDED


