#include <stdio.h>  
 
int main(){  
    int iNo; 
    char strName[32] = {0};  
    int iScores[3] = {0};
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
    	scanf("%d%s%d%d%d", &iNo, strName, &iScores[0], &iScores[1], &iScores[2]);
    	
    	if(iNo == -1)   /* ����-1��ʾ����¼����Ϣ */ 
    		break;
    	
    	/* 2.����Ϣת��Ϊ�ַ�����д���ļ��� */ 
    	fwrite(&iNo, sizeof(iNo), 1, pfOut);
    	fwrite(strName, sizeof(strName), 1, pfOut);
    	fwrite(&iScores[0], sizeof(iScores[0]), 1, pfOut);
    	fwrite(&iScores[1], sizeof(iScores[1]), 1, pfOut);
    	fwrite(&iScores[2], sizeof(iScores[2]), 1, pfOut);
	}
	
	/* 3.�ļ���д������ϣ��ر��ļ� */
	fclose(pfOut); 

    return 0;  
}  

