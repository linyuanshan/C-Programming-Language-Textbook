#include <stdio.h>
#include "teacher.h"
void inputTeacher(struct Teacher *pteacher){
    printf("请输入教师姓名：");
    scanf("%s",pteacher->tname) ;
    printf("请输入教师编号：");
    scanf("%d",&pteacher->tid);
    printf("请输入教师所在部门：");
    scanf("%s",pteacher->institute);
}
void displayTeacher(struct Teacher teacher){
    printf("教师编号：%d\t姓名：%s\t所在部门：%s\n",
           teacher.tid,teacher.tname,teacher.institute);
}


