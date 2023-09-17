#ifndef STUDENT_H_INCLUDED
#define STUDENT_H_INCLUDED
struct Student
{
	int sid;
	char sname[20];
	char saddress[50];
};
void inputStudent(struct Student *pstu);
void displayStudent(struct Student stu);
#endif // STUDENT_H_INCLUDED
