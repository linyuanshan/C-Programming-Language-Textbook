#include <stdio.h>
struct Student{
	int iNo; 
	char strName[32];  
	int iScores[3];
};
int main(){  
	Student  stu;
	FILE* pfOut = NULL;
	int i = 1;    
	/* 1.���ļ� */ 
	pfOut = fopen("I:\\devc_projs\\teaching\\stu_scores.dat", "wb");
	if(!pfOut){
		printf("���ļ�����\n");
		return -1;
	}
	while(1){
		printf("�������%dλѧ������Ϣ(ѧ�š�������������Ӣ�C����)��\n", i++);
			scanf("%d%s%d%d%d", &stu.iNo, stu.strName, &stu.iScores[0], 
				&stu.iScores[1], &stu.iScores[2]);    	
			if(stu.iNo == -1)   /* ����-1��ʾ����¼����Ϣ */ 
				break;    	
			/* 2.����Ϣת��Ϊ�ַ�����д���ļ��� */ 
			fwrite(&stu, sizeof(Student), 1, pfOut);
	}	
	/* 3.�ļ���д������ϣ��ر��ļ� */
	fclose(pfOut); 
	return 0;  
}


