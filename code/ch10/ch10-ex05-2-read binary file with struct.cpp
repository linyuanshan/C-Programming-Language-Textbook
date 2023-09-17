#include <stdio.h>  
struct Student{
	int iNo; 
	char strName[32];  
	int iScores[3];
};
int main(){  
	int iNo; 
	char strName[32] = {0};  
	int iScores[3] = {0};
	FILE* pfIn = NULL;
	int i = 1;
	int iTotalScore = 0;
	Student stu;    
	/* 1.���ļ� */ 
	pfIn = fopen("I:\\devc_projs\\teaching\\stu_scores.dat", "rb");
	if(!pfIn){
		printf("���ļ�����\n");
		return -1;
	}
	/* ��ӡ��ͷ */
	printf(" ѧ��   ���� ���� Ӣ�� C���� �ܷ�\n"); 
	while(!feof(pfIn)){
		/* 2.���ļ��ж�ȡѧ���ɼ���Ϣ�����洢�������� */ 
		fread(&stu, sizeof(Student), 1, pfIn);    	
		/* �Գɼ���Ϣ���мӹ������Ѽӹ������Ϣ��ʾ����Ļ�� */
		iTotalScore = stu.iScores[0] + stu.iScores[1] + stu.iScores[2];
		printf("%d, %s, %d,  %d,  %d,  %d\n", stu.iNo, stu.strName,
			stu.iScores[0], stu.iScores[1], stu.iScores[2], iTotalScore);
	}	
	/* 3.�ļ���д������ϣ��ر��ļ� */
	fclose(pfIn); 
	return 0;  
} 


