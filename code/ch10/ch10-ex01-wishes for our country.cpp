#include <stdio.h>  
#include <stdlib.h>  
#include <string.h>  
void  Input(){
	FILE *fpOut;                    /*�����ļ�ָ�� */
	char strLine[200];          /* �����ַ����� */
	/* 1.���ļ� */  
	fpOut = fopen("wishes.txt", "w");   
	if(fpOut == NULL) {     
		printf("�޷������ļ���\n");  
		exit(0);  
	}  
	/* 2.д�ļ� */ 
	while(true) { 
		printf("�������������ֺ�ף���\n");
		scanf("%s", strLine);  /*�Ӽ��̻�ȡһ�����֣����洢��strLine������ */
		if(!strcmp(strLine, "���"))
			break;
		fputs(strLine, fpOut);   /* ���ļ�fpOut��д���ף���� */   
		fputc('\n', fpOut);      /* ���ļ�fpOut��д��س��� */   
		memset(strLine, 0, sizeof(strLine));  /* ���strLine���� */   
	}  
	/* 3.�ر��ļ� */
	fclose(fpOut);      
}
int main(){                        
	printf("ͬѧ�ǵ�ף���￪ʼ¼��\n");
	Input();    /* ����ף����¼�빦�� */
	return 0;  
}  


