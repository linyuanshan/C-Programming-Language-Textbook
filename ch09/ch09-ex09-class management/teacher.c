#include <stdio.h>
#include "teacher.h"
void inputTeacher(struct Teacher *pteacher){
    printf("�������ʦ������");
    scanf("%s",pteacher->tname) ;
    printf("�������ʦ��ţ�");
    scanf("%d",&pteacher->tid);
    printf("�������ʦ���ڲ��ţ�");
    scanf("%s",pteacher->institute);
}
void displayTeacher(struct Teacher teacher){
    printf("��ʦ��ţ�%d\t������%s\t���ڲ��ţ�%s\n",
           teacher.tid,teacher.tname,teacher.institute);
}


