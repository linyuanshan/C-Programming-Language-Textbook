#include <stdio.h>  
 
int main(){  
    int iNo; 
    char strName[32] = {0};  
    int iScores[3] = {0};
    FILE* pfOut = NULL;
    int i = 1;
    
    /* 1.���ļ� */ 
    pfOut = fopen("I:\\devc_projs\\teaching\\stu_scores.txt", "w");
    if(!pfOut){
    	printf("���ļ�����\n");
    	return -1;
	}

    while(1){
    	printf("�������%dλѧ������Ϣ(ѧ�š�������������Ӣ�C����)��\n", i++);
    	scanf("%d%s%d%d%d", &iNo, strName, &iScores[0], &iScores[1], &iScores[2]);
    	
    	if(iNo == -1)   /* ����-1��ʾ����¼����Ϣ */ 
    		break;
    	
    	/* 2.����Ϣת��Ϊ�ַ�����д���ļ��� */ 
    	fprintf(pfOut, "%d, %s, %d, %d, %d\n", iNo, strName, iScores[0], iScores[1], iScores[2]);
	}
	
	/* 3.�ļ���д������ϣ��ر��ļ� */
	fclose(pfOut); 

    return 0;  
}  

