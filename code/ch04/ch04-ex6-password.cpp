	#include "stdio.h"
	main() {                               /*��¼���ж��û�����*/
		int password;                         /*�����������ʼ��*/
		do {
			 printf("�������û���¼����:");
			 scanf("%d",&password);          /*��������*/
			 if(password!=123456)            /*�������*/
			 printf("�������");
		   } while(password!=123456);         /*�������ʽ*/
		printf("��¼�ɹ�");
	}

