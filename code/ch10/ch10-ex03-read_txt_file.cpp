#include <stdio.h>  
 
int main(){  
    int iNo; 
    char strName[32] = {0};  
    int iScores[3] = {0};
    FILE* pfIn = NULL;
    int i = 1;
    int iTotalScore = 0;
    
    /* 1.���ļ� */ 
    pfIn = fopen("I:\\devc_projs\\teaching\\stu_scores.txt", "r");
    if(!pfIn){
    	printf("���ļ�����\n");
    	return -1;
	}

    /* ��ӡ��ͷ */
	printf(" ѧ��   ���� ���� Ӣ�� C���� �ܷ�\n"); 
	while(!feof(pfIn)){
    	/* 2.���ļ��ж�ȡѧ���ɼ���Ϣ�����洢�������� */ 
    	fscanf(pfIn, "%d%s%d%d%d\n", &iNo, strName, &iScores[0], &iScores[1], &iScores[2]);
    	
    	/* �Գɼ���Ϣ���мӹ������Ѽӹ������Ϣ��ʾ����Ļ�� */
		iTotalScore = iScores[0] + iScores[1] + iScores[2];
    	printf("%d, %s, %d,  %d,  %d,  %d\n", iNo, strName, iScores[0], iScores[1], iScores[2], iTotalScore);
	}
	
	/* 3.�ļ���д������ϣ��ر��ļ� */
	fclose(pfIn); 

    return 0;  
}  

